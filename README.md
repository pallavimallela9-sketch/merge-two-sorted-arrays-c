# Merge Two Sorted Arrays

## Problem Description

Given two sorted arrays, merge them into a single sorted array while maintaining the sorted order.

## Example

### Input

```text
First Array:
1 3 5 7 9

Second Array:
2 4 6 8
```

### Output

```text
Merged Array:
1 2 3 4 5 6 7 8 9
```

## Approach

The program uses the **Two Pointer Technique**.

1. Start one pointer at the beginning of each sorted array.
2. Compare the elements pointed to by both pointers.
3. Add the smaller element to the result array.
4. Move the pointer of the selected array.
5. Continue until one array is completely processed.
6. Copy the remaining elements from the other array.
7. The resulting array remains sorted.

## Concepts Used

* Arrays
* Functions
* Two Pointer Technique
* Array Traversal
* Merging
* Sorted Arrays

## Time Complexity

`O(n + m)`

Where `n` and `m` are the sizes of the two arrays.

## Space Complexity

`O(n + m)`

The result array stores all elements from both arrays.

## Language

C

## File Name

`MergeTwoSortedArrays.c`

## Repository Name

`merge-two-sorted-arrays-c`

## Author

**M. Pallavi**
