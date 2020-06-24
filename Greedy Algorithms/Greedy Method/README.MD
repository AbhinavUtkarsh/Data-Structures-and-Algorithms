# [Greedy Method](https://www.youtube.com/watch?v=ARvQcqJ_-NY)
The method sates nothing but the given problem must be solved in stages or steps, and with each stage we further fetch an input from the problem and if it's a feasible solution then we can obviously include it in problem solution.We need do this until the problem input is exhausted and are left with our feasible solution.

## Algorithm
                for i from 1 to Size_Of_Problem
                        Input_From_Problem=Select(Problem_Array[i])
                        if Input_From_Problem is Feasible
                                Append this Solution to the existing one
