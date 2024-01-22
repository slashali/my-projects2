#include <iostream>
#include<array>
#include<string.h>
using namespace std; 
int main()
{
int point = 0; 
int answer1 , answer2 ,answer3 ;
int sequances [3] [4] = {
{1 , 5 , 25 , 125 } ,
{ 2 ,5 , 11 , 23} ,
{ 15, 12, 9 , 6}
};
cout<<"Type your answers Please,... "<<endl;
cout <<"type answer one :  "<<endl;
cout <<" 1| 5| 25| ?? "<<endl;
cin>> answer1;
cout <<"type answer two :  "<<endl;
cout <<" 2| 5| 11| ?? "<<endl;
cin>> answer2;
cout <<"type answer three :  "<<endl;
cout <<" 15| 12| 9| ?? "<<endl;
cin>> answer3;


if ( answer1 == sequances [0][3]) {
    point++;
}
if ( answer2 == sequances [1][3]) {
    point++;
}
if ( answer3 == sequances [2][3]) {
    point++;
} else { cout<<" fuck you"<<endl;}

cout<<"your points are gained : " <<point << " from 3 " <<endl;

/******************************************************************************/
// another app *** 
string subjects []={" arabic", " maths","physics","English"} ; 
string exams []= { "implement exam =  ","Oral exam = ", " assienments = " ," team work = "} ;
int status ;  
int degrees [4][4] = { {10 , 5 , 5 ,0 },{ 10 , 10 , 10 , 20},{ 20 , 20 ,20 ,15},{ 0 ,0 , 0 ,0} };

cout <<" Give me sitting number"<<endl;
cout << "  total maths degree :    " <<endl;
int arabic = { degrees [1][0] +(degrees [1][1]) + ( degrees [1][2])+ degrees [1][3] }; // it's my best way *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
cout<< arabic <<endl;

cin>>status;
cout << "  total physics degree :    " <<endl;
int physics = { ( degrees [2][0]) +  (degrees [2][1]) + ( degrees [2][2])+( degrees [2][3])};
cout<<  physics <<endl;
cin>>status ;
cout << "  total  English degree :    " <<endl;
int English = { (degrees [3][0]) + (degrees [3][1]) +  (degrees [3][2]) +  degrees [3][3] };
cout<<English <<endl;
cin>>status;
cout << "  total arabic degree :    " <<endl;
int maths = { (degrees [0][0] )+ ( degrees [0][1] )+(degrees [0][2])+ ( degrees [0][3])} ;
cout<<maths<<endl;
cin>> status; 

if ( status == 1)
{ cout<<" you are succeeded" <<endl;   }
else {cout<<" you are failed , fuck you Man " <<endl;}

cout<< " \n==================================================================\n";
/*   
String 
  
-- String Type  
--C style string  ==> way
-- string Class ==> way 
--  \00 >>>  Null ==> AsCII value = 0 , that's trminate the string by==> \0  
note ==> one char in string   = 32 Byte 
*/
cout<<"I'am Dragon"<<endl; // size ==> 12 Byte 
cout<<"I'am\0 Dragon"<<endl; // size ==> 12 Byte ==> print { i'am} because Null
cout<< " \n==================================================================\n";

char name_a [] = {'A','l','i','a','t' ,'e','f'}; //==>  ==> Ali_atef\0 = 9 char *****
//char name_c [] = {"Ali"}; 
cout << name_a<<endl;
cout << sizeof(name_a)<<endl;
cout << sizeof(char)<<endl;
cout << name_a [0]<<endl;
//cout << name_a.front()<<endl; //==> error because (name_a.front ) with string name **************************************-*-*-*-*-*-*-*-*-*-*--*
cout << int (name_a[8]) <<endl;// ==> Null 
cout << char (name_a[8]) <<endl;// ==> Null ==> don't has output 
cout << name_a[8] <<endl;// ==> Null ==> don't has output
cout<< " \n==================================================================\n";
array< string,7> name_c = {"aliatef"};
cout << name_c [6]<<endl; // deals with  "aliatef" as a one indext ==> 0 || so did't show output
cout << name_c[0]<<endl;
cout << sizeof(name_c)<<endl;
cout << sizeof(string)<<endl;
cout << sizeof(name_c [5])<<endl;

cout << name_c.front () <<endl;
 cout<< name_c.empty ()<<endl;
cout<< name_c.size()<<endl;
cout<< name_c.back()<<endl; // deals with  "aliatef" as a one indext ==> 0 || so did't show output
cout<< " \n==================================================================\n";
// important ==> note the deffirance ******
array<int, 6 > nUms = {5 , 2, 3, 6 , 8 , 100};

 cout<< nUms.empty ()<<endl;
cout<<nUms.front()<<endl;
cout<< nUms.size()<<endl; // count of numbers*** but not Bytes
cout<< nUms.back()<<endl;  

cout<< " \n==================================================================\n";

/*
string 
---concatenating Strings 
----------Normal Way 
------strcat ==> write it in header file ==> include <string.h> 
            with
            append
*/

char fname [] = "SLash";
char lname [] = "Man";

cout<< sizeof (fname)<<endl;
//cout<< nUms.size()<<endl; // count of numbers*** but not Bytes *****

cout<<fname <<lname<<endl; // Normal Way 

cout<<strcat(fname,lname )<<endl; // strcat way 
cout<< " \n==================================================================\n";

string Myname = "Ali";
string lastname ="atef";
string nickname ="SLash";
cout<< Myname +lastname  <<endl;
string ali =  Myname +lastname ; // the way help you to part the operations
cout<< ali << endl;
//cout<<strcat(Myname,lastname )<<endl; // strcat way ==> note : strcat don't work with string name
cout<<Myname.append(lastname)<<endl;





















    return 0;
}
#include <string.h>