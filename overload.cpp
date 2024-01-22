
#include<iostream>
#include<array>
#include<string.h>

using namespace std;


/*
 Function
     function Overloading
       Numbers and/Or Type Paramters IS different
*/

void print ( int a , int c)// accept two paramters only-*-*-*-*-*-
{
cout<<"number one Is : " << c <<endl;
cout<<"number two Is : " << a <<endl;
}
/*void print ( int a , int c)// accept two paramters only-*-*-*-*-*- // will appear error { you can't rebeat the same function }
{
cout<<"number one Is : " << c <<endl;
cout<<"number two Is : " << a <<endl;
}
*/
/*********************************************************************/
// That is Called over load and you can rebeat the function by more or less prameters and defferent Types*-*-*--*-*-
// That is Called over load and you can rebeat the function by more or less prameters and defferent Types*-*-*--*-*-
// That is Called over load and you can rebeat the function by more or less prameters and defferent Types*-*-*--*-*-

void print ( int a , int c , int b )
{
cout<<"number one Is : " << c <<endl;
cout<<"number two Is : " << a <<endl;
cout<<"number three Is : " << b <<endl;
}



void print ( int a , string c , auto S )// accept two paramters only-*-*-*-*-*-
{
cout<<"text one Is : " << c <<endl;
cout<<"number one Is : " << a <<endl;
cout<<" the double is : " << S <<endl;
}


int main ()
{
print( 10 , 20);
print( 200 , 300 , 400);
print( 200 ,"ali", 40.5);




    return 0 ;
}