# Insertion Sort

> In this each element (starting from index 1) is selected and is arranged in such a way that at any point of the time the traversed elements are in sorted order


## Considering the rquirement of ascending sort
Ex- {5,3,1,2}

### in first iteration-

{5,**3**,1,2}

toInsert = 3

3<5     {5,5,1,2}   --- shifting 5 one position ahead

Added the toInsert element at the j+1th position after inner loop breaks

Now the array becomes - {3,5,1,2}



### in second iteration-

{3,5,**1**,2}

toInsert = 1

1<5     {3,5,5,2}   --- shifting 5 one position ahead

1<3     {3,3,5,2}   --- shifting 3 one position ahead

Added the toInsert element at the j+1th position after inner loop breaks

Now the array becomes - {1,3,5,2}



### in third iteration-

{1,3,5,**2**}

toInsert = 2

2<5     {1,3,5,5}   --- shifting 5 one position ahead

2<3     {1,3,3,5}   --- shifting 3 one position ahead

2>1     break the loop

Added the toInsert element at the j+1th position after inner loop breaks

Now the array becomes - {1,2,3,5}



> **We have (n-1) iterations.**
