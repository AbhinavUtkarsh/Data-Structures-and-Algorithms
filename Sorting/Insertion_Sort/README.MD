# Insertion Sort
Insertion sort is a sorting algorithm that we humans subconsciously have always used.
Just like when one plays cards and sorts them in their hands. Naturally having one hand empty at first and then step by step placing the the cards from the unsorted hand to the sorted one. As the name name suggests we insert the card at it's appropriate position in our sorted hand and we do this until our unsorted hand is empty.
## Algorithm
                for j = 2 to Array.length
                    Key_Element = Array[j]
                    i = j - 1
                    while i > 0 and Array[i] > Key_Element
                        Array[i + 1] = Array[i]
                        i = i - 1
                    Array[i + 1] = Key_Element

*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
As we can see insertion sort has a time complexity of - <img src="https://latex.codecogs.com/gif.latex?O(n^2)" title="O(n^2)" />
 but when the elements are already sorted then it takes only - O(n) time to scan through the array.
 ### Space Complexity
 As we are not using any extra space apart from the 1 Auxilary space making it's space complexity O(1).