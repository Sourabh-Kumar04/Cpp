# Tree Data Structure

## Definition of Tree:
A tree data structure is a hierarchical arrangement used to represent and organize data in a way that facilitates navigation and searching. It consists of nodes connected by edges, forming a recursive structure. Let’s explore the basic terminology and representation of trees in C++:

## Basic Terminology Tree Data Structure:
- Parent Node: The predecessor of a node.
- Child Node: The immediate successor of a node.
- Root Node: The topmost node without any parent.
- Leaf Node: Nodes without child nodes.
- Ancestor: Predecessor nodes on the path to the root.
- Descendant: Successor nodes from a leaf node.
- Sibling: Children of the same parent.
- Level of a Node: Count of edges from the root.
- Internal Node: A node with at least one child.
- Neighbour of a Node: Parent or child nodes.
- Subtree: A node and its descendants.
- Representation of a Node in C++:
struct Node {
    int data;
    struct Node* left;  // Reference to left child
    struct Node* right; // Reference to right child
};

Binary Tree:
A tree with at most two child nodes.
Widely used for expression evaluation, databases, etc.
Here’s a simple example of a binary tree in C++:

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Example tree:
//       1
//      / \
//     2   3
//    / \   \
//   4   5   6

int main() {
    // Creating nodes
    Node* root = new Node{1};
    root->left = new Node{2};
    root->right = new Node{3};
    root->left->left = new Node{4};
    root->left->right = new Node{5};
    root->right->right = new Node{6};

    // Accessing data
    std::cout << "Root data: " << root->data << std::endl;
    std::cout << "Left child data: " << root->left->data << std::endl;
    std::cout << "Right child data: " << root->right->data << std::endl;

    // Clean up (delete nodes)
    delete root->left->left;
    delete root->left->right;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
