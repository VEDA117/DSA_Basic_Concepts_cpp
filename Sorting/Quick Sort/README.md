# Quick Sort
Quick sort is a fast sorting algorithm that uses a divide-and-conquer strategy. Here's a simple explanation:

Choose a Pivot: Select an element from the array as the pivot.

Partitioning: Rearrange the array so that all elements less than the pivot are on the left and all elements greater than the pivot are on the right. Place the pivot in its correct position.

Recursively Apply: Apply the same process to the sub-arrays of elements on the left and right of the pivot.

Base Case: When the sub-array has zero or one element, it is already sorted.

Key Points
Average Time Complexity: O(nlogn)
Worst-Case Time Complexity: O(n 2)
Space Complexity: O(logn)
In-Place Sorting: Requires minimal additional space
Not Stable: May not preserve the order of equal elements

Quick Sort - Pseudo Code
function quicksort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quicksort(arr, low, pi - 1)
        quicksort(arr, pi + 1, high)

function partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j = low to high - 1:
        if arr[j] < pivot:
            i = i + 1
            swap arr[i] with arr[j]
    swap arr[i + 1] with arr[high]
    return (i + 1)

Quick Sort Function (quicksort)
Purpose: Recursively sorts the array.

Steps:

If the array has more than one element (low < high):
Partition the array and get the pivot index (pi).
Recursively sort the sub-arrays before and after the pivot.
Partition Function (partition)
Purpose: Rearranges the array so that elements less than the pivot are on the left and elements greater than the pivot are on the right. Places the pivot in its correct position.
