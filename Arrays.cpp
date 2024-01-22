




//Arrays*********************************

#include <iostream> 
#include <array> 
using namespace std;
 
 int main()
  { 

/*    double Nums[ 5 ] = { (1.1) , (2.3) , 3 , 4 , 5} ;
int Nums2 [] { 2,3,6,9,8}; // note : Optional to write ==> [ numbers of Arrays] and ==> " = "

cout<< sizeof ( Nums2)<<endl; // 20 Bytes
cout<< sizeof ( int)<<endl;// 4 Bytes 

cout<< sizeof ( Nums)<<endl; // 40 Bytes
cout<< sizeof ( double )<<endl;// 8 Bytes

/***********************************/
/* int ali [] {100 , 200 , 300} ;
ali[ 3]= 500; // Add an new Array 
cout << "first Elemant: "<< ali [ 0 ] <<endl; // note : Array start by [ 0 , 1 ,2............]
cout << "second Elemant: "<< ali [ 1 ] <<endl;
cout << " thred Elemant: "<< ali [ 2 ] <<endl;
cout << " Last Eleman: "<< ali [ 3 ] <<endl;

cout <<"Place: "<< &ali [ 0 ] <<endl;//==> " &  " give  memory location .****
cout << Place : "<< &ali [ 2 ] <<endl;*/

cout << "\n=================================\n";
string Types_Games[ ] { " Pubg"," pEs 2019 ","  Marvel 2021"};
Types_Games [ 3 ] = "  Dream Leauge  " ; //  note: Add a New Array ****  so ,, Add == update
Types_Games [ 1 ] = " Draem League  "; //** Note** :  update for one string 
cout<< sizeof(string ) <<endl; // 34 Byte
cout<< sizeof (Types_Games)  <<endl; //all bytes 96
cout<< "best Games for you  1 :  " << Types_Games[0] <<endl;
cout<< "best Games for you  3 :  " << Types_Games[1] <<endl;
cout<< "best Games for you  2 :  " << Types_Games[2] <<endl;
cout<< "best Games for you 4 :  " << Types_Games[3] <<endl;

cout << "\n=================================\n";
 // empty Array then Adding the value of Array
int Harold [ 5 ]  ; 
Harold [ 0 ]  =  5 ; // //** Note** :  update for one int Array  so,," Add == update"********
Harold [ 1 ]  =  20 ;
Harold [ 2 ]  =  30 ; 
Harold[ 3 ] = 45 ;
cout<< " MY best person :  "<<  Harold[ 0 ] <<endl;
cout<< " MY best person :  "<<  Harold[ 2 ] <<endl;
cout<< " MY best person :  "<<  Harold[ 1 ] <<endl;

cout<< sizeof (Harold[ 1 ] )<<endl; // 4 Byte
cout<< sizeof (Harold/* all Array */ )<<endl; // 4 * 5 == 20 Bytes


cout<< sizeof ((Harold[ 1 ] / Harold[ 0 ]  ) + (Harold[ 2 ] ) * Harold[3 ])<<endl; 
/* outpute is an int  so , a number of bytes = 4   */

cout<< /* 4Bytes*/sizeof ((Harold[ 1 ] / Harold[ 0 ]  ) +/* 4Bytes*/ sizeof (Harold[ 2 ] ) * Harold[3 ])<<endl; 
/* " you write sizeof before one  process"   */

/*
Class Array  // It's the best way than another
#include < Array > // add the Standered file *****************
*/


   // int numS [] ={ 100 ,200 ,300 ,400 ,5};
array<int, 5 > numS ={ 100 ,200 ,300 ,400 ,5};
cout<< numS [ 1 ]<<endl;
cout<< numS [ 2 ]<<endl;
cout<< numS [ 0 ]<<endl;
cout<< numS [ 3 ]<<endl;
//sizeof Array
cout <<" count : " << numS.size() <<endl;

cout << (sizeof numS ) <<endl;
cout << (sizeof numS [1]) <<endl;
cout << (sizeof numS[0] ) <<endl;
cout<<"\n======\n" ; 
// Array.fill 
//numS.fill ( 10 , 20 , 30) error
numS.fill ( 10 );
cout<< numS [ 1 ]<<endl;
cout<< numS [ 2 ]<<endl;
cout<< numS [ 0 ]<<endl;
cout<< numS [ 3 ]<<endl;
numS.fill ('A'); // char ASCII value = 65 
/* note : array deals with integer only*/
//!!!!
cout<< numS [ 1 ]<<endl;
cout<< numS [ 2 ]<<endl;
cout<< numS [ 0 ]<<endl;
cout<< numS [ 3 ]<<endl;

//numS.fill ( true ); // print all == 1 
 numS.fill ( false ); // print all ==0
 cout<< numS [ 1 ]<<endl;
cout<< numS [ 2 ]<<endl;
cout<< numS [ 0 ]<<endl;
cout<< numS [ 3 ]<<endl;
 numS.fill ( 10.2 ); // print all ==0 and /* note : array deals with intager only*/
 cout<< numS [ 1 ]<<endl;
cout<< numS [ 2 ]<<endl;
cout<< numS [ 0 ]<<endl;
cout<< numS [ 3 ]<<endl;
 /* 
 Arrays  
         Useful Methods
      at  ==> cout<<  nUms at( 3 )  <<endl;
      front // cout<<  nUms.front (  )  <<endl;
      back cout<<  nUms.back( )  <<endl;
      fill 
      size 
      empty // cout<<  nUms.empty (  )  <<endl; ==> 
true = 1 , false = 0 ;
 */

/*array<int, 6 > nUms = {5 , 2, 3, 6 , 8 , 100};

 cout<< nUms.empty ()<<endl;
cout<<nUms.front()<<endl;
cout<< nUms.size()<<endl;
cout<< nUms.back()<<endl;  
*/// elcode run out of the {file}Array.cpp





    return 0; 
 }






