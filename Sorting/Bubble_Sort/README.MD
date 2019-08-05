# Bubble Sort
Bubble Sort is arguably one the most simplest sorting algorithm to implement. Here the name comes from the behaviour of a water bubble, as we know the bigger the water bubble the faster it floats to the top of the water surface.
Applying similar analogy to sorting. The bubble will be replaced with the biggest element in the array and the water surface will be the last index position of the array.
So now connecting the things together, the biggest element of that pass floats to the last position of the array which is yet untouched with any-other bubble or here in our case by any other element.
## Algorithm
                for i = 1 to Array.length
                    for j = 1 to Array.length - i
                        if Array[j] > Array[j + 1]
                            Swap Array[j] and Array[j + 1]
                    

*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
As we can see bubble sort has a time complexity of - <img src="https://latex.codecogs.com/gif.latex?O(n^2)" title="O(n^2)" />
 but when the elements are already sorted then it takes only - O(n) time to scan through the array.
 ### Space Complexity
 As we are not using any extra space apart from the 1 Auxilary space making it's space complexity O(1).