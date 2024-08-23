# Insertion Sort
Insertion sort is a simple sorting algorithm that builds the final sorted array one element at a time. It works by repeatedly picking the next element from the unsorted part of the array and inserting it into the correct position in the sorted part. It is efficient for small or nearly sorted data sets but less efficient for large, unsorted data sets.

How Insertion Sort Works
The algorithm divides the array into a sorted and an unsorted part. It iterates over the unsorted part, taking each element and inserting it into its correct position in the sorted part.

Here is the step-by-step process:

Start with the first element: Assume the first element is already sorted.
Take the next element: Move to the next element.
Compare and insert: Compare the current element with the elements in the sorted part, moving from right to left, and insert the current element into its correct position.
Repeat: Repeat the process for all elements in the array until the entire array is sorted.

# Pseudocode of Insertion Sort
for i = 1 to length(A) - 1
    key = A[i]
    j = i - 1
    while j >= 0 and A[j] > key
        A[j + 1] = A[j]
        j = j - 1
    A[j + 1] = key
![image](https://github.com/user-attachments/assets/1c2f079d-2e54-4f7c-b606-867fe06a3c33)

Example
Consider the following array: [5, 2, 4, 6]

Start with the first element: [5 | 2, 4, 6]
Take the next element (2) and insert it into the sorted part: [2, 5 | 4, 6]
Take the next element (4) and insert it: [2, 4, 5 | 6]
Take the next element (6) and insert it: [2, 4, 5, 6]
Time Complexity
Best Case: O(n) – The array is already sorted.
Average Case: O(n2)
Worst Case: O(n 2) – The array is sorted in reverse order.
Space Complexity
O(1) – Only a constant amount of extra space is needed.
