
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <array>

using namespace std;

typedef int (*ali)(int a, int b); // define a function pointer {type }ali

int Add(int a, int b) // define the Add function
{
    return a + b;
}

int Subtract(int a, int b) // define the Subtract function
{
    return a - b;
}

int Multiply(int a, int b) // define the Multiply function
{
    return a * b;
}

int main()
{
    ali fp_list; // declare a pointer to ==>  an array of function pointers
  
    fp_list = Multiply; // assign the address of the Multiply function to the third element of the array

    for (int i = 0; i <1 ; i++) // iterate over the function pointers in the array
    {
        cout << fp_list(10, 20) << endl; // call each function pointer with the arguments 10 and 20
    }
  fp_list = Add; // assign the address of the Add function to the first element of the array

   for (int i = 0; i <1 ; i++) // iterate over the function pointers in the array
    {
        cout << fp_list(10, 50) << endl; // call each function pointer with the arguments 10 and 20
    }

    fp_list = Subtract; // assign the address of the Subtract function to the second element of the array
   for (int i = 0; i < 1; i++) // iterate over the function pointers in the array
    {
        cout << fp_list(12, 10) << endl; // call each function pointer with the arguments 10 and 20
    }
    return 0;
}








/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <array>

using namespace std;

typedef int (*ali)(int j, int x); // define a function pointer type ali
// declare a function pointer fp of type ali ==> int *ali = numbers ; 
int Add(int a, int b) // define the Add function
{
    return a + b;
}

int Subtract(int y, int z ) // define the Subtract function
{
    return y - z;
}

int main()
{
    
    ali fp = Add; // declare a function pointer fp and assign the address of the Add function to it
    cout << fp(10, 20) << endl; // output the sum of 10 and 20

     fp = Subtract; // assign the address of the Subtract function to fp
    cout << fp(10, 20) << endl; // output the difference between 10 and 20

    return 0;
}

/*



*/