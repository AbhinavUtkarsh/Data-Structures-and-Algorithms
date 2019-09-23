# Maximum & Minimum element using recursion
This is a simple code of finding the maximum and minimum element of an array. But instead of using simply loops to calculate it. I have use the divide and conquer paradigm i.e recursion in C. The code simply breaks down the array to a single element while comparing it to the last element of that recursive call. As the recursion exhausts we have a single element which is the maximum or the minimum for that array.

## Algorithm
                Maximum( Array , Size )
                {
                    if( Size > 1 )
                    {
                        Return Max element from Array[Size-1] and Maximum(Array,Size-1) 
                    }
                    else
                    {
                        Return Array[1]
                    }
                }
                Minimum( Array , Size )
                {
                    if( Size > 1 )
                    {
                        Return Min element from Array[Size-1] and Minimum(Array,Size-1) 
                    }
                    else
                    {
                        Return Array[1]
                    }
                }

*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
##### Recurrence Relation: <img src="https://latex.codecogs.com/gif.latex?T(n)&space;=&space;T(n-1)&space;&plus;&space;O(1)" title="T(n) = T(n-1) + O(1)" />

Once we solve the above relation we get our time complexity to be: <img src="https://latex.codecogs.com/gif.latex?O(n)" title="O(n)" />.
 ### Space Complexity
Here as we are not using any extra space(apart from the system stack), hence the space complexity is: <img src="https://latex.codecogs.com/gif.latex?O(1)" title="O(1)" />
 