# Merge Sort
Merge sort also follows the divide and conquer paradigm. As the name suggests, it takes in an array then divides the array in 2 halves, as it is a divide and conquer algorithm hence it does this until the array has been divided to it's atomic level. Now comes in the role of our merge function, which does nothing but merges these atomic elements in sorted manner. Hence the merge function plays an important role in merge sort.

## Algorithm
                Merge_Sort(Array,begin,end)
                        Divide the array in two halves by calculating the middle element
                        Call Merge_Sort for the first half
                        Call Merge_Sort for the second half
                        Merge the two sorted halves.

                Merge(array[],begin, Middle_Element,Middle_Plus_1,end)
                        Make a Dummy array to store the merged elements
                        Copy the elements in sorted manner until one list is exhausted
                        Copy the remaining elements from the 1st array and the 2nd array
                        Finally copy the elements from our Dummy array to our original array


                    

*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
#### Recurrence Relation: <img src="https://latex.codecogs.com/gif.latex?T(n)=2T(n/2)&plus;\theta(n)" title="T(n)=2T(n/2)+\theta(n)" />
Once we solve the above recurrence relation we get out time complexity to be: - <img src="https://latex.codecogs.com/gif.latex?O(nlog(n))" title="O(nlog(n))" /> 

 ### Space Complexity
 As we are using a Dummy array when we merge our arrays, making it's space complexity to be: <img src="https://latex.codecogs.com/gif.latex?O(n)" title="O(n)" />.