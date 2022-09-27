#include <iostream>

using namespace std;



// 1.4 Write a function that takes an array as an argument. The function must prints all elements to the terminal.

void printArray(string array2[])
{
    for (size_t i = 0; i <= 3; i++)
    {
        cout << array2[i] << "\t";
    }
    cout << endl;
}

// 1.5 Rewrite a previous function that takes an array as an argument, as well as non-negative integer number. The function must prints a specific element of this array to the terminal.

    void printAnyElement(string array3[3], int i)
{
    if (i > -1 && i < 4)
    {
        cout << "The requested array element: " << array3[i] << endl;
    }
    else
    {
        cout << "Oh, something is not working as planned!";
    }
}


  // 3.2 Move the implementation of this function in header file called "arrays_acrobatics.h"

   void printAllArray(float floatArray[]) 
{
        for (size_t i = 0; i <= 6; i++)
        {
            cout << floatArray[i] << "\t";
        }
        cout << endl;
}


  // 3.3 Create a new function in "arrays_acrobatics.h" that return specified element of an appropriate array. The arrays must be float.

  float retElemOfArray(float floatArray[])
{
    cout << "Returned element is: " << floatArray[3] << "\t";
    cout << endl;

    return floatArray[3];
}