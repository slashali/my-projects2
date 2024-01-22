
#include<iostream>
#include<array>
#include<string.h>

using namespace std;

int main()
{

cout<<"begin*-*-*-*-*-*-*-*-*-*" <<endl;
/*
 Loop 
 ---Loop with for 
 ----Loop on Array

Syntax 

for()
{
    block of code  
}
*/
int nums []= {100 , 200 ,300 ,400 };
for (int aLi = 0; aLi < 4; aLi++)
{cout<< aLi <<endl;//  increament 
cout<<nums [aLi]  <<endl;// I want nums enter [ ali ]
 
}

int Nums[] ={ 100 , 200 , 300 , 400 , 500 , 600   } ;

int Slash = sizeof( Nums) / sizeof( Nums[0]);

for ( int i = 2 /*starting*/; i < Slash   /* [condition]*/; i++ /* Update*/)
{
    cout<< Nums[ i ]   <<endl;
}

/****************************************/
cout<<"\n============================================\n"<<endl;

int omnia []= { 1 , 2 , 3 , 4 , 5};
int she = sizeof(omnia) / sizeof(omnia[0]);
int a = 2 ;
for ( ; ; )
{
    cout << omnia [a] <<endl;
    a++;
    if ( a == she)  
    {
    break ;
    }
}

/*  good idea */
int age []= {26 , 22 , 19 , 15  };
string names[] = { "mohamed","ahmed","ali ","abdo"};
int N = 4 ; 

for( int G = 0;  G < N ; G++ )
{
cout << age[ G]   <<endl; //note
cout << names[G] << endl;//note
if (G == N)
break;

}
cout<<"\n=======\n";
//names[0] == age[0] && names[1] == age[1] && names[2] == age[2] && names[3] == age[3] // you are supied ==> you match string of names == age of numbers *****
/*
string && char by class way ***** and ways of string and ways of char  
*/
 array<string ,3 /* you must write the number string */ >herold = { "Rose","Raily","fuoscoo" }; 
array<string , 3> Hi= { "ali","SLash","Man"};

cout<<herold.front() <<endl;
cout<<herold.back() <<endl; // don't print enyting
cout<<herold.empty() <<endl;
 cout<<herold.size() <<endl; //number 
cout<< sizeof(herold) <<endl; 
cout<<sizeof (herold[2]) <<endl; // one string = 32 
cout<<herold[2]<<endl;

//cout<< herold + Hi <<endl; //error because you must define the string [0] \[2]
cout<< herold[0] + Hi[0]  <<endl;
cout<< herold[0] + herold[1]  <<endl;
cout <<herold[0].append(Hi[0]) <<endl; 
cout <<herold[0] <<Hi[0] <<endl;
//cout <<strcat(herold , Hi) <<endl;//error : I don't know

string G [] = { "he" , "she"};
string S []= {" they", " them " };
//cout <<  G + S <<endl; //error
cout <<  G[0] + S[1] <<endl;
cout <<  G[0] << S[0] <<endl;
cout <<G[0].append(S[0]) <<endl; 
//cout << strcpy( (G[0]), (S[0])) <<endl; //error : I don't know

// char 
array <char,5> Shoo = {'A','L','i', 'S','h'};
cout<< sizeof(Shoo) <<endl;
cout<<sizeof(Shoo[2])<<endl;
cout<<int(Shoo[ 0] )<<endl;

cout<<Shoo[0]<<herold[1] <<endl;
cout<<Shoo [4]+ herold[1]<<endl;
//cout<<Shoo[1].append(herold[2]) <<endl; // error because the data types not same 
// string with string or char with char in a { append way }



// int array
array<int ,4 > NUms = { 100 , 5 , 600 , 700};
cout<< sizeof (NUms) / sizeof (NUms[3])<<endl;
cout<< sizeof (NUms)<<endl;
cout<< sizeof (NUms[3])<<endl;
cout<< (NUms[4])<<endl;
int AL = sizeof (NUms) / sizeof (NUms[3]) ; // my best way ***-*-*-*-*-
cout<< AL<<endl;
cout<<"\n==============================\n";

/*
Loop 
        Loop for Advanced Trainings
*/
int U []= {100 , 200 , 300 , 400 , 500 , 600 }; 
int Ucount = sizeof(U) / sizeof(Ucount) ; 
for( int S = 0; ( S<=Ucount ); S++)
{
    if( S % 2 !=0 ) // method 1 
cout<<U[S] <<endl;
}
for( int S = 0; ( S<=Ucount ); S++) //method 2 
{
    if( S % 2 ==0 )
cout<<U[S] <<endl;
}
cout<<"\n======\n" ; 
for( int S = 0; ( S<=Ucount ); S++) // method 3
{
cout<<U[S] <<endl;
S++;
}
cout<<"\n======\n" ; 
for( int S = 0; ( S<=Ucount ); S+=2) // method 4
{
cout<<U[S] <<endl;
}
cout<<"\n======\n" ; 
for( int S = 0; ( S % 2 ==0 ); S++) //method 5
{
cout<<U[S] <<endl;

cout<<"\n=======================================\n";
}
  // I'm very happy .. you are a SLash Man already ****

for( int S =(Ucount - 1)  ; ( S >= 0  ); S--) // good 
{
cout<<U[S] <<endl;
}
for( int S =(Ucount - 2)  ; ( S >= 0 ); S--) // good  
{
cout<<U[S] <<endl;
}

for( int S =(Ucount - 3 )  ; ( S >= 0 ); S--) // good 
{
cout<<U[S] <<endl;
}
cout<<"\n=======================================\n";

string products[] = {" Item 1", " Item 2", " Item 3" }; 
string products_Name [] = {"shirt","body","chmize"};
string Sizes [] ={" Small"," Mediuem" , "Large"};
cout << products[0] << " Is : " << Sizes[0] <<endl; //  one method 

for ( int P = 0; P <=2; P++ )
{
    cout<< products[P] << " Is :  \0" ; cout << products_Name[P]  << "\0"<< " , size ==> ";  cout <<Sizes[0] << ","<< Sizes[1] << "," << Sizes[2]   << " \n" ; // Good method***
// \0 ==> help you 
}
cout<<"\n=======================================\n";

string J[] = { "ali" , " Ahmed" , " mohamed"}; 
for ( int Y = 0; Y< 3 ; Y++  )
{cout << J[Y] ;  
if( Y < 2) {cout<<" , " ;} // you need  type {,} one and two elementes only *********** 
}
cout<<"\n=======================================\n";

/* 
Loop 
    
    ==>>>>>>>>>   wihle 
*/
int D = 0; 
while ( D < 5  )
{
cout<< D <<endl;
D++;
if( D == 3   )
{ 
    break;
 }
}
cout<<"\n=======================================\n";

int L = 0; 
while ( L <=5  )
{
cout<<  L  <<endl;
if ( L==3  )
{
    break;
}
 L++;
}
/*
do first 
{

}while();
*/
int fensh = 90; 
do  
{
    fensh++;
cout<<fensh<<endl;

} while ( fensh<=100);
cout<<"\n=======================================\n";

/* 
    Loop 
          continue 
             break 

*/




int R []={ 10, 20 , 23 , 300 ,5 , 100 ,15 }; 
for (int index = 0; index <= 6 ; index++)
{
if ( R[index] > 20    ) // skip { 23 , 100 , 300} won't print them 
{
continue; // { if condition is true} continue will skip the after mean won't print the after 
}
cout << R[index]<<endl;
}
cout<<"\n=======================================\n";

/*int Omnia[] ={ 10 , 20 ,30, 40 , 50 ,60 , 70 };
for ( int V = 6 ; V <7 ; V-- )
{
if( Omnia[V] ==  50 )
{ 
    continue;
}
 cout <<  Omnia[V]<<endl;

}*/
cout<<"\n=======================================\n";


int Omnia[] ={ 10 , 20 ,30, 40 , 50 ,60 , 70 }; 
for ( int V = 2/*start*/ ; V >=0 /*condition where you start*/ ; V--/*Update*/ )// note because you take alot time to understand it 
{
if( Omnia[V] ==  50 )
{ 
    continue;
}
 cout <<  Omnia[V]<<endl;

}

int rose []= {  200 , 400 , 500 , 600 , 700 , 900}; 

for (int J = 5; J> 2 ;)
{
if (rose[J] != 900)
{
    continue ;
}
cout<< rose[J]<<endl;
J--;
}
cout<<"\n=======================================\n";


return 0;

}