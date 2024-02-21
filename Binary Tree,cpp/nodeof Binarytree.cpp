#include <iostream>
using namespace std;

// Using struct to make Node
// stuct is a user definred data type

struct node {
    int data;
    struct node* left;
    struct node* right;
};


// Using class to makr Node
// class is a user defined data type

class Node{
    public:
        int data;
        Node* left;
        Node* right;

};
