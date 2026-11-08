# Experiment No. 6 — Binary Operations Using Doubly Linked List

## Problem Statement
Write a program to find the 1's complement, 2's complement, and addition of given binary numbers using a doubly linked list.

## Aim
To implement binary number operations such as 1's complement, 2's complement, and binary addition using a doubly linked list.

## Objectives
1. Understand the concept of a doubly linked list.
2. Store binary digits using nodes of a doubly linked list.
3. Find the 1's complement of a binary number.
4. Find the 2's complement of a binary number.
5. Perform addition of two binary numbers using a doubly linked list.

## Theory

A **Doubly Linked List** is a linear data structure in which each node contains three parts:
- Data: Stores a binary digit (0 or 1).
- Previous pointer: Stores the address of the previous node.
- Next pointer: Stores the address of the next node.

### Binary Operations

**1. 1's Complement**

1's complement is obtained by changing every 0 into 1 and every 1 into 0.

Example:

`Binary Number: 1010`

`1's Complement: 0101`

**2. 2's Complement**

2's complement is obtained by adding 1 to the 1's complement.

Example:

`Binary Number: 1010`

`1's Complement: 0101`

`2's Complement: 0110`

**3. Binary Addition**

Binary addition is performed using the following rules:

| Addition | Result | Carry |
|---|---|---|
| 0 + 0 | 0 | 0 |
| 0 + 1 | 1 | 0 |
| 1 + 0 | 1 | 0 |
| 1 + 1 | 0 | 1 |
| 1 + 1 + 1 | 1 | 1 |

## Algorithm
1. Start the program.
2. Create a doubly linked list to store binary digits.
3. Accept a binary number from the user.
4. Insert each binary digit into the doubly linked list.
5. Find the 1's complement by changing 0 to 1 and 1 to 0.
6. Find the 2's complement by adding 1 to the 1's complement.
7. Accept a second binary number for addition.
8. Perform binary addition using carry.
9. Display the 1's complement, 2's complement, and addition result.
10. Stop the program.

## Time Complexity
- Insertion: O(N)
- 1's Complement: O(N)
- 2's Complement: O(N)
- Binary Addition: O(N)

Here, N represents the number of binary digits.

## Conclusion
This practical demonstrates how to perform 1's complement, 2's complement, and binary addition using a doubly linked list. It also helps understand the insertion and traversal operations of a doubly linked list.
