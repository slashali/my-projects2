#include<iostream>
#include<array>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{ 
vector<int> ali = { -6, 5 , 58 , 56 , 6 , -8  , 5,  5 , 5 , 5} ; 
vector<int>::iterator first = ali.begin() ;
vector<int>::iterator last = ali.end() - 1 ;

cout<<*first<<endl;
cout<<&first<<endl;
cout<<first[2]<<endl;
cout<<*(first +1 )<<endl;
cout<<*(ali.begin() )<<endl;
cout<<*(ali.begin() +2 )<<endl;
cout<<*(ali.begin() +2 )<<endl;
first[4] = 100 ; // update
*(first +3 ) = 50000 ; // update
cout<< *(first +4 )<<endl;
cout<< *(first +3 )<<endl;

cout<<"\n=======\n";
for ( int G : ali )
{
    cout<<G<<endl;
}
cout<<"\n=======\n";
advance ( first , 3);
cout<<*first<<endl;// 50000

advance(last , -5);
cout<<*last<<endl; // 100

cout<<"\n=======\n";

ali.erase( ali.begin() , ali.begin() +1 ); // delete  first one value  
cout<<*ali.begin()<<endl; // don't forget the * // 58

 for (first =ali.begin() ; first < ali.end() ; first++  )
{
        cout<<*first<<endl;
}

int countali = count( ali.begin() , ali.end() , 5);

cout<<"rebeated for "<<countali<<"times  "<<endl;
cout<<"\n=======\n";

sort( ali.begin () , ali.end());
for ( int sort : ali )
{
    cout<<sort<<endl;
}cout<<"\n=======\n";

reverse( ali.begin () , ali.end());
for ( int reverse : ali )
{
    cout<<reverse<<endl;
}

cout<<"\n==========>>>>>>>>>>>>>>>>>>>>>>>>>\n";
int value [] = { 100 , 200, 300, 400}; 
int *Pointer = &value[0] ;

        cout<<*Pointer<<endl;
        cout<<Pointer[3]<<endl;
        cout<<Pointer[1]<<endl;
Pointer ++; 
        cout<<*Pointer / 5<<endl;// you can do  some operation 
        cout<<Pointer<<endl;
        cout<<*Pointer + 50<<endl;
        cout<<*(Pointer +2 )<<endl;
//cout<<*(value.begin() + 2 )<<endl;// its iterator not pointer >>> error 
//cout<<&(value.begin() + 2 )<<endl;// its iterator not pointer >>> error 
Pointer += 2 ;
cout<<*Pointer  * 3<< endl;
        cout<<*value + 50<<endl;
        cout<<*(value + 2)<<endl;
        cout<<&value + 2<<endl;
        cout<<&value + 1<<endl;

cout<<"\n==================\n";
*(Pointer + 2 ) = 2000 ; 
for( int get :value  )
{
    cout<<get <<endl;
}
cout<<"\n==================\n";

int *ahmed ; 
int *mohamed = NULL ; 
int *omnia  = nullptr ; 
cout <<ahmed<<endl; //garbage number  be careuful i don't write the * 
cout <<omnia<<endl; //garbage number
cout <<mohamed<<endl; //garbage number
// if you write cout <<*mohamed<<endl; will terminat and stop  the outpute

cout<<"\n==================\n";
 string messi[] = { "ali" , "mohammed",  "ahmed" , "he" , "she"};
void *PTR = &messi ; 

cout<< *(string *) (PTR)<<endl;/* equal */ cout<< *(static_cast <string *> (PTR))<<endl;




    return 0; 
}
