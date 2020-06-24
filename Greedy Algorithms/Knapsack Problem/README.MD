# [Knapsack Problem](https://en.wikipedia.org/wiki/Knapsack_problem)
Suppose you have a bag or rucksack and obviously being a realistic bag it has some capacity to which it can hold the objects. If the objects that we have are less than the total capacity of the objects that the bag can hold, well then there is no problem to solve at all but on the other hand if the quantity of objects that we need to fill is more than the capacity of the bag. Well that's our problem right there, and did I mention every object can have different weight and different profits associated to it further more the objects can be also divisible for example a few kilos of beautiful rose flowers, so we may take half a kilo of them depending on the profit we gain from them. So when we choose an object to put into out limited storage bag we are reducing the current capacity by the weight of the object inserted but also we will get some benefit or let's say some associated profit with that inserted object.
And this makes it an optimization problem, making us greedy for all the great profit we can have if we choose the right objects with the right amount to fill in our tiny bag.For the curious ones out there this problem specifically would be called as *fractional Knapsack Problem*.

## Algorithm
    Knapsack(Weight_Of_Bag,Items,Number_Of_Items)
    {
        
        Calculate the Profit_Weight_Ratio of the Items and Sort the Items in descending order.
        Initialize Current_Weight := 0 and Knapsack := 0

        for i from 1 to Number_Of_Items
                if Current_Weight + Item_Weight[i] < Weight_Of_Bag              // if we have enough space for that item
                        Current_Weight := Current_Weight + Item_Weight[i]                // this basically adds the weight of ith item
                        Knapsack := Knapsack + Item[i]                                  // this basically adds the profit from ith item
                else                                                            // if we need to break the item when not enough space for it
                        Left_Over = Weight_Of_Bag - Current_Weight
                        Knapsack = Knapsack + Item[i] * (Left_Over/Item_Weight[i])   // The breakage

    }

*Here we have assumed that the array starts at 1st index and Knapsack denotes the profit gained from that item*
## Complexity Analysis
### Time Complexity
The time complexity of this Knapsack code is <img src="https://latex.codecogs.com/gif.latex?O(N*W)" title="O(N*W)" />
where N is the number of items and W is the capacity of the bag.
Here it depends on the sorting algorithm used. Currently I have used basic bubble sort to sort the Item List hence making it's complexity: <img src="https://latex.codecogs.com/gif.latex?O(n^2)" title="O(n^2)" /> but this can easily be made <img src="https://latex.codecogs.com/gif.latex?O(nlogn)" title="O(nlogn)" /> via Max Heap Sort.

### Space Complexity
We only needed to initialize the ratio variable for each item hence making it's space complexity: <img src="https://latex.codecogs.com/gif.latex?O(n)" title="O(n)" />