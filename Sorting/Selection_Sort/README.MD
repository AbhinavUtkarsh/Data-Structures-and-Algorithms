# Selection Sort
Selection sort is one of the most simplest sorting algorithms. Just like Insertion sort it maintains a sorted part and a unsorted part. As the algorithm progresses the most smallest element is picked up from the unsorted part and is placed in the sorted one. This is being done until the unsorted part contains only one element which would obviously be at it's prefect position. 

## Algorithm
          Selection_Sort(Array,Size)
          {
              for i from 1 to Size
                    for j from i + 1 to Size
                            if Array[i] > Array[j]
                                    Swap(Array[i],Array[j])
          }



*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
As we are iterating the array n times for n elements. That makes it's time complexity to be: <img src="https://latex.codecogs.com/gif.latex?O(n^2)" title="O(n^2)" />.

 ### Space Complexity
 As Selection sort doesn't require any extra space or any extra array hence making it's space complexity to be: <img src="https://latex.codecogs.com/gif.latex?O(1)" title="O(1)" />. and an In-Place sorting algorithm.