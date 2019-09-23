# Linear Search
Linear Search is the most basic searching algorithm. We can understand it by the following analogy. Let's suppose we have a letter for Mr. Schubert and in order to deliver the letter we need to find where he lives. Having no clue where he lives we would knock at each and every house starting from the beginning of the street until we find his house. Similarly we have  a number to find and we would knock at each and every index position of the array to check if we have the number in the our given array. If we have checked all the array locations and still didn't find our element then we can declare that the element never existed in our given array.
## Algorithm
                for i = 1 to Array.length
                    if Array[i] = Number
                        Declare Number found at ith Array location
                            
                    

*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
As we can see Linear search has a time complexity of - <img src="https://latex.codecogs.com/gif.latex?O(n)" title="O(n)" /> as we need to scan each and every array location until we have found our desired number in the array but there can also be a chance that we find our number at 1st position itself then it makes it have a complexity of <img src="https://latex.codecogs.com/gif.latex?O(1)" title="O(1)" />.
 ### Space Complexity
 As we are not using any extra space hence it's space complexity <img src="https://latex.codecogs.com/gif.latex?O(1)" title="O(1)" />.