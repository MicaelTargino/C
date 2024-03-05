# The goal
  The goal of this repo is to store my data structures and algorithms practice while studying the C language, and document my progress
  
## Milestones
- ✅ fixed array
- ✅ Basic Pointer
- ✅ Pointer Arithmetic
- Pointers and Functions
- Pointer to Pointer
- Function Pointers
- Dynamic Memory Allocation
- Structs and Pointers
- dynamic array
- strings
- linked lists
- hash table (map)
- sets
- Trees
- Graphs

## Milestones Descriptions

### ✅ Pointer Basics

- ✅ Write a program to declare an integer and a pointer to an integer. Assign the address of the integer to the pointer and change the value of the integer using the pointer.
- ✅ Create a function that swaps the values of two integers using pointers.

### Pointer Arithmetic

- ✅ Given an array of integers, write a program to print the array using pointer arithmetic instead of array indexing.
- ✅ Modify the above program to reverse the array using pointer arithmetic.

### Pointers and Functions

- ✅ Write a function that returns the length of a string using a pointer to traverse the string (without using the `strlen` function).
- ✅ Implement a function that takes two pointers to integer arrays and their sizes as parameters, and prints the sum of each element in the arrays (assume both arrays are of the same size).

### Pointer to Pointer

- Demonstrate the use of a pointer to a pointer by modifying a variable at three levels of indirection.
- Create a dynamic 2D array using a pointer to a pointer and fill it with values, then print the 2D array.

### Function Pointers

- Write a function that takes a function pointer as an argument and calls the function pointed to.
- Implement a simple calculator (add, subtract, multiply, divide) using function pointers where the operation is chosen at runtime.

### Dynamic Memory Allocation

- Use `malloc` and `free` to dynamically allocate memory for an array of integers and fill it with random numbers, then free the memory properly.
- Create a program that uses pointers to copy a string to another string dynamically allocated (without using `strcpy`).

### Structures and Pointers

- Define a structure for a student (including name, age, and GPA) and demonstrate how to access and modify its fields using pointers.
- Write a function that sorts an array of structures containing student information by GPA using pointers.

### Dynamic Size Arrays

- **Implement a Vector**: Create your own dynamic size array (similar to C++ vector) that can resize itself as items are added or removed.
- **Array of Strings**: Dynamically allocate an array of strings where each string is also dynamically allocated. Implement functions to add, remove, and search for strings.
- **Merge Arrays**: Write a function to merge two dynamically allocated arrays into a new dynamically allocated array, ensuring no memory leaks.

### Strings

- **String Concatenation**: Write a function that concatenates two strings dynamically, ensuring the resulting string is properly null-terminated.
- **String Split**: Implement a function that splits a string into an array of strings based on a delimiter. Make sure to dynamically allocate memory for the array and the strings within it.
- **Reverse String**: Create a function to reverse a string in place without using any additional dynamic memory allocation.

### Linked Lists

- Implement a singly linked list with operations to add, delete, and display elements using pointers.
- Extend the singly linked list implementation to a doubly linked list and add reverse traversal functionality.

### Hash Tables

- **Implement a Hash Table**: Design and implement your own hash table with dynamic resizing. Focus on key insertion, deletion, and search functionalities.
- **Collision Resolution**: Extend your hash table implementation to handle collisions using chaining. Each bucket should use a linked list to store multiple entries.
- **Frequency Counter**: Write a program that uses a hash table to count the frequency of each element in a dynamic array.

### Sets

- **Implement a Set**: Create a dynamic set data structure that supports insertion, deletion, and check for existence operations efficiently.
- **Set Operations**: Implement set union, intersection, and difference operations for your dynamic set structure.
- **Subset Check**: Write a function to check if one set is a subset of another using your dynamic set implementation.


### Trees

#### Binary Trees

- **Implement a Binary Tree**: Create a binary tree structure with functions for insertion, deletion, and searching.
- **Tree Traversal**: Implement in-order, pre-order, and post-order traversal functions for your binary tree.
- **Level Order Traversal**: Write a function to perform level order traversal (breadth-first search) of a binary tree.
- **Height of a Tree**: Write a program to find the height of a binary tree.
- **Check Balanced**: Implement a function to check if a binary tree is balanced. A tree is balanced if the height of the two subtrees of any node never differ by more than one.

#### Binary Search Trees (BST)

- **Implement a BST**: Create a binary search tree with operations for insertion, search, and deletion.
- **Find Min and Max**: Write functions to find the minimum and maximum value contained in a BST.
- **Successor and Predecessor**: Implement functions to find the successor and predecessor of a given value in a BST.

#### Advanced Tree Structures

- **AVL Tree**: Implement an AVL tree, which is a self-balancing binary search tree.
- **Binary Heap**: Create a binary heap and implement operations such as insert, delete, and heapify.

### Graphs

#### Graph Representation

- **Adjacency Matrix**: Implement a graph using an adjacency matrix and perform basic operations like adding and removing an edge.
- **Adjacency List**: Represent a graph using an adjacency list and implement functions for adding and removing edges.

#### Graph Traversal

- **Depth-First Search (DFS)**: Implement DFS for a graph represented as both an adjacency matrix and an adjacency list.
- **Breadth-First Search (BFS)**: Implement BFS for a graph, ensuring it works for both representations.

#### Graph Algorithms

- **Detect Cycle**: Write a program to detect a cycle in a graph for both directed and undirected graphs.
- **Shortest Path**: Implement Dijkstra's algorithm to find the shortest path between two nodes in a graph.
- **Topological Sort**: Perform a topological sort on a directed acyclic graph (DAG).

