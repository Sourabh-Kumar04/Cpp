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
![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/02edf3f0-6ed7-41e7-aa66-234ddaed1add)

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
![image](https://github.com/Sourabh-Kumar04/Cpp/assets/155216316/c59e1e9d-a313-4cc3-b3ae-6ed63e2a370a)










































