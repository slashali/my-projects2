/*
 Operators of Function 
---math function 
---Pow الاوس 
---fmod
----ceil
---floor
---round 
---trunc
*/
/*
Function 
--Build in function
---cctype
----------tolower()
    ----- toupper()
----------isUpper()
----------isLower()
---------isSpace()

create 2 Applications 
-----swap case App **
-----remove spaces App**
*/
#include<iostream>
#include<array>
#include<string.h>
#include<cmath>
#include<cctype>
using namespace std;

int main()
{

 cout<<pow(2 , 4)<<endl; //2^4 ==16
cout <<11 % 2  <<endl; // 1 
//cout <<11.5 % 2  <<endl; // error
cout << fmod(11.5 , 2 ) <<endl; // 1 

cout<<ceil(9.1)<<endl;  //up 
cout<<floor(9.1)<<endl; //down

cout<<round ( 9.5)<<endl;//==> as ceil _down if the number up or equal the half ||
cout<<round ( 9.2)<<endl; //==> as floor _down if the number down the half ||
cout<<round ( 9.49)<<endl; // don't == .5 so will be down ***
cout<< trunc( 9.2)<<endl; // 9
cout<< trunc( 9.5)<<endl; // remove the {dot and after}  // 9 
cout<<trunc ( 9.9)<<endl;  // 9 

cout<<"\n=========================================\n";
cout <<'A'<<endl;
cout<<tolower('A')<<endl; // ASCII value 
cout<< char(tolower('A'))<<endl; //  the char is capi and convert to ==>small character
cout<< char('A')<<endl; // capi character

cout <<'b'<<endl;
cout<<toupper('b')<<endl; // ASCII value 
cout<< char(toupper('b'))<<endl; //  the char is small and convert to ==>capi character
cout<< char('b')<<endl; // capi character
cout<< int('b')<<endl; // small character

/*****************************************************************--*-*-*-*-*/
cout<<"\n=========================================\n";
string nameone ="ALiAteF ";

int sizename = size(nameone);

for(int i= 0; i< sizename ; i ++)
{

if ( isupper(nameone[i]))
{
//cout<<tolower(nameone[i])<<endl;// will print ASCII value
cout<<char(tolower(nameone[i]))<<endl;
}
else 
{
//cout<<toupper(nameone[i])<<endl; // will print ASCII value
}
cout<<char(toupper(nameone[i]))<<endl;
}
//cout <<(nameone[i])<<endl;// print all character
//cout <<int(nameone[i])<<endl; // will print ASCII value for all character


cout<<"\n======================================\n";

string nameTwo = " A Li\n   A\t   Te   f "; // { \t ==> mean --> click tab }
int sizeTwo = size(nameTwo);

for(int i= 0; i< sizeTwo ; i ++)
{
 if (nameTwo[i] == ' ' ) // space
{
continue; //  that will remove space ==>but we have a problem { \t and \n}
}
cout<<nameTwo[i];
}
cout<<"\n";
string namethree =" S L  a  S  h  ";
int sizethree = size(namethree);
for(int i= 0; i< sizethree ; i ++)
{
if(isspace(namethree[i]) )
{
    continue;
}
    cout<<(namethree[i]);

}
cout<<"\n=========================\n";

// your idea *****
// i will collect the operatioons
string Try =" OM    \n n i\t  A     "; 
int sizeTry_one = size(Try); 

for ( int G = 0; G < sizeTry_one ; G++)

{

if( isupper(Try[G]))
{
char(tolower(Try[G])); 
}
else 
{
char(toupper(Try[G])) ;
}
  if (isspace(Try[G]))
    {
  continue;
    }
    cout<<Try[G];
}

cout<<"\n================================\n";

















































    return 0; 
}