#include <iostream>
#include <limits.h> // information of numbers --long / short *****
using namespace std;
int main ()
 {
   long long int now = 3333333333333 ; // more than number will appear error
   cout<< now<<endl;
     long HHi = 3333333 ; // 
     cout<<  HHi  <<endl;
    
     short my_phone = 3333 ; // more than number will appear error
cout <<  my_phone  <<endl ;
int age = 200 ;

cout<< age <<endl; 
long int New_age =200 ; 
cout<<sizeof (New_age ) <<endl;
long Last_age = 300 ; 
cout<<sizeof ( Last_age )<<endl;


cout<<sizeof  (long int ) <<endl; // short , long ==> modifiers
cout<<sizeof ( long long int ) <<endl;
cout<<sizeof ( short ) <<endl ;
cout<<sizeof ( short int ) <<endl ;
cout<<sizeof ( long long ) <<endl ;
//*********************************************************************************************
// signed by dfault -- this mean ==> 100 , -100 ,0 accepted *****
 signed int one_value = 200 ;
 cout<<  one_value  <<endl;

 signed int Two_value = -200 ; 
  cout<<  Two_value  <<endl;

signed int three_value = -200 ; 
  cout<< three_value  <<endl;

  unsigned four_value= -200  ; // unsigned accept only { positive number}
cout << four_value <<endl ; ////error******

//*******************************************************************************************
/*
Type Alias
 --- using identifier = Type  ; first Way 
 typedef unsigned long UL ;   second way 
---
*/
/* using bignum =  long long int ; // **bignum is a abrriviation 
bignum My_phone = 300; 
cout<<  y_phone    <<endl; 

*/
typedef  long long int bignuM = 300 ;  

bignuM My_phone = 300; 
cout<< My_phone <<endl; 



return 0; 
 }