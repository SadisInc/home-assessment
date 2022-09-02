#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* 1. Write a program to check whether a given number by user is positive or negative. 
          Depending on a result - report it in the console. After that – ask user to enter another number. 
          Find the largest of two entered numbers. Depending on a result - report it in the console.
    */
//       int x = 0;
//        cout << "Enter Number : ";
//        cin >> x;
//      if (x < 0)
//      {
//       cout << "Your number is negative!!!" << endl;
//      }
//      else if (x > 0)
//      {
//       cout << "Your number is positive!!!" << endl;
//      }
//      else
//      {
//        cout << "Your number is zeroooo!!!"<< endl;
//      }
     

     /* 2. Write a small program to compare two strings which values was written by user’s keyboard. 
          Also, create additional logic variable (boolean). 
          If strings are the same – print the next message: <your_string_1> is equal to <your_string_2> and assign truth to a logic variable, 
          otherwise – assign false and report it in the console.
    */

//    int x , y = 0;
//    bool flag = 0;
//    cout << "Enter x : ";
//    cin >> x;
//    cout << "Enter y :";
//    cin >> y;
//    if (x == y)
//    {
//     cout << " Your x is equal to y " << endl;
//     flag = 1;
//    }
//    else
//    {
//       cout << "Your x isn`t equal to y" << endl;
//     flag = 0;
//    }
   

   /*  3. Write a program that finds the largest of three entered numbers. 
           Depending on a result - report it in the console.
           
           Підказка: use if in if:
           
           if (...) 
           {
               if (...) 
               {
                   
               }
           }
           
           or you can use:
            - and &&
            - or || 
    
    */

     int one = 0, two = 0, three = 0;
        cout << "Enter a first number : ";
        cin >> one;
        cout << "Enter a seconn number : ";
        cin >> two;
        cout << "Enter a third number : ";
        cin >> three;
        if (one > two && one > three)
            cout << "First" << endl;
          else
          if (two > one && two > three)
        cout << "Second" << endl;
          else
          if (three > one && three > two)
        cout << "Third" << endl;
          else
          if (one == two && two == three)
        cout << "Equal" << endl;
          else
        cout << "We can`t recognize this number yet :)" << endl;




    return 0;
}
