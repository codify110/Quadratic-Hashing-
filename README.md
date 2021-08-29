# Quadratic-Hashing-
## What is Quadratic probing? 

It is an open-addressing scheme where we look for i2‘th slot in i’th iteration if the given hash value x collides in the hash table. 

## How Quadratic Probing is done? 

Let hash(x) be the slot index computed using the hash function.

If the slot hash(x) % S is full, then we try (hash(x) + 1*1) % S.
If (hash(x) + 1*1) % S is also full, then we try (hash(x) + 2*2) % S.
If (hash(x) + 2*2) % S is also full, then we try (hash(x) + 3*3) % S.
This process is repeated for all the values of i until an empty slot is found.
For example: Let us consider a simple hash function as “key mod 7” and sequence of keys as 50, 700, 76, 85, 92, 73, 101.

![image](https://user-images.githubusercontent.com/69696459/131260570-5b9b2026-bd56-4814-817d-ce200e02a375.png)

## OUTPUT:
![image](https://user-images.githubusercontent.com/69696459/131260696-c719900f-0a02-4d87-b6b0-b8ab855373a0.png)
