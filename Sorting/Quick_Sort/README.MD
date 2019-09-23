# Quick Sort
Quick Sort is one of the most efficient sorting algorithm out there. It follows the divide and conquer paradigm. It's working is very simple,it pick's up an element from the array and then uses it as the base comparison condition for that iteration then it places all the elements less than that element towards it's left and the left overs on it's right. This is being done until the array can't further be broken down. Not to mention that this is being done for the both sides of the array regardless from which side we choose to start from. Also another point to keep in mind is that the order of the elements next to our pivot element doesn't matter. There are many variations of quick sort with just the difference being in the selection process of the pivot element.
## Algorithm
          Quick_Sort(Array,Start,Last)
          {
              if( Start >= Last )
                    {Exit}
              else {  

              Partition_Index = Partition(Array,Start,Last)
              // Here the Partition logic returns the index location of the breakage point of the array.
              Quick_Sort(Array,Start,Partition_Index - 1) // Call for the first half.
              Quick_Sort(Array,Partition_Index + 1,Last) // Call for the second half.

              }

          }

          Partition(Array,Start,Last)
          {
              Pivot = Array[Last] // Taking last element as the Pivot
              Partition_Index = Start
              for i from Start to Last
              {
                  if ( Array[i] <= Pivot)
                  {
                      Swap(Array[i],Array[Partition_Index])
                      Partition_Index = Partition_Index + 1
                  }
              }

              Swap(Array[Partition_Index,Array[Last])

              Return Partition_Index
          }



*Here we have assumed that the array starts at 1st index*
## Complexity Analysis
### Time Complexity
##### Recurrence Relation : <img src="https://latex.codecogs.com/gif.latex?T(n)&space;=&space;2T(n/2)&space;&plus;&space;\theta(n)" title="T(n) = 2T(n/2) + \theta(n)" />

As we can see quick sort is simply diving the array in 2 parts on it's average case, hence making it's time complexity of - <img src="https://latex.codecogs.com/gif.latex?O(nlog(n))" title="O(nlog(n))" />
 but when the elements come in decreasing order then it makes it's complexity in order of - <img src="https://latex.codecogs.com/gif.latex?O(n^2)" title="O(n^2)" />  But this can be solved by picking up the pivot element randomly.
 ### Space Complexity
 As quick sort is an in-place sorting algorithm hence we don't require any extra space or any extra array hence making it's space complexity to be: <img src="https://latex.codecogs.com/gif.latex?O(1)" title="O(1)" />.