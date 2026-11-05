# Experiment No. 9 — Binary Search Tree (BST)

## Problem Statement
Beginning with an empty Binary Search Tree (BST), construct a tree by inserting the given values in the specified order. After constructing the tree, perform the following operations:

1. Insert a new node into the Binary Search Tree.
2. Find the number of nodes in the longest path from the root (height of the tree).
3. Find the minimum data value in the tree.
4. Change the tree by swapping the left and right pointers at every node (mirror image of the tree).
5. Search for a given value in the tree.

## Aim
To implement a Binary Search Tree and perform insertion, searching, finding minimum value, calculating height, and mirroring operations.

## Objectives
1. Understand the concept of a Binary Search Tree.
2. Insert nodes while maintaining BST properties.
3. Calculate the height of the tree.
4. Find the minimum value in the tree.
5. Create the mirror image of the tree.
6. Search for a particular value.

## Theory

A **Binary Search Tree (BST)** is a binary tree in which:
- The left child contains values smaller than the root.
- The right child contains values greater than the root.
- Each subtree follows the same BST property.

### Operations

1. **Insertion:** Adds a new node at the correct position.
2. **Height:** Finds the number of nodes in the longest path from root to leaf.
3. **Minimum Value:** The smallest value is found by moving to the leftmost node.
4. **Mirror Image:** Swaps the left and right pointers at every node.
5. **Searching:** Checks whether a given value exists in the tree.

## Algorithm
1. Start with an empty BST.
2. Insert the given values one by one.
3. Insert a new node at the correct position.
4. Calculate the height of the tree.
5. Find the minimum value by traversing the left subtree.
6. Swap the left and right pointers of every node.
7. Search for the required value.
8. Display the results.

## Time Complexity

| Operation | Average Case | Worst Case |
|---|---|---|
| Insertion | O(log n) | O(n) |
| Searching | O(log n) | O(n) |
| Minimum Value | O(log n) | O(n) |
| Height | O(n) | O(n) |
| Mirror Image | O(n) | O(n) |

## Conclusion
This practical demonstrates the implementation of a Binary Search Tree and its basic operations, including insertion, height calculation, finding the minimum value, mirroring the tree, and searching for an element.
