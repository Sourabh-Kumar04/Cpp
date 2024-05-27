#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/evp.h>
#include <openssl/sha.h>
// #include "crypto.h"
#include <openssl/crypto.h>

struct block {
   unsigned char prevHash[SHA256_DIGEST_LENGTH];
   int blockData;
   struct block *link; 
}*head;

void addBlock(int);
void verifyChain();
void alterNthBlock(int, int);
void hackChain();
unsigned char* toString(struct block);
// void hashPrinter(unsigned char, int);
void hashPrinter();
// int hashCompare(unsigned char*, unsigned char*);
int hashCompare();
void printBlock();
void printAllChain();



// SHA256(src,size,dest)
// asc and dest are of type unsigned char *

void addBlock(int data)
{
    if(head == NULL)
    {
        head = malloc( sizeof ( struct block ));
        SHA256("", sizeof(""), head -> prevHash);
        head -> blockData = data;
        return;
    }
    struct block *currentBlock = head;
    while(currentBlock -> link)
        currentBlock = currentBlock -> link;
    struct block *newBlock = malloc (sizeof(struct block));
    currentBlock -> link = newBlock;
    newBlock -> blockData = data;
    SHA256(toString (*currentBlock), sizeof(*currentBlock), newBlock -> prevHash);
}

void verifyChain()
{
    if(head == NULL)
    {
        printf("BlockChain is empty! try again after adding some blocks!\n");
        return ;
    }
    struct block *curr = head -> link, *prev = head;
    int count = 1;
    while(curr)
    {
        printf("%d\t[%d]\t", count++, curr -> blockData);
        hashPrinter(SHA256(toString(*prev), sizeof(*prev), NULL));
        printf(" - ");
        if (hashCompare(SHA256(toString(*prev), sizeof(*prev),NULL), curr -> link))
            printf("Verified!\n");
        else 
            printf("Verification Failed!\n");
        prev == curr;
        curr == curr -> link; 
    }
}

void alterNthBlock(int n, int newData)
{
    struct block * curr = head;
    if (curr == NULL)
    {
        printf("Nth block does not exit! \n");
        return;
    }
    int count = 0;
    while(count != n)
    {
        if (curr -> link == NULL && count != n)
        {
            printf("Nth block does not exist! \n");
            return;
        }
        else if(count == n)
            break;
        curr = curr ->link;
        count++;
    }
    printf("Before: ");
        printBlock(curr);
    printf("\n");
}

void hackChain()
{
    struct block *curr = head, *prev;
    if (curr == NULL)
    {
        printf("BlockChain is empty! \n");
        return ;
    }
    while(1)
    {
        prev = curr;
        curr = curr -> link;
        if (curr ==NULL)
            return;
        if (!hashCompare(SHA256(toString(*prev),sizeof(*prev), NULL),curr -> prevHash))
        {
            hashPrinter(
                SHA256(toString(*prev), sizeof(*prev), curr -> prevHash),
                SHA256_DIGEST_LENGTH
            );
            printf("\n");
        }
    }
}

unsigned char* toString(struct block b)
{
    unsigned char *str = malloc(sizeof(unsigned char)* sizeof(b));
    memcpy(str, &b, sizeof(b));
    return str;
}


void hashPrinter(unsigned char hash[], int length)
{
    for(int i = 0; i < length; i++)
        printf("%02x", hash[i]);
}

int hashCompare(unsigned char *str1, unsigned char *str2)
{
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        if(str1[i] != str2[i])
            return 0;
    return 1;
}

void printBlock(struct block *b)
{
    printf("[%p]t", b);
    hashPrinter(b -> prevHash, sizeof(b -> prevHash));
    printf("\t[%d]\t", b -> blockData);
    printf("%p\n", b -> link);
}

void printAllChain()
{
    struct block *curr = head;
    int count = 0;
    while(curr)
    {
        printBlock(curr);
        curr = curr -> link;
    }
}

void main ()
{
    int c, n, r;
    printf("1.addBlock\n 2. add n random block\n 3. alterNthBlock\n 4. print \n ");
    while(1)
    {
        printf("Choice: ");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &n);
                break;
            case 2:
                printf("How many blocks to enter?: ");
                scanf("%d", &c);
                for(int i; i < n; i++)
                {
                    r = rand()%(n*10);
                    printf("Entering: %d\n", r);
                    addBlock(r);
                }
                break;
            case 3:
                printf("Which block to alter?: ");
                // scanf("%d", &n);
                scanf("%d", &r);
                alterNthBlock(n,r);
                break;
            case 4:
                // printAllBlock();
                printAllChain();
                break;
            case 5:
                verifyChain();
                break;
            case 6:
                hackChain();
                break;
            default:
                printf("Wrong choice! \n");
                break;
        }
    }    
}

// gcc blockChain2.c -o blockChain.c.o -lcrypto
// ./blockchain.c.o
