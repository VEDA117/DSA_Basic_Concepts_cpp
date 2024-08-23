# Selection Sort
Selection sort is a basic sorting algorithm. It sorts a list of items (like numbers or words) by repeatedly selecting the smallest (or largest, depending on the sorting order) item from the unsorted portion and moving it to the end of the sorted portion.

Steps to Perform Selection Sort:
Divide the List: Think of the list as divided into two parts: a sorted part (initially empty) and an unsorted part (the entire list initially).
Find the Minimum: Look through the unsorted part of the list to find the smallest item.
Swap: Swap the smallest item found with the first item of the unsorted part. Now, the first item is part of the sorted part.
Repeat: Move the boundary of the sorted part one step to the right and repeat the process for the rest of the list.
Continue: Continue these steps until all items are sorted.

# Pseudocode of Selection Sort
SelectionSort(A)
    for i = 0 to length(A) - 2 do
        minIndex = i
        for j = i + 1 to length(A) - 1 do
            if A[j] < A[minIndex] then
                minIndex = j
            end if
        end for
        if minIndex != i then
            swap A[i] with A[minIndex]
        end if
    end for
end SelectionSort

Time Complexity: O(n2) in the best, average, and worst cases.
Space Complexity: O(1)
