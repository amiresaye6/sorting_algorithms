# Sorting Algorithms and Time Complexity

## Overview

This repository provides information and implementations of various sorting algorithms. It covers the following topics:

- Four Different Sorting Algorithms
- Big O Notation and Time Complexity Evaluation
- Selecting the Best Sorting Algorithm
- Stable Sorting Algorithm

## Four Different Sorting Algorithms

1. **Bubble Sort**
   - Description: Bubble sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
   - Time Complexity (Worst Case): O(n^2)

2. **Selection Sort**
   - Description: Selection sort divides the input list into a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and swaps it with the first unsorted element.
   - Time Complexity (Worst Case): O(n^2)

3. **Insertion Sort**
   - Description: Insertion sort builds the sorted list one element at a time by repeatedly inserting the next element into the correct position within the already sorted portion of the list.
   - Time Complexity (Worst Case): O(n^2)

4. **Merge Sort**
   - Description: Merge sort is a divide-and-conquer algorithm that recursively divides the list into smaller sublists, sorts them, and then merges them back together.
   - Time Complexity (Worst Case): O(n log n)

## Big O Notation and Time Complexity

- **Big O Notation** is a mathematical notation used to describe the upper bound of an algorithm's time complexity. It represents the worst-case scenario for an algorithm's runtime in terms of the input size.

- To evaluate the time complexity of an algorithm, analyze how the number of operations required to complete the algorithm scales with the size of the input. Consider factors like loops, recursive calls, and nested operations.

## Selecting the Best Sorting Algorithm

The choice of sorting algorithm depends on various factors, including:

- **Input Size**: Different algorithms perform differently on small vs. large inputs.

- **Input Characteristics**: Some algorithms perform better on already partially sorted data.

- **Space Complexity**: Consider the memory usage of the algorithm.

- **Stability**: Whether the algorithm maintains the relative order of equal elements.

## Stable Sorting Algorithm

A stable sorting algorithm is one that preserves the relative order of equal elements in the sorted output. This means that if two elements have the same key, their order in the original list is maintained in the sorted list.

For example, if there are two elements A and B with equal keys in the original list, and A appears before B, then in the sorted list, A will still appear before B.

---

Feel free to explore the provided sorting algorithm implementations and learn more about their characteristics and performance.
