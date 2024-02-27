# Linked List

## Basic of Linked List
- **"Linked List"** is a linear data structure, in which elements are not stored at a contiguous location, rather they are linked using pointers. Linked List forms a series of connected nodes, where each node stores the data and the address of the next node. OR
- A Linked List is a linear data structure which looks like a chain of nodes, where each node is a different element. Unlike Arrays, Linked List elements are not stored at a contiguous location. 
- **'Node List'** A node in a linked list typically consists of two components:
  1. **Data :**  It holds the actual value or data associated with the node.
  2. **Next Pointer:** It stores the memory address (reference) of the next node in the sequence.
  3. **Head and Tail:** The linked list is accessed through the head node, which points to the first node in the list. The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node.

![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/b259fcb0-8abd-423c-a5a0-5ee5b21934c8)


## Why Linked List Data Structure is Needed?
There few advantages Linked List that will help in understanding the importance of Linked List
- **Dynamic Data structure:** The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion.
- **Ease of Insertion/Deletion:** The insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion, Just the address needed to be updated.
- **Efficient Memory Utilization:** As we know Linked List is a dynamic data structure the size increases or decreases as per the requirement so this avoids the wastage of memory.
- **Implementation:** Various advanced data structures can be implemented using a linked list like a stack, queue, graph, hash maps, etc.

### Difference betweeen Array And Linked List
![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/48e1eb28-7a2b-489d-ad52-48afe8591cd1)

##### Memory Allocation in Array and  Linked List
![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/fd5ba872-b009-4f9a-ab76-6dd9d3d5ceef)



## Types of Linked Lists
1. Single-Linked List
2. Double-Linked List
3. Circular Linked List

## 1. Single Linked List
In a singly linked list, each node contains a reference to the next node in the sequence. Traversing a singly linked list is done in a forward direction.

![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/3cadee0c-5159-4e74-934f-8e8ba78ba488)

#### Representation of Single Linked List
- **A Node Creation**
~~~
// A Single linked list node 
class Node { 
public: 
    int data; 
    Node* next; 
};
~~~

## 2. Double Linked List
In a doubly linked list, each node contains references to both the next and previous nodes. This allows for traversal in both forward and backward directions, but it requires additional memory for the backward reference

![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/3aeecfb7-6179-4592-9a46-3a312fff56ba)


#### Representation of Double Linked List
- **A Node Creation**
~~~
/* Node of a doubly linked list */
class Node { 
public: 
    int data; 
    Node* next; // Pointer to next node in DLL 
    Node* prev; // Pointer to previous node in DLL 
};
~~~

## 3. Circular Linked List
In a circular linked list, the last node points back to the head node, creating a circular structure. It can be either singly or doubly linked.

![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/ff56365c-7e64-49a1-b5f8-ba90036a5699)


### Operation on Linked List
1. **Insertion:** Adding a new node to a linked list involves adjusting the pointers of the existing nodes to maintain the proper sequence. Insertion can be performed at the beginning, end, or any position within the list
2. **Deletion:** Removing a node from a linked list requires adjusting the pointers of the neighboring nodes to bridge the gap left by the deleted node. Deletion can be performed at the beginning, end, or any position within the list.
3. **Searching:** Searching for a specific value in a linked list involves traversing the list from the head node until the value is found or the end of the list is reached.


### Complexity Analysis Of Linked List
- Time Complexity: 0(n)
- Auxiliary Complexity: 0(n)


### Advantage  of Linked List
- **Dynamic Size:** Linked lists can grow or shrink dynamically, as memory allocation is done at runtime.
- **Insertion and Deletion:** Adding or removing elements from a linked list is efficient, especially for large lists.
- **Flexibility:** Linked lists can be easily reorganized and modified without requiring a contiguous block of memory.

### Disadvantages of Linked Lists
- **Random Access:** Unlike arrays, linked lists do not allow direct access to elements by index. - - -Traversal is required to reach a specific node.
- **Extra Memory:** Linked lists require additional memory for storing the pointers, compared to arrays.


