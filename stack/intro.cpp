/*
STACK:
it is a linear data structures that follow a particular order in which the operations are performed. to implement the stack, it is required to maintain the pointer to the top of the stack, which is the last element to be inserted because we access the elements only on the top of the stack.
LIFO(last in first out):this strategy states that the element that is inserted last will come out first.
**************************************************
BASIC OPERATIONS:
push():to insert an element into the stack
pop():to remove an element from the stack
top():returns the top elements of teh stack
isempty():returns true if stack is empty else return false
size():return the size of the stack

****************************************************
OVERFLOW:adds an items in the stack,if the stack is full, then it is said to be an overflow condition.

UNDERFLOW:removes an item from the stack. the item are popped in reversed order in which they are pushed. if the stack is empty, then it is said to be an underflow condition.

****************************************************
TIME COMPLEXITY

|operations|complexity|
|push()    |O(1)      |
|pop()     |O(1)      |
|isempty() |O(1)      |
|size()    |O(1)      |

****************************************************
types of stack:
1.REGISTER STACK:this type of stack is also a memory element present in the memory unit and can handle a small amount of data only. the height of the register stack is always limited as the size of the register stack is very small compared to the memory.

2.MEMORY STACK: this type of stack cn handle a large amount of memory data. the height of the memory stack is flexible as it occupies a large amount of memory data.

****************************************************
Applications of the stack:
->Infix to Postfix /Prefix conversion
->Redo-undo features at many places like editors, photo shop.
->Forward and backward features in web browsers
->Used in many algorithms like Tower of Hanoi, tree traversals, stock span problems, and histogram problems.
->Backtracking is one of the algorithm designing techniques. Some examples of backtracking are the Knight-Tour problem, N-Queen problem, find your way through a maze, and game-like chess or checkers in all these problems we dive into someway if that way is not efficient we come back to the previous state and go into some another path. To get back from a current state we need to store the previous state for that purpose we need a stack.
->In Graph Algorithms like Topological Sorting and Strongly Connected Components

****************************************************
IMPLEMENTATION OF STACK:
1.ARRAY
2.LINKED LIST

-----------------------------------------------
implementation of stack using array

advantages of array implementation:
1.easy to implement
2.memory is saved as pointer is not involved

disadvantages of array implementation
1.it is not dynamic i.e., it does not grow and shrink depending upon needs at runtime
2.the total size of the the stack must be defined forehead.

------------------------------------------------------
implementation of stack using linked list

advantages of linked list implementation
1.the linked list implementation of a stack can grow and shrink according to the needs at runtime
2.it is used in many virtual machine like JVM

disadvantages of linked list implementation
1.require extra memory due to the involvement of pointers.
2.random accessing is not possible in stack


*/