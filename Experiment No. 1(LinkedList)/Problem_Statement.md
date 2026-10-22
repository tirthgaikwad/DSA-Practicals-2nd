# Experiment No. 5 — Pinnacle Club Using Singly Linked List

## Problem Statement

The Department of Computer Engineering has a student club named **Pinnacle Club**. Students from the second, third, and final years can become members or cancel their membership.

Write a C++ program to maintain club member information using a singly linked list. Store each member's PRN and name. The first node is reserved for the president, and the last node is reserved for the secretary.

Implement functions to add and delete members, manage the president and secretary, count the total number of members, display all members, and concatenate two linked lists representing two divisions.

## Aim

To implement a singly linked list to manage club member information and perform insertion, deletion, counting, display, and concatenation operations.

## Objectives

- Define a node structure to store PRN and name.
- Add members at different positions, including the president and secretary.
- Delete members from different positions.
- Count the total number of club members.
- Display all club members.
- Concatenate two linked lists representing two divisions.
- Create a menu-driven program to perform these operations.

## Theory

A **singly linked list** is a dynamic data structure consisting of nodes. Each node stores data and a pointer to the next node.

In the Pinnacle Club, each node stores the student's PRN and name. The first node represents the president, while the last node represents the secretary.

### Operations

1. **Add Member:** Insert a member at the beginning, end, or a specified position.
2. **Delete Member:** Remove a member using their PRN.
3. **Count Members:** Calculate the total number of members.
4. **Display Members:** Show all members in order.
5. **Concatenate Lists:** Join the second division's linked list to the end of the first division's list.

## Associated Tasks

1. Create a node structure containing PRN, name, and a pointer to the next node.
2. Implement insertion and deletion operations.
3. Maintain the president at the beginning and the secretary at the end.
4. Count and display all members.
5. Create two linked lists for separate divisions.
6. Concatenate the two lists in order.
7. Provide a menu-driven interface.

## Example

**Division A:**
- President — PRN 101, Alice
- Member — PRN 102, Bob
- Member — PRN 103, Carol
- Secretary — PRN 110, Eve

**Division B:**
- President — PRN 201, Frank
- Member — PRN 202, Grace
- Secretary — PRN 210, Heidi

After concatenation, all Division A members appear first, followed by all Division B members.

## Concepts Used

- Singly Linked List
- Structures and Pointers
- Dynamic Memory Allocation
- Insertion and Deletion
- Traversal and Counting
- List Concatenation
- Menu-Driven Programming

## Utility

Singly linked lists are useful for dynamic membership management, student records, and other applications where data can be added or removed frequently.

## Conclusion

Thus, a singly linked list is used to maintain Pinnacle Club member information. Insertion, deletion, counting, display, and concatenation operations demonstrate the practical applications of linked lists.

