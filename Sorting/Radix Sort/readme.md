# Radix Sort
Radix sort is a sorting algorithm that organizes numbers or strings by processing each digit or character, starting from the least significant one and moving to the most significant one. It distributes items into buckets based on their current digit or character, collects them back, and repeats the process for each digit or character position until all are sorted.

How Radix Sort Works
Identify the Maximum Value: Determine the maximum value in the dataset to know the number of digits or characters to process.

Sort by Each Digit:Least Significant Digit (LSD) First: Start with the least significant digit (the rightmost digit). Distribute the elements into buckets based on this digit. Sort Each Bucket: After distributing elements into buckets, collect them back in order. This ensures elements are sorted by the least significant digit.

Move to the Next Digit: Move to the next more significant digit (moving left). Repeat the bucket distribution and collection process for this digit.

Repeat Until Sorted: Continue this process for each digit or character until you reach the most significant digit (the leftmost one).

Final Collection: After processing all digits, the collection of elements will be sorted.
Radix Sort - Pseudo Code
function radixSort(array):
    maxValue = findMaxValue(array)
    digitPlace = 1

    while maxValue // digitPlace > 0:
        countingSortByDigit(array, digitPlace)
        digitPlace *= 10

function countingSortByDigit(array, digitPlace):
    n = length(array)
    output = array of size n initialized to 0
    count = array of size 10 initialized to 0

    // Count occurrences of digits
    for i from 0 to n - 1:
        digit = (array[i] // digitPlace) % 10
        count[digit] += 1

    // Accumulate counts
    for i from 1 to 9:
        count[i] += count[i - 1]

    // Build the output array
    for i from n - 1 down to 0:
        digit = (array[i] // digitPlace) % 10
        output[count[digit] - 1] = array[i]
        count[digit] -= 1

    // Copy the output array to the original array
    for i from 0 to n - 1:
        array[i] = output[i]
Radix Sort Function (radixSort) - Sorts an array of integers by processing each digit individually, starting from the least significant digit to the most significant digit.

Counting Sort by Digit Function (countingSortByDigit) - Sorts the array based on the digit at a specific place value (units, tens, hundreds, etc.), ensuring stability.
