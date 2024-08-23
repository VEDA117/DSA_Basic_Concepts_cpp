# Counting Sort
Counting sort is a non-comparative sorting algorithm that sorts integers or objects that can be mapped to integer values. It works by counting the occurrences of each distinct value in the input and using this information to place the values in their correct positions in the sorted output. Here's a step-by-step explanation of how counting sort works:

How Counting Sort Works
Determine the Range: Identify the range of the input values, i.e., the minimum and maximum values. This helps in creating the counting array.

Initialize Counting Array: Create a counting array where each index represents a potential value in the input. Initialize all elements of this array to zero.

Count Occurrences: Traverse the input array and count the occurrences of each value. Update the counting array such that the index of each element in the counting array represents the number of times that value appears in the input array.

Accumulate Counts: Modify the counting array to store the cumulative count of values. This helps in determining the position of each element in the sorted output.

Build the Output Array: Traverse the input array again, and use the counting array to place each element in its correct position in the output array. Update the counting array to reflect the next position for each value.

Copy the Output Array: Copy the sorted output array back to the original array (if needed).

Pseudo Code
function countingSort(array):
    if array is empty:
        return
    
    maxValue = findMaxValue(array)
    minValue = findMinValue(array)
    range = maxValue - minValue + 1

    // Create and initialize the counting array
    count = array of size range initialized to 0
    output = array of the same size as input

    // Count occurrences of each element
    for each element num in array:
        index = num - minValue
        count[index] = count[index] + 1

    // Accumulate counts
    for i from 1 to range - 1:
        count[i] = count[i] + count[i - 1]

    // Build the output array
    for i from length(array) - 1 down to 0:
        num = array[i]
        index = num - minValue
        output[count[index] - 1] = num
        count[index] = count[index] - 1

    // Copy the output array to the original array
    for i from 0 to length(array) - 1:
        array[i] = output[i]
Key Points
Time Complexity: Counting sort has a time complexity of O(n+k), where n is the number of elements in the input array, and k is the range of the input values.
Space Complexity: The space complexity is O(n+k) because it requires additional space for the counting array and output array.
Stability: Counting sort is stable, meaning it preserves the relative order of equal elements,
Limitations: Counting sort is most effective when the range of the input values is not significantly larger than the number of elements. For large ranges, the counting array can become impractically large.
Counting sort is best suited for scenarios where the range of possible values is limited and known ahead of time.
