/*
LINKED LIST: a linked list is a linear data structure, in which the element are not stored at contiguous memory locations. the elements in a linked list are linked using pointers.
a linked list consists of nodes where each node contains a data field and a reference (link) to next nod in the list.
TYPES OF LINKED LIST:
1. single linked list:
2. double linked list
3. circular linked list

Advantages of linked list :
-> dynamic data structures:memory can be allocated or de-allocated at run time based on operation 
-> ease of insertion/deletion:these two operation of elements are simpler than arrays since no shifting of elements is required
-> efficient memory utilization:size increases and decreases as per the requirements so this avoids the wastage of memory.
-> implementation: advance DS like stack, queue , graph , hash map can be implemented.

Disadvantages of linked list
-> memory usage: the use of pointers require more memory and is complex.
-> accessing a node: random access is not possible due to dynamic memory allocation.
-> search operation costly:searching for an element is costly and requires O(n) time complexity. 
-> traversing in reverse order:traversing is time consuming and reverse traversing is not possible.
 
application of linked list:
->dynamic memory allocation
-> implementation of graphs


1.SINGLY-LINKED LIST:traversal of items can be done in the forward direction only due to the linking of every node to its next node.

    head------->data1|next----->data2|next----->data3|null

implementation:

struct node
{
    int data;
   struct node *next;
   node(int x)
   {
    data=x;
    next=NULL;
   }

}

OPERATION ON SINGLE_LINKED LIST:
1.INSERTION:
    ->inserting at the beginning
    ->inserting at the top
    ->inserting at specific position
2. DELETION:
    ->deletion at the beginning
    ->deletion at the top
    ->deletion at specific position
3.SEARCH
4.DISPLAY--done

question 
->implementation
->detect loop in linked list
->find length of loop in linked list
->check if singly linked list is palindrome
->remove duplicate: sorted and unsorted
->remove loops
->swap nodes without swapping data
->move last element to front 
->intersection of two linked list


2.DOUBLY LINKED LIST: traversal of items can be done in both forward and backward direction as every node contains an additional prev pointer that points to the previous node.

        null|data|next<------>prev|data|next<------>prev|data|null

struct node
{
    int data;
   struct node *next;
   struct node *prev;
   node(int x)
   {
    data=x;
    next=NULL;
    prev=NULL;
   }
}

OPERATION ON DOUBLY LINKED LIST
1.INSERTION:
    ->inserting at the beginning of the list
    ->inserting the after a given node
    ->inserting at the end
    ->inserting before a given node
2. DELETION:
    ->deletion at the beginning
    ->deletion at the top
    ->deletion at specific position
3.DISPLAY
->reverse a doubly linked list
->copy a linked list with next and arbit pointer
->swap Kth node from beginning with kth node from end in a linked list
->merge sort for doubly list
->sort a k sorted doubly linked list
->rotate doubly linked list by N nodes
->Merge Two Balanced Binary Search Trees
->convert a binary tree into doubly linked list in spiral function
->convert a binary tree into doubly linked list
*/