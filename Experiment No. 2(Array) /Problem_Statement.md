# Experiment No. 2 — Selection Sort and Bubble Sort

## Problem Statement

Write a program to store the first-year percentage of students in an array.

Write functions for sorting the array of floating-point numbers in ascending order using:

1. Selection Sort
2. Bubble Sort

After sorting, display the top five scores.

## Aim

To write a program that stores the first-year percentages of students in an array and sorts the array in ascending order using Selection Sort and Bubble Sort, then displays the top five scores.

## Objectives

- Understand the working of Selection Sort and Bubble Sort.
- Sort floating-point numbers using basic sorting algorithms.
- Learn to manipulate arrays and access the top elements.
- Apply sorting to a real-world application such as ranking student scores.

## Algorithms

### Selection Sort

1. Start.
2. Read the number of students `n`.
3. Read the percentage values into an array.
4. For each position, find the minimum element from the unsorted part.
5. Swap the minimum element with the first element of the unsorted part.
6. Repeat until the array is sorted.
7. Display the sorted array.
8. Display the top five scores.
9. Stop.

### Bubble Sort

1. Start.
2. Read the number of students `n`.
3. Read the percentage values into an array.
4. Compare adjacent elements.
5. If the left element is greater than the right element, swap them.
6. Repeat the process for all elements until the array is sorted.
7. Display the sorted array.
8. Display the top five scores.
9. Stop.

## Time Complexity

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Bubble Sort | O(n) | O(n²) | O(n²) |

> Bubble Sort achieves O(n) best-case complexity when an optimized version detects that the array is already sorted.

## Conclusion

Thus, Selection Sort and Bubble Sort were implemented successfully to sort student percentages in ascending order and display the top five scores.
