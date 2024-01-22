#include <iostream>
using namespace std;
 
 int main()
 {
/* Data Type :
--Explicit conversion by the compiler**
--Implicit conversion by the programmer** 
*/
// 1-- --Explicit conversion by the compiler***************
int a   ;
double b = 20.5 ; 
 a = b ; // compiler will delete {.5} in (a) * as { a} intager --
cout<< sizeof( a + b) <<"\n"; 
cout << b / a  <<"\n";
cout<< a <<"\n";

char c='C' ;
cout<< int ( c )   <<"\n";
cout<<  sizeof( c )<<endl;
cout<< a + c <<endl;

char S ='300'; // not care about what you write in {' ....'}
cout<<int (S)  <<endl;
int d = 3000 ; 
cout<< sizeof(d )<<endl; // number = 4 Byte 
cout<<sizeof(S)   <<endl; // charachter = 1 Byte 

 //--Explicit conversion by the compiler*********

int h = 20 ; 
double k = 30.2; 

cout <<h - k <<endl; 
cout << sizeof( h + int (k))<<endl; // you force compiler to deal with { k} as an intager number
cout<< sizeof( k  ) <<endl;



return 0; 
 }