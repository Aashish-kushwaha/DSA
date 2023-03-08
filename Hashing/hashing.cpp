/*
HASHING: hashing is a technique or process of mapping keys, and values into the hash table by using hash function it is done for faster access to elements the efficiency of mapping depends on the efficiency of the hash function
hashing mainly used to implement dictionary where we have key value pair.
it provide SEARCH INSERT AND DELETE in constant time complexity    

hashing is not useful 
-> funding closest value
-> sorting data 
-> prefix searching


application of hashing
-> dictionaries 
-> database indexing
-> cryptography
-> caches
-> interpreters/symbol table in compilers
-> routers
 


 hash function
 create a large universe of keys and use a hash function and convert it into small value an store it into array

 requirement of hash function 
* it should always generate the same value every time for same key
* should generate values from 0 to n-1
* should be fast
* should uniformly distribute large keys into hash table slots.


example of hash function
1. for integer :
                h(large key)= large key%m
2. for string:
              str[]="abcd"
            (str[0]*x^0+ str[1]*x^1+ str[2]*x^2+ str[3]*x^3)/m
3. universal hashing   

collision handling

in hashing collision is bound to happen 
-> if we know in advance ,then we can do perfect hashing.
-> if we do not know keys, then we use one of the following :
1.chaining
2.open addressing 
|->linear probing
|->Quadratic probing
|->double hashing

CHAINING 
data structure used for implementing chaining
1. linked list: insert:O(n) search:O(n) delete:O(n) disadvantage: not cache friendlyness
2. dynamic sized array(vectors in c++, arraylist in java and list in python): insert:O(n)for sorted list  search:O(n) delete:O(n) but it has one advantage that it is cache friendlyness  
3. self balancing BST(AVL trees , red black trees): insert:O(log n) search:O(log n) delete:O(n) 

*/