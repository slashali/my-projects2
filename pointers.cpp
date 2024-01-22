
/*
--Pointers 
    what are Pointers ????
--A variable that store memory Address of other variable *-*-*-

why we need pointers ???    
    --To iterate on elements in data structures like Array . 
    --Pass function to other funciton 
    -- Dynamic memory Allocatoin
    

     benefits of using pointers 
--Reduce the code and increase performance *-
    
Note --->>>
    There's Raw pointers And start pointers 

--Syntax **

    Declare A pointer 
    print variable memory address ===> reference operrators || Address of [&]
    Print value that memory Adress point to ==> dereferance operator [*].
    change varible value wiht pointer.

*/
#include<iostream>
#include<array>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{

int nums = 100; 
int *ptr = &nums ;// ==> &  refere to memory address

    cout<<"value is : "<< nums <<endl;
    cout<<"value is : "<< &nums <<endl; // there is abit difference  int num  []= { 10 , 20 , 30, 40 , 50}; and int nums = 100;  in memory address *-*-*-*-

    cout<<"value is : "<< ptr <<endl; //==> memory address 
    cout<<"value is : "<< *ptr <<endl; //==> value

*ptr = 200 ; // i update value but i don't change the address*-*--*-**
cout<<"value is : "<< nums <<endl;
cout<<"value is : "<< &nums <<endl;
cout<<"value is : "<< ptr <<endl; //==>  the same memory address 
cout<<"value is : "<< *ptr <<endl; //==> value

cout<<"\n===========\n";

 int num  []= { 10 , 20 , 30, 40 , 50};
int *PTR = &num[0]; // declare pointer
    cout<< "the first element"<<endl;
/* sizeof for integer = 4 byte*****/
/* if you make it ===>  short int num []= { 10 , 20 , 30, 40 , 50}; --> sizeof = 2 Byte for one number in memory*/
        cout<<"value is : " << num[0 ] <<endl; // value 
        cout<<"memory adress is : " << &num[0 ] <<endl; // memory address 
        cout<<" memory adress of pointer : " << PTR <<endl;// memory address 
        /*memory adress is : 0x32e0bff6d0 ==> the memory adress end by [0]*/
        cout<<"value is pointer : " << *PTR <<endl;// value 

    cout<< "the second element"<<endl;

        cout<<"value is : " << num[1 ] <<endl; // value 
        cout<<"memory adress is : " << &num[1 ] <<endl; // memory address 
        cout<<" memory adress of pointer : " << PTR + 1 <<endl;// memory address 
                /*memory adress is : 0x32e0bff6d4 ==> the memory adress end by [4]*/
        cout<<"value is pointer : " << * (PTR + 1 ) <<endl;// value 

    cout<< "the third element"<<endl;

        // cout<<"value is : " << *(num.begin() + 1) <<endl; // value // error that for vector not array 
        cout<<"memory adress is : " << &num[2 ] <<endl; // memory address 
        cout<<" memory adress of pointer : " << PTR + 2 <<endl;// memory address 
                /*memory adress is : 0x32e0bff6d8 ==> the memory adress end by [8]*/
        cout<<"value is pointer : " << * (PTR + 2) <<endl;// value 

    cout<< "the fourth element"<<endl;

        cout<<"value is : " << num[3 ] <<endl; // value 
        cout<<"memory adress is : " << &num[3] <<endl; // memory address 
        cout<<" memory adress of pointer : " << PTR + 3 <<endl;// memory address 
                /*memory adress is : 0x32e0bff6d12 ==> the memory adress end by [12]*/
        cout<<"value is pointer : " << *(PTR + 3 ) <<endl;// value 
cout<<"\n=========\n";

/*
Pointers 
----void, wild pointer And Null ***
*/

    int *ptr1 ; //wild pointer 
    int *ptr2 = NULL  ; //wild pointer 
    int *ptr3 = nullptr  ; //wild pointer 

        cout<<ptr1<<endl; //garbage value ==> different values in everytime
        cout<<ptr2<<endl; // 0 
        cout<<ptr3<<endl; // 0 
    
        int ahmed = 100 ;
        int *Ptr = &ahmed ;
        
            cout << Ptr<<endl; // memory
            cout << *Ptr<<endl; // value
            
            cout<<"\n========\n";
    // if you don't know the data type
    
        int a = 300 ; 
        void *PTr = &a ;  
         cout<<(*(int *) ptr) ;
             cout << PTr<<endl; // memory
            //cout << *PTr<<endl; // there is error because the difference of data types
            // So you need the -->  C _ Style *-*-*--*-*-*
            cout<<*(static_cast <int *> (PTr) ) <<endl; // it is easy method 
/*  // another way of difference type data    
        // cout<<*(int * )PTr ) <<endl;
  */

