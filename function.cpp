#include<iostream>
#include<array>
#include<string.h>

using namespace std;
/*
function 
        don't rebeat yourself*****
Syetax 
        returnDataType function ( paramter,paramter,paramter3)
{
    Block of code 
}
*/
 // by that you call the function 
// merits are help you to don't repeat the block of code

void sayhello( string msg , string name , int age) // Declare the function  
{
    cout<<msg << " " << name << endl;
    cout<<name<<"'s age Is : "<<age<<endl; 
}
void SLash( string name ,string rank , int sitting_number , int num_projects ,  int Salary ) 
{
cout<< name << " your Rank Is : " <<rank    <<endl;
cout <<sitting_number<<endl;
cout<<num_projects<<"\n"<<" your Salary Is ===> " << Salary<< endl;
}

void sLash_4  (string menu , string from_Types , string descrptoin , int cost )
{
cout << "the menu has : " << menu <<endl;
cout<< "Foods===> chicken, rice , fish , meat || juices===> orange , apple , mango , tea|| smokes===> cegaretes ___  "<<endl; 
cout <<"\n";
cout <<"please , choose what you want "<< endl; 
cout<<from_Types<<endl;
{
if ( from_Types == "chicken" )
{
cout<<"that's cost : " <<cost <<endl;
}

else if (from_Types == "apple" )
{
    cout<<"that cost : " <<cost <<endl;
}

else if (from_Types == "cegaretes" )
{
   cout<<"that cost : " << cost <<endl;
    }
  }
}

int main()
{

cout<<"\n============================================\n"<<endl;
sayhello ( "hello" , "ali", 19);
sayhello ( "hello" , "omnia", 19);
sayhello ( "hello" , " SLash", 25);
cout<<"\n============================================\n"<<endl;

SLash( "ali" , "senoir " , 2005 , 5 , 5000);
SLash("Ahmed" , "mid_senoir " , 2002 ,10 ,5000);
SLash("omnia" , "junior " , 2006 , 4 , 2000);

cout<<"\n============================================\n"<<endl;
cout << "welcome to sLash_4 "<<endl;
cout << " we open at 9:00 to 11:00"<< "//===> we hope visit ours to taste and drink fresh foods or juices"<<endl;

sLash_4("{Foods , Juices , smokes }" , "==>chicken" /* "chicken " ==>  by space that not resume if condition*/, " oh , ==> we have agood type from chicken , i think you  will desire it" , 500 );
sLash_4("Foods , Juices , smokes" , "apple" , " oh , we have agood type from apple , i think you will desire it" , 50 );
sLash_4("Foods , Juices , smokes" , "cegaretes" , " oh , we have agood type from cegaretes, i think you will desire it" , 100 );




    return 0;
}