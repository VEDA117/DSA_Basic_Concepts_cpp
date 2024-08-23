# Merge Sort
Merge sort is a divide-and-conquer sorting algorithm that recursively divides an array into smaller subarrays until each subarray contains only one element. It then merges these subarrays back together in a sorted manner to produce a fully sorted array. This sorting technique guarantees O(nlogn) time complexity, making it efficient for large data sets.

Steps of Merge Sort
Divide: Divide the unsorted array into two halves recursively until each subarray contains only one element. This is done using a divide step.
Conquer: Recursively sort each subarray. If the subarray has one or zero elements, it is already sorted.
Combine (Merge): Merge the sorted subarrays to produce the sorted output. This involves repeatedly comparing the smallest elements of the subarrays and adding the smaller one to the merged array.

