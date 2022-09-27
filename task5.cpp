#include <iostream>
#include "arrays_accrobatics.h"


using namespace std;




void separation ()
{
    cout << "=======================================" << endl;
}
  int main(int argc, char const *argv[])
{
    // 1.1 Declare a symbolic (char) array with size of 5 elements, and initialize it manually. Please: don’t use magic constants.
    
    

    char array1[5] = {'a', 'b', 'c', 'd', 'e'};

    for (size_t i = 0; i < 5; i++)
    {  
        cout << array1[i] << endl;
    }


    // 1.2 Declare and initialize an integer array with size of 10 elements and print it to the terminal. Please: don’t use magic constants.

    
    separation();

    int array1_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (size_t i = 0; i < 10; i++)
    {
        cout << array1_1[i] << endl;
    }
    cout << endl;


    // 1.3 Declare a string array with size of 4 elements and initialize it the same values, for example your name, using for/while loop. Please: don’t use magic constants.

    
    separation();

    string array2[] = {"Yuriy", "Yuriy", "Yuriy", "Yuriy"};
    
    for (string array2 : array2)
    {
        cout << array2 << endl;
    }
    cout << endl;


    // 1.4 Write a function that takes an array as an argument. The function must prints all elements to the terminal.

    
  

    string array3[] = {"Yuriy", "Vlad", "Oleg", "Andrew"};

    printArray(array3);


    // 1.5 Rewrite a previous function that takes an array as an argument, as well as non-negative integer number. The function must prints a specific element of this array to the terminal.

    
    int i;
    cout << "Enter number 0, 3 of an array element: ";
    cin >> i;
    
   printAnyElement(array3, i);








    // 2.1 Declare an integer array (non-negative) with size of N elements, where N – is a number entered by user (cin). After that - initialize the array manually: you array must consist of following numbers: 1, 2, 3, 4, 5, … N.

    
    int N;
    cout << "Set size of your array: ";
    cin >> N;
    int array [N];
    cout << endl;

    cout << "Its your array: "<< endl;
    for (size_t i = 0; i < N; i++)
    {
      array [i] = i+1;
      cout << array[i] << "\t";
    }
    cout << endl;
    separation();
    

    //2.2 Continuing previous task: print only odd elements to the terminal. After that – print only even elements to the terminal.


    cout << "Your odd elements of array: " << endl; 
   for (size_t i = 0; i < N; i++)
   {

     if (array[i] % 2 != 0)
     {
      cout << array[i] << "\t";
     }
     
     
   }
   cout << endl;
   separation();


   //2.3 Continuing previous task: change the elements that are > 2. After that – print the array to the terminal.

   cout << "Your even elements of array: " << endl;

   for (size_t i = 0; i < N; i++)
   {
     if (array[i] % 2 == 0)
     {
      cout << array[i] << "\t";
     }
     
   }
   cout << endl;
   separation();













    return 0;
}
