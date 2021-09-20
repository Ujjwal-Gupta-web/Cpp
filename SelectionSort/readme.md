# Selection Sort

> In this each time the minimum (for ascending)/maximum (for descending) element is selected and is replaced by the first index of selected array at that iteration.


## Considering the rquirement of ascending sort
Ex- {5,3,4,1,2}

### in first iteration-

{**5**,3,4,1,2}

min=0

3<5     (min = index of 3 which is 1 => min=1)

4>3     (no change)

1<3     (min = index of 1 which is 3 => min=3)

2>1     (no change)

Now element at min index is swapped with 5 (which means swap 5 and 1)

The array becomes - {1,3,4,5,2}



### in second iteration-

{1,**3**,4,5,2}

min=1

4>3     (no change)

5>3     (no change)

2<3     (min = index of 2 which 4 => min=4)


Now element at min index is swapped with 3 (which means swap 3 and 2)

The array becomes - {1,2,4,5,3}



### in third iteration-

{1,2,**4**,5,3}

min=2

5>4     (no change)

3<4     (min = index of 3 which 4 => min=4)


Now element at min index is swapped with 4 (which means swap 4 and 3)

The array becomes - {1,2,3,5,4}


### in fourth iteration-

{1,2,3,**5**,4}

min=3

4<5     (min = index of 4 which 4 => min=4)


Now element at min index is swapped with 5 (which means swap 5 and 4)

The array becomes - {1,2,3,4,5}



> **We have (n-1) iterations.**
