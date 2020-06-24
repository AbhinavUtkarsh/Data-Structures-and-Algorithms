# [Dijkstra Algorithm](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)
This is one of the most used Greedy based algorithm, also used by the famous [GeekBench 4](https://www.geekbench.com/doc/geekbench4-cpu-workloads.pdf) to find the CPU performance. The algorithm is simply is designed to find out the shortest path from one fixed source to all the other remaining sources of the graph. As it follows the Greedy Paradigm, it maintains a list of visited vertices in which it assumes that reaching at any other vertex will cost it infinite amount of resources. It updates the infinite amount of resources required with the direct paths and picks the least one out of it, furthermore adding it to the visited list that we discussed earlier about. Now we use this visited node to explore all the remaining unvisited nodes by following the same rule of picking the minimum resource path, but this time we also add the amount of resources that we spent to reach the current node. And if it turns out to be smaller than what it earlier had then we update it's value and ofcourse add it to the visited list. We carry our process until the nodes are visited and we have our single source shortest path.

## Algorithm
    Dijkstra(Graph, Number_Of_Nodes, Start_Node, Start_Node)
    {

    }

*Here we have assumed that the array starts at 1st index and Knapsack denotes the profit gained from that item*
## Complexity Analysis
### Time Complexity


### Space Complexity