## Operation n Single Linked List
### Insertion
#### 1. **Insert a node at the start/beginning/front of a Linked List**
- Approach:
  - To insert a node at the start/beginning/front of a Linked List, we need to:
    1. Make the first node of Linked List linked to the new node
    2. Remove the head from the original first node of Linked List
    3. Make the new node as the Head of the Linked List.

![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/62dced36-3e06-46ca-9671-44d7bb4f6fca)
    

~~~
// Given a reference (pointer to pointer)
// to the head of a list and an int,
// inserts a new node on the front of
// the list.
void push(Node** head_ref, int new_data)
{
 
    // 1. allocate node
    Node* new_node = new Node();
 
    // 2. put in the data
    new_node->data = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. Move the head to point to
    // the new node
    (*head_ref) = new_node;
}
~~~
- Complexity Analysis:
  - **Time Complexity: O(1)**, We have a pointer to the head and we can directly attach a node and change the pointer. So the Time complexity of inserting a node at the head position is O(1) as it does a constant amount of work.
  - **Auxiliary Space: O(1)**

#### 2. **Insert a node after a given node in a Linked List**
**Approach:** To insert a node after a given node in a Linked List, we need to:
- Check if the given node exists or not.
  1. If it do not exists,
     - terminate the process.
  2. If the given node exists,
     - Make the element to be inserted as a new node
     - Change the next pointer of given node to the new node
     - Now shift the original next pointer of given node to the next pointer of new node

![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/5323f332-9894-4d3b-8fb0-1b7fb855fc2d)

~~~
// Given a node prev_node, insert a
// new node after the given
// prev_node
void insertAfter(Node* prev_node, int new_data)
{
    // 1. Check if the given prev_node is NULL
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    // 2. Allocate new node
    Node* new_node = new Node();
 
    // 3. Put in the data
    new_node->data = new_data;
 
    // 4. Make next of new node as
    // next of prev_node
    new_node->next = prev_node->next;
 
    // 5. move the next of prev_node
    // as new_node
    prev_node->next = new_node;
}
~~~
##### Complexity Analysis:
- **Time complexity: O(1)**, since prev_node is already given as argument in a method, no need to iterate over list to find prev_node
- **Auxiliary Space: O(1)** since using constant space to modify pointers
- 

#### 3. Insert a node at the end of a Linked List
**Approach:** To insert a node at the end of a Linked List, we need to:
- Go to the last node of the Linked List
- Change the next pointer of last node from NULL to the new node
- Make the next pointer of new node as NULL to show the end of Linked List

![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/2d45b796-30f3-4e00-bd00-12558c2f081b)

~~~
// Given a reference (pointer to pointer) to the head
// of a list and an int, appends a new node at the end
void append(Node** head_ref, int new_data)
{
    // 1. allocate node
    Node* new_node = new Node();
 
    // Used in step 5
    Node* last = *head_ref;
 
    // 2. Put in the data
    new_node->data = new_data;
 
    // 3. This new node is going to be
    // the last node, so make next of
    // it as NULL
    new_node->next = NULL;
 
    // 4. If the Linked List is empty,
    // then make the new node as head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
 
    // 5. Else traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }
 
    // 6. Change the next of last node
    last->next = new_node;
    return;
}
~~~

##### Complexity Analysis:
- **Time complexity: O(N)**, where N is the number of nodes in the linked list. Since there is a loop from head to end, the function does O(n) work. 
This method can also be optimized to work in O(1) by keeping an extra pointer to the tail of the linked list/
- **Auxiliary Space: O(1)**

### Deletion in Single Linked List
You can delete an element in a list from:
- Beginning
- End
- Middle

#### Deleting from the Beginning of the Singled Linked list
To delete the entire linked list from the beginning in C++, you can follow these steps:
- 1. Make sure your linked list is properly structured. A linked list consists of nodes, where each node contains a data element and a pointer to the next node in the list. The last node should have its ‘next’ pointer set to NULL.
- 2. Implement a destructor for your linked list that deletes all the nodes, starting from the head of the list.

