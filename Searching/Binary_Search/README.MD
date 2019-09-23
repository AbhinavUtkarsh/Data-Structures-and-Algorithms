# Binary Search
Unlike Linear search where the given array can be in any order here for binary search we need the given array in a sorted form as we compare our desired number form the middle element of the array and if we find our desired number is less than the middle element of the array we repeat the process in the left half of the array otherwise we search for it in the right half, until our middle element matches the desired number. If this fails to hold true and we have exhausted our array by dividing it into its atomic size then we declare that the desired element doesn't exist in the given array.

## Algorithm
Initialize Beg. and End with 1 and Array.Length respectively then proceed with the algorithm.

                while beg < end 
                    mid = (beg + end) / 2
                    if Array[mid] = number
                        Declare number found and exit
                    else if Array[mid] > number
                        end = mid - 1
                    else
                        beg = mid + 1
*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
As we can see Binary search is diving the array with every iteration in half, making it's time complexity - <img src="https://latex.codecogs.com/gif.latex?O(log&space;n)" title="O(log n)" />.
 ### Space Complexity
 As we are not using any extra space hence it's space complexity <img src="https://latex.codecogs.com/gif.latex?O(1)" title="O(1)" /> in iterative implementation.