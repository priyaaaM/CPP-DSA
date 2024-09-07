// Insertion in an array
// Inserting elements into a 1D array involves adding a new element at a specific position within the array.
// This often requires shifting the existing elements to make room for the new element.
// Here's a step-by-step process for inserting elements into a 1D array:

// Determine the Position: Decide where you want to insert the new element in the array.
// You need to know the index (position) where you want to place the element.
// Shift Elements: Starting from the last element, move each element one position to the right until you reach the desired position for the new element.
// This creates space for the new element.
// Insert the New Element: Once you have shifted the necessary elements, you can insert the new element into the empty position you created.
// Update Array Size: If your array is dynamically allocated, make sure to update its size to reflect the new number of elements.
// Task
// Review the code in the IDE to understand the insertion process.


#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[100] = {2, 4, 6, 8, 10}; // Initial array
    int size = 5; // Current size of the array

    int newPosition = 2; // Index where you want to insert the new element
    int newElement = 7; // Element to be inserted

    // Shift elements to make space for the new element
    for (int i=size-1 ; i>=newPosition ; i--){
        arr[i+1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[newPosition] = newElement;

    size++; // Update the size of the array

    // Print the updated array
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}