~~~
Point head to the next node i.e. second node
    temp = head
    head = head->next
    
Make sure to free unused memory
    free(temp); or delete temp;
~~~

~~~
#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};

// Function to delete the entire linked list
void deleteList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Print the original list
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    // Delete the linked list
    deleteList(head);

    // Now the list is deleted, and all nodes have been freed.

    return 0;
}
~~~


#### Deleting from the End of the Linked List
To delete the last node of a linked list in C++, you can follow these steps:
1. Check if the linked list is empty. If it is, there’s no last node to delete, so the function can return without doing anything.
2. If the linked list is not empty, check if there’s only one node (head). If so, set the head to NULL to release it, as there are no more nodes in the list.
3. If the linked list has more than one node, traverse to the second-to-last node. You can do this by iterating through the linked list until the next node of the current node is the last node.
4. Set the next pointer of the second-to-last node to NULL, effectively removing the last node from the linked list.
5. Free the memory occupied by the last node to prevent memory leaks.
Here’s an example of a function that deletes the last node of a linked list:

~~~
Point head to the previous element i.e. last second element
    Change next pointer to null
    struct node *end = head;
    struct node *prev = NULL;
    while(end->next)
    {
        prev = end;
        end = end->next;
    }
    prev->next = NULL;
    
Make sure to free unused memory
    free(end); or delete end;
~~~

~~~
#include <iostream>

// Node structure
struct Node {
  int data;
  Node* next;
};

class LinkedList {
  private:
    Node* head;

  public:
    LinkedList() {
      head = NULL;
    }

    // Add new element at the end of the list
    void push_back(int newElement) {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL;

      if (head == NULL) {
        head = newNode;
      } else {
        Node* temp = head;
        while (temp->next != NULL) {
          temp = temp->next;
        }
        temp->next = newNode;
      }
    }

    // Delete last node of the list
    void pop_back() {
      if (head != NULL) {
        if (head->next == NULL) {
          head = NULL;
        } else {
          Node* temp = head;
          while (temp->next->next != NULL) {
            temp = temp->next;
          }
          Node* lastNode = temp->next;
          temp->next = NULL;
          free(lastNode);
        }
      }
    }

    // Display the content of the list
    void PrintList() {
      Node* temp = head;
      if (temp != NULL) {
        std::cout << "The list contains: ";
        while (temp != NULL) {
          std::cout << temp->data << " ";
          temp = temp->next;
        }
        std::cout << std::endl;
      } else {
        std::cout << "The list is empty.\n";
      }
    }
};

// Test the code
int main() {
  LinkedList MyList;

  // Add four elements in the list.
  MyList.push_back(10);
  MyList.push_back(20);
  MyList.push_back(30);
  MyList.push_back(40);

  MyList.PrintList();

  // Delete the last node
  MyList.pop_back();
  MyList.PrintList();

  return 0;
}
~~~
Output:
~~~
The list contains: 10 20 30 40
The list contains: 10 20 30
~~~



#### Deleting a Specific Node
To delete a node from the middle of a linked list in C++, you can follow these steps:
1. Find the node to be deleted.
2. Adjust the pointers of the nodes before and after the node to be deleted.
3. Delete the node.

~~~
Keeps track of pointer before node to delete and pointer to node to delete
    temp = head;
    prev = head;
    for(int i = 0; i < position; i++)
    {
        if(i == 0 && position == 1)
            head = head->next;
            free(temp)
        else
        {
            if (i == position - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if(prev == NULL) // position was greater than number of nodes in the list
                    break;
                temp = temp->next; 
            }
        }
    }
~~~

~~~
// Step 1: Find the node to be deleted
struct Node {
    int data;
    Node* next;
};

