
#include<iostream>
#include<array>
#include<string.h>

using namespace std;

int main()
{
/*
for , while , do while , continue , break 
     
1- Count  & even Numbers only
2- Geuss the number
3-Reversed Elements from Users*/

int result = 0; 
int nums []= {  10 , 15 , -20 ,26 , 50 , -5 ,300}; 
int Countsize = size(nums);

for ( int i = 0; i < Countsize ; i++)
{

if (nums[i] > 0 &&  nums[i] % 2 ==0     )
{
     result +=nums[i];
}
 else { continue;} // if the nums[i] not related with the condition skip the number  
cout <<"Result Is : "<< result<<endl;
}

// ===> 2

int guessnumber = 7 ; 
int Tries = 0; 
int choose; 

while ( true)
{
Tries ++;
    if ( Tries == 5 )
{
cout <<"sorry, you are failed "<<endl; cout <<" the correct number Is : "<<guessnumber<<endl;
}
cin >> choose ; 
if (guessnumber==choose  )
{
cout << "Good , that correct guessnumber "<<endl;
break;
}
else
{
cout<<"sorry , that is incorrect guessnumber "<<endl; 
}
}

cout<<"\n============================\n";
int values [5] ; 
int inp ; 
cout<< "  the inp"   <<endl;

for ( int K = 0 ; K <5 ; K++)
{
    
cin>>inp;
values[K] = inp ; 
}

cout << "please reverse this valuse "<<endl; 


for ( int K = 4 ; K >=0 ; K--)
{
    cout<< values[K] << endl;
}


/*****************************************************************************/
cout<<"\n============================\n";
 // 1- App ****

cout << " Hi Ali "<<endl;

int projects ; 
int work_days ; 
int total_Salary=5000 ; //5000
int co_helper_Salary  ;//1000
cin>>projects ;
cin>>work_days ;

if (  work_days >=5 ) // if (  work_days ++ ;) ==> error by { ; } delete it
{
co_helper_Salary += 500;
cout<<co_helper_Salary <<endl;
}
else if (projects == 5    )
{
    cout << "we have a big project so , I will increament yours salarys "<<endl;
total_Salary += 8000 ;
co_helper_Salary += 2000;
cout <<total_Salary<<endl;
cout <<co_helper_Salary<<endl;
cout <<"Oh , we make agood effort that days"<<endl;
}
 /*************************************************************************************************/
 cout<<"\n============================\n";

int omnia[5] ; 
int ali ; 

for ( int R =0 ; R <5 ;R++)
{
cin>>ali;
omnia[R] = ali ;
}
cout<<"reverse that numbers"<<endl;

for ( int R =4 ; R>0 ;R-- )
{
omnia[R] *= 2  ; // good idea 

cout <<omnia[R]<<endl;


}
 cout<<"\n============================\n";

int even_obb [] = { 100 , 200 , 500 , -55 , -600 , -99 }; 
int csize = sizeof (even_obb) / sizeof(even_obb [ 0 ]);
int A7A = 0;
//while (true) that is error
for (int F= 0 ; F< csize ; F++ )

{
if ( even_obb[F] % 2 != 0 && even_obb[F] < 0 )
{
    A7A += even_obb[F] ;
    cout<<A7A<<endl; // the outpute i don't know 
}
}
cout<<"reverse that numbers"<<endl;
for (int F = 5 ; F > 0 ; F-- )

{
cout <<even_obb[F]<<endl;
}



return 0; 
}