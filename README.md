# Searching_problems

### 1. Linear_Search 

##### Library Inclusion and Namespace

The program begins by including a library necessary for input and output operations. This allows the program to display output on the screen.
It also specifies that we can use standard functions and objects (like those for input and output) without having to use a specific prefix.

##### Search Function

1. There is a function designed to search for a specific element within an array of numbers.
2. This function takes three parameters:
        An array of numbers.
        The total number of elements in the array.
        The specific number we are looking for.
3. The function looks through each element in the array one by one:
4. If it finds the element we are looking for, it returns the position (index) of that element within the array.
5. If it finishes checking all elements without finding the desired one, it returns a value indicating the element is not present.

##### Main Function

1. In the main part of the program, an array of numbers is defined.
2. A specific number to search for within this array is also defined.
3. The program calculates how many elements are in the array.
4. It then calls the search function with the array, the number of elements, and the specific number to find.
5. Based on the result returned by the search function, the program displays a message indicating whether the element was found and, if so, its position in the array.

### 1. Binary_Search 
 
#### Search Process:

1. The algorithm repeatedly divides the search interval in half.
2. Calculate the middle index of the current search interval.
3. Compare the middle element with the target value:
        * If the middle element is equal to the target value, the search is successful, and the index of the middle element is returned.
        * If the middle element is less than the target value, the target must be in the right half of the array. Therefore, update the lower boundary of the search interval to just above the middle index.
        * If the middle element is greater than the target value, the target must be in the left half of the array. Therefore, update the upper boundary of the search interval to just below the middle index.

#### Termination:

The process continues until the lower boundary exceeds the upper boundary, which means the target value is not in the array, and the search returns -1.

#### Example Execution:

1. In the provided code, the array is {3, 4, 5, 6, 7, 8, 9} and the target value is 4.
2. Initially, the search interval is the entire array.
3. The middle element is compared to 4:
        * If the middle element is not 4, the search interval is adjusted according to the comparison.
        * In this case, the search finds 4 at index 1.
4. The result is then printed, indicating the position of the target element if found, or stating that the element was not found if the search was unsuccessful.