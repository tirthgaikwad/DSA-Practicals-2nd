# Experiment No. 7 — Telephone Book Using Hash Table

## Problem Statement
Consider the telephone book database of N clients. Make use of a hash table implementation to quickly look up a client's telephone number. Use linear probing and quadratic probing techniques to handle collisions.

## Aim
To implement a telephone book database using a hash table and perform collision handling using linear probing and quadratic probing.

## Objectives
1. Understand the concept of hashing.
2. Store client names and telephone numbers in a hash table.
3. Implement a hash function to calculate the index.
4. Handle collisions using linear probing.
5. Handle collisions using quadratic probing.
6. Search for a client's telephone number efficiently.

## Theory

**Hashing** is a technique used to store and retrieve data quickly using a hash function.

### Hash Table
A hash table is a data structure that stores data in an array using a calculated index.

### Hash Function
A hash function converts a client's name into an array index.

Example:

`Hash Index = Sum of ASCII values of characters % Table Size`

### Collision
A collision occurs when two or more clients get the same hash table index.

### Collision Handling Techniques

**1. Linear Probing**
- If the calculated position is occupied, check the next position.
- Formula: `Index = (Hash + i) % SIZE`
- Here, `i` starts from 0 and increases by 1.

**2. Quadratic Probing**
- If the calculated position is occupied, check positions using square increments.
- Formula: `Index = (Hash + i × i) % SIZE`
- Here, `i` starts from 0 and increases by 1.

## Algorithm
1. Start the program.
2. Create a hash table of fixed size.
3. Accept client names and telephone numbers.
4. Calculate the hash index using the hash function.
5. Insert client details using linear probing or quadratic probing.
6. Handle collisions using the selected technique.
7. Search for a client by name.
8. Display the client's telephone number if found.
9. Display a message if the client is not found.
10. Stop the program.

## Time Complexity

| Operation | Average Case | Worst Case |
|---|---|---|
| Insertion | O(1) | O(N) |
| Searching | O(1) | O(N) |

## Conclusion
This practical demonstrates the implementation of a telephone book database using a hash table. It uses linear probing and quadratic probing to handle collisions and allows quick searching of client telephone numbers.
