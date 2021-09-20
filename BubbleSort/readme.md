# Bubble Sort

> In this an consecutive elements are compared and then swapped accoring to the type of (desc/ascending)sorted array we need.


## Considering the rquirement of ascending sort
Ex- {5,8,9,3}

### in first iteration-

5 and 8 remains as it is {5,8,9,3}

8 and 9 remains as it is {5,8,9,3}

9 and 3 gets swapped     {5,8,3,9}



### in second iteration-

5 and 8 remains as it is {5,8,3,9}

8 and 3 gets swapped     {5,3,8,9}

5 and 3 gets swapped     {3,5,8,9}


### in third iteration-

3 and 5 remains as it is {3,5,8,9}

5 and 8 remains as it is {3,5,8,9}

8 and 9 remains as it is {3,5,8,9}



> **We have (n-1) iterations with (n-1) steps in each iteration.**