cout<<"\n=========\n";
int numbers [] = {10 , 20 , 30 , 40 , 50 };

  cout <<numbers<<endl; // memory address of the first index
  cout <<&numbers<<endl; // memory address of the first index
  cout <<&numbers[0]<<endl; 
  cout <<*numbers<<endl; //  value of index [0]

  cout <<numbers[1]<<endl; 
  cout <<*(numbers + 1 )<<endl;
  cout <<numbers[2]<<endl; 
  cout <<*(numbers + 2 )<<endl; 
cout<<"\n=========\n";

int *PTR1 = numbers ;

   cout <<PTR1[3]<<endl; 
   cout <<*(PTR1 + 3 )<<endl; 
   
   PTR1 ++; // 

   cout <<PTR1[3]<<endl; // value 
   cout <<*(PTR1 + 3 )<<endl; // value
   
   PTR1--;

   cout <<PTR1[3]<<endl; 
   cout <<*(PTR1 + 3 )<<endl; 
   
 PTR1 += 2;

   cout <<PTR1<<endl; 
   cout <<*(PTR1 )<<endl;

return 0 ; 
}

/****************************************************************************************

 #include<iostream>
 #include<array>
 #include<string.h>
 #include<vector>
 #include<algorithm>

 using namespace std; 


int main() 
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *PTR1 = numbers;

    // Updating a specific element in the pointer array
    PTR1[2] = 35; // first method  
    cout << "Updated element: " << PTR1[2] << endl;

    // Updating a specific element in the pointer array using pointer arithmetic
    *(PTR1 + 4) = 333 ;  //  second method 
    cout << "Updated element: " << PTR1[4] << endl;

    // Incrementing the pointer array by a certain amount
    PTR1 += 2;
    cout << "Element after incrementing: " << *PTR1 << endl;

    // Decrementing the pointer array by a certain amount
    PTR1 += 2; //forawrd 
    cout << "Element after decrementing: " << *PTR1 << endl;

    // NOTE ::  Resetting the  array to its original type
    PTR1 =  (numbers ); // not important you can delete this step
    // will refere  to  begin index*-*-**-*
    cout << "Element after resetting: " << *PTR1 * 2 << endl; 

for ( int ali : numbers )
{
    cout<<ali * 2 <<endl; //  the operatoion 
}
return 0;
}
*****************************************************************************************************************************************************************
void fillArray(int *arr, int size, int val) //! that's an idea 
{
    for (int i = 0; i < size; i++)
     {
        arr[i] = val;
    }
}

******************************

void printArray(int *arr, int size , int val) {that's impotant way of pointer*-**-*-*-*
 {

val = 0 ; 

    for (int i = 0; i < size; i++)
     {
      val += arr[i] ;

              cout <<val << endl;

      val++;

        cout <<val << endl;
    }

cout<<val<<endl;

}

int main()
{   
   int arr_num [] = { 100 , 2000, 300 , 400}; 
  printArray ( arr_num , 4 , 0);
      return 0;
}

***************************** //! that an idea 
void setValues(int *a, int *b, int val) {
    *a = val;
    *b = val * 2;
}
*******************************
#include <iostream>
#include <vector>
using namespace std; 

void swap(int *a, int *b)
 {
    cout<<(*a + *b) <<endl;
}

int main() 
{
    int a = 5;
    int b = 10;

    cout << "Before swap: a = " << a << ", b = " << b<< endl;

    swap(a, b); // swap function ==> switch the intgers 

    cout << "After swap: a = " << a << ", b = " << b<< endl;

    return 0;
    This C++ code defines a function called "swap" that takes two pointers as parameters.
The purpose of this function is to swap the values 
of two integer variables without using a third temporary variable.
 This can be useful in certain programming situations, particularly when memory is limited.

In the "main" function, two integer variables "a" and "b" are declared and 
initialized with the values 5 and 10, respectively. Then, a message is
 printed to the console before the swap occurs. The "swap" function is 
 called with the addresses of "a" and "b" as arguments. This allows the 
 function to modify the values of "a" and "b". After the swap, another message 
 is printed to the console.

}
OR************************************************************************************************************* 
#include <iostream>
#include <vector>
using namespace std; 

void swap(int *a, int *b)
 {
}

int main() 
{
    int a[] = {5 , 10 , 20 , 55};
    int b []= {10 , 100 , 200 };

for ( int B : b   )
for (int A : a)

    {  
      cout << "Before swap: a = " << A << ", b = " <<  B<< endl;
      cout<<(B + A) <<endl;
    }
      

    swap(a, b); // swap ==> switch the intgers
for ( int B : b   )
for (int A : a)
    {
      cout << "After swap: a = " << A << ", b = " <<B << endl;
      cout<<(B + A) <<endl;
    }

    return 0;
}
/*
This C++ code defines a function called "swap" that takes two pointers as parameters. These pointers point to the memory locations of two integer variables, "a" and "b". The function then creates a third integer variable called "temp" and assigns it the value of the variable pointed to by "a". Then, it assigns the value of the variable pointed to by "b" to the variable
 pointed to by "a". Finally, it assigns the value of "temp" to the variable pointed 
 to by "b".

The purpose of this function is to swap the values 
of two integer variables without using a third temporary variable.
 This can be useful in certain programming situations, particularly when memory is limited.

In the "main" function, two integer variables "a" and "b" are declared and 
initialized with the values 5 and 10, respectively. Then, a message is
 printed to the console before the swap occurs. The "swap" function is 
 called with the addresses of "a" and "b" as arguments. This allows the 
 function to modify the values of "a" and "b". After the swap, another message 
 is printed to the console.


very impportant 



#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <array>

using namespace std;

typedef int (*ali)(int a, int b); // define a function pointer type ali

int Add(int a, int b) // define the Add function
{
   return a + b ;
}

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50}; // create a vector of integers 
    //==> don't delete vecotr because at for i < numbers.size() ; 
    ==> ali is type not variable of pointer<==
    ali fp = Add; // declare a function pointer fp and assign the address of the Add function to it //! very important 

    for (int i = 0; i < numbers.size() ; i++) // iterate over the numbers in the vector
    {

        cout << fp(numbers[i],10 ) << endl; // call the function pointer fp with the current and next numbers in the vector
    }
            cout<<"\n========\n";

for (int i = 0; i < numbers.size() ; i++)
   {
        cout << fp(numbers[i],numbers[i] ) << endl; // call the function pointer fp with the current and next numbers in the vector
   }
        cout<<"\n========\n";

for (int i = 0; i < numbers.size() ; i++)
   {

        cout << fp(numbers[i],(numbers[i] + 2 ) ) << endl; // call the function pointer fp with the current and next numbers in the vector
   }
           cout<<"\n========\n";

for (int i = 0; i < numbers.size() ; i++)
   {

        cout << fp(numbers[i],(numbers[i + 1]  ) << endl; // call the function pointer fp with the current and next numbers in the vector
   // first ==> 10 from numbers[i ] + 20 from numbers[i + 1] 
    }
           cout<<"\n========\n";

for (int i = 0; i < numbers.size() ; i++)
   {
        cout << fp(numbers[i],(numbers[i + 3]  ) << endl; // call the function pointer fp with the current and next numbers in the vector
        //10 from numbers[i ] + 40 from numbers[i + 3] 
   }
    return 0;
} 

/*********************************************************************************************************************************

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <array>

using namespace std;

typedef int (*ali)(int a, int b); // define a function pointer {type }ali

int Add(int a, int b) // define the Add function
{
    return a + b;
}

int Subtract(int a, int b) // define the Subtract function
{
    return a - b;
}

int Multiply(int a, int b) // define the Multiply function
{
    return a * b;
}

int main()
{
    ali fp_list; // declare a pointer to ==>  an array of function pointers
  
    fp_list = Multiply; // assign the address of the Multiply function to the third element of the array

    for (int i = 0; i <1 ; i++) // iterate over the function pointers in the array
    {
        cout << fp_list(10, 20) << endl; // call each function pointer with the arguments 10 and 20
    }
  fp_list = Add; // assign the address of the Add function to the first element of the array

   for (int i = 0; i <1 ; i++) // iterate over the function pointers in the array
    {
        cout << fp_list(10, 50) << endl; // call each function pointer with the arguments 10 and 20
    }

    fp_list = Subtract; // assign the address of the Subtract function to the second element of the array
   for (int i = 0; i < 1; i++) // iterate over the function pointers in the array
    {
        cout << fp_list(12, 10) << endl; // call each function pointer with the arguments 10 and 20
    }
    return 0;
}


// up is  modified 

// beofre Editing *-*-*-*-*-*-

// down is not modified


/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <array>

using namespace std;

typedef int (*ali)(int j, int x); // define a function pointer type ali
// declare a function pointer fp of type ali ==> int *ali = numbers ; 
int Add(int a, int b) // define the Add function
{
    return a + b;
}

int Subtract(int y, int z ) // define the Subtract function
{
    return y - z;
}

int main()
{
    
    ali fp = Add; // declare a function pointer fp and assign the address of the Add function to it
    cout << fp(10, 20) << endl; // output the sum of 10 and 20

     fp = Subtract; // assign the address of the Subtract function to fp
    cout << fp(10, 20) << endl; // output the difference between 10 and 20

    return 0;
}

//***********************************************
//! pointer by for loop 
#include <iostream>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int *p;

    for (int i = 0; i < 3; i++) {
        for (p = arr[i]; p < arr[i] + 4; p++) {
            std::cout << *p << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

//******************************************
#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, new Node{5, nullptr}}}}};

    for (Node* p = head; p != nullptr; p = p->next) {
        std::cout << p->data << " ";
    }

    return 0;
}
//****************************************************
#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p;

    for (p = arr; p != arr + sizeof(arr) / sizeof(arr[0]); p++) {
        std::cout << *p << " ";
    }

    return 0;
}


















