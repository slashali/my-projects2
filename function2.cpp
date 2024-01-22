#include<iostream>
#include<array>
#include<string.h>

using namespace std;

/*
function
        Parameter Dafualt Value

*/
void Daufalt ( string name =" ALi " , string age =" 19 ")
{
    cout <<"Hi"<<name << "\n your age Is : "<<age<<endl;
}

void Dafault_2( string name , string Age ="19 "  ) // no problem 

{
        cout <<"Hi"<<name << "\n your age Is : "<<Age<<endl;

}

/*void Dafault_3(tring name = "SLash " ,string Age  ) // there is problem 
{c
            cout <<"Hi"<<name << "\n your age Is : "<<Age<<endl;
}
/*
Function 
    Passing Array As parameter*------*-*--*-* 

*/
/*****************************************************************************************/

void Calc ( int Nums[], int Count)
{
    int result = 0; 
for(  int i=0; i < Count ; i++ )
{
result += Nums[i] ;
    }
cout<<" The resulet  Is : "<< result<<endl;
for(  int i=3; i > Count ; i-- )
{
result /= Nums[i] ;
}
cout<<" After Division The Result Is : "<< result<<endl;
 }
/*******************************************************************************/
/*
function 
--- Forward Declaration -*-*-*-*-*-*-*-*-*-*-*
*/
int Calc_2 ( int a , int b  )
{
    return a + b ;
}


; // foward define


int main()
{
    cout<<Calc_2(10 , 20)<<endl; 



Daufalt();

Dafault_2( "ali");
// Dafault_3( " 19 "); error *********** 
/**********************************************************************/
cout<<"\n==============================================\n";

int arrayofnumbers[]= {10 , 20 , 30 , 40 , 50 , 100 };
int Countofarray = size(arrayofnumbers);
//Calc({ 10 , 20 , 2000 }, 4); //error
Calc (arrayofnumbers , Countofarray );
/**********************************************************/

cout<<"\n==============================================b\n";
return 0;
}

/*typedef int (*ali)(int a, int b );

int Add(int a, int b)
{
    return a + b;
}



int main()
{
    ali fp; // we declare a function pointer fp of type ali.
    fp = Add;
    cout << fp(10, 20) << endl;


    return 0;
}
/*In the main function, we declare a function pointer fp of type ali. Then, 
we assign the address of the Add function
 to fp and call the function through the pointer using the fp(10, 20) syntax. This will
  output the sum of 10 and 20, which is 30.

Next, we assign the address of the Subtract function to fp 
and call the function through the pointer again. This
 will output the result of subtracting 20 from 10, which is -10.

The purpose of using function pointers in this code is to allow
 us to dynamically call different functions based on the value of the 
 function pointer. In this case, we have demonstrated this by using the 
 same function pointer fp to call both the Add and Subtract functions.

*/
//*-*-*-*-*-*-*-****************-*-*-****-*-*-*--*
/*int Factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
        return n * Factorial(n - 1);
}*/
/*int Sum(int a, int b)
{
    return a + b;
}

double Sum(double a, double b)
{
    return a + b;
}*/
/* int Multiply(int a, int b)
{
    return a * b;
}

int main()
{
cout<<Multiply(10 , 20 )<<endl;
    return 0;
}
*/

/**/


















