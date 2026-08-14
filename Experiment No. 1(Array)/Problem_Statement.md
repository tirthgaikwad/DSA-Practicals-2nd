# Experiment No. 1 — Linear Search and Binary Search

## Problem Statement

Write a menu-based C++ program to perform the following searching operations on student roll numbers:

### A) Linear Search

Write a program to store roll numbers of students who attended a training program in an array in random order. Write a function to search whether a particular student attended the training program or not using **Linear Search**.

### B) Binary Search

Write a program to store roll numbers of students who attended a training program in an array in sorted order. Write a function to search whether a particular student attended the training program or not using **Binary Search**.

## Aim

- To search whether a student attended a training program or not using Linear Search on unsorted data.
- To search whether a student attended a training program or not using Binary Search on sorted data.

## Objectives

- Understand and implement Linear Search and Binary Search algorithms.
- Differentiate between searching in unsorted and sorted arrays.
- Implement a menu-based program in C++.
- Understand the efficiency and complexity of searching algorithms.

## Algorithms

### Linear Search

1. Start from the first element of the array.
2. Compare each element with the search key.
3. If the element matches the key, report that the student attended the training program.
4. Continue until the element is found or the end of the array is reached.
5. If the key is not found, report that the student did not attend the training program.

### Binary Search

1. Set `low = 0` and `high = n - 1`.
2. Calculate `mid = (low + high) / 2`.
3. Compare the middle element with the search key.
4. If `arr[mid] == key`, the student is found.
5. If `arr[mid] > key`, search the left half.
6. If `arr[mid] < key`, search the right half.
7. Repeat until the element is found or `low > high`.

## Time Complexity

| Search Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |

## Important Note

Binary Search can be applied only when the array is sorted.

## Conclusion

Thus, Linear Search and Binary Search were implemented successfully to determine whether a student's roll number is present in the training program list.
