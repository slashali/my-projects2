#include <iostream>
using namespace std;
 
 int main()
 { 
// boolean values -- } true , false{ small charachter****
bool opened = true   ; 
bool closed = false ; 
cout<< closed + opened << endl ; 
bool Ali = 3>1; 
cout << Ali << endl;
 int num = 200 ; 
 auto test_one = 300< 6000 ; 
 auto test_Two= 2>1 ; 
cout<< sizeof ( num) << endl; // 4 Byte
cout<< sizeof (test_Two ) << endl;; // 1 Byte 
cout<< sizeof ( test_one) << endl ;// 1 Byte 
cout<< test_one + opened<< endl ; 
cout<< num / test_one << endl ; 

 /* // Note 
int one = 100; // output will be { value of number}
int  Two  = -100 ; // output will be { value of number} 
*/
bool one = 100 ; // output will be { true , false }
bool Two = -100 ; // output will be { true = 1 , false = 0 }
cout <<Two <<endl;
cout<< one <<endl;
return 0 ; 
 }