void deleteNode(Node** head, int dataToDelete) {
    // If the list is empty, return
    if (*head == nullptr) return;

    // If the node to be deleted is the head node, delete it and update the head pointer
    if ((*head)->data == dataToDelete) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }

    // Otherwise, traverse the list to find the node to be deleted
    Node* currentNode = *head;
    while (currentNode->next != nullptr && currentNode->next->data != dataToDelete) {
        currentNode = currentNode->next;
    }

    // If the node to be deleted is not found, return
    if (currentNode->next == nullptr) return;

    // Step 2: Adjust the pointers of the nodes before and after the node to be deleted
    Node* nodeToDelete = currentNode->next;
    currentNode->next = nodeToDelete->next;

    // Step 3: Delete the node
    delete nodeToDelete;
}
~~~

###### Recursive Method to delete a node from linked list
~~~
// C++ program to delete a node in
// singly linked list recursively
 
#include <bits/stdc++.h>
using namespace std;
 
struct node {
    int info;
    node* link = NULL;
    node() {}
    node(int a)
        : info(a)
    {
    }
};
 
// Deletes the node containing 'info'
// part as val and alter the head of
// the linked list (recursive method)
void deleteNode(node*& head, int val)
{
 
    // Check if list is empty or we
    // reach at the end of the
    // list.
    if (head == NULL) {
        cout << "Element not present in the list\n";
        return;
    }
 
    // If current node is the
    // node to be deleted
    if (head->info == val) {
        node* t = head;
 
        // If it's start of the node head
        // node points to second node
        head = head->link;
 
        // Else changes previous node's
        // link to current node's link
        delete (t);
        return;
    }
    deleteNode(head->link, val);
}
 
// Utility function to add a
// node in the linked list
// Here we are passing head by
// reference thus no need to
// return it to the main function
void push(node*& head, int data)
{
    node* newNode = new node(data);
    newNode->link = head;
    head = newNode;
}
 
// Utility function to print
// the linked list (recursive
// method)
void print(node* head)
{
 
    // cout<<endl gets implicitly
    // typecasted to bool value
    // 'true'
    if (head == NULL and cout << endl)
        return;
    cout << head->info << ' ';
    print(head->link);
}
 
int main()
{
 
    // Starting with an empty linked list
    node* head = NULL;
 
    // Adds new element at the
    // beginning of the list
    push(head, 10);
    push(head, 12);
    push(head, 14);
    push(head, 15);
 
    // original list
    print(head);
 
    // Call to delete function
    deleteNode(head, 20);
 
    // 20 is not present thus no change
    // in the list
    print(head);
 
    deleteNode(head, 10);
    print(head);
 
    deleteNode(head, 14);
    print(head);
 
    return 0;
}


##### Iterative Method to delete an element from the linked list:
~~~
#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int number;
    Node* next;
};
 
void Push(Node** head, int A)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->number = A;
    n->next = *head;
    *head = n;
}
 
void deleteN(Node** head, int position)
{
    Node* temp;
    Node* prev;
    temp = *head;
    prev = *head;
    for (int i = 0; i < position; i++) {
        if (i == 0 && position == 1) {
            *head = (*head)->next;
            free(temp);
        }
        else {
            if (i == position - 1 && temp) {
                prev->next = temp->next;
                free(temp);
            }
            else {
                prev = temp;
 
                // Position was greater than
                // number of nodes in the list
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
}
 
void printList(Node* head)
{
    while (head) {
        if (head->next == NULL)
            cout << "[" << head->number << "] "
                 << "[" << head << "]->"
                 << "(nil)" << endl;
        else
            cout << "[" << head->number << "] "
                 << "[" << head << "]->" << head->next
                 << endl;
        head = head->next;
    }
    cout << endl << endl;
}
 
// Driver code
int main()
{
    Node* list = (Node*)malloc(sizeof(Node));
    list->next = NULL;
    Push(&list, 1);
    Push(&list, 2);
    Push(&list, 3);
 
    printList(list);
 
    // Delete any position from list
    deleteN(&list, 1);
    printList(list);
    return 0;
}
~~~

























