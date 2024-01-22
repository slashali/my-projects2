/*
itrators 
    --What's itrators;
    ---Itrators Used to point to memory Address of the containe
    
    why we use Iterators
        1- simplfy the code ==> No need to see the full iteratoin on containers 
        2- support For many alghorhtms like sorting And finding
        3- Allow the dealing with one element without the need to laod the full list
        4 - work the same way with all containers
        -5 It reduce complexity and executoin time the App

Syntax 
---- container <Type> :: iterator ItrattorName

    --Initialize 
    -----with vecotr Syntax 
    ---with Aotu keyword
Print 
--{*} derefereance ==> don't print the iterator Print what Its point to not the iterator mine

Notes 
--this is Not pointer , will talk about it in the future*-**-*-***-

seach for 
--Itrators Type 
--c++ containers

other toosls of iterators ==> {erase , advance , different for() Loop  , sort , reverse , count }



*/
#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

int main()
{

vector<int>num = { 10 , 20 , 30 , 40 , 50}; 
vector<int>::iterator it = num.begin();  // its importan step , because you will use it at next steps
//auto ite = &num.begin() +1 ; // error ==> that is not pointer
auto ite = num.begin() +1 ;
auto itee = num.begin() +2 ;
//cout<<"first iterator is ==> "<< it <<endl;// that is error 
// I print{ person refere to thing so ==> i want the thing not the person} >> you must write(*)
        cout<<"second iterator is ==> "<< *it<<endl;// value 
        cout<<"second iterator is ==> "<< *ite <<endl;// value 
        cout<<"third iterator is ==> "<< *(itee +2 ) <<endl;//  50
        cout<<"third iterator is ==> "<< *num.begin() + 2 <<endl;// = 12 //Note==> differnet result *-**-
        cout<<"third iterator is ==> "<< *(num.begin() + 3) <<endl;// = 40 
        cout<<"third iterator is ==> "<< * it + 3  <<endl;
        cout<<"\n===================\n";

    // num.erase( num.begin() , (num.end()  +2) ); // 10 // Note : won't de;ete anything  and will start by 10 ; 
    num.erase( num.begin() , (num.begin()  +2) ); // 10 // Note : it don't erase the last you want 
//you want erase num.begin() + 2 ==> so will delete { 10 , 20} only and not delete 30 
// ( first , what is you want ot delete)===>  num.erase (num.begin() , delete the >>() num.begin() +2 ) ==> will delete 10 and 20 so the begin is 30 
        cout<<*num.begin() <<endl; //30

        cout<<"\n===================\n";
/*vector<double>ali // Note::::>>vector deal with intager only*/ 
vector<int> nums = {50 , 80 , 30 , 40 }; 
vector<int> ::iterator first = nums.begin(); // from ==> 10
vector<int> ::iterator last = nums.end(); // from ==> 10
//vector<int> ::iterator last = nums.end() ; // won't start from ==> 40 , will start by unknow number 

        cout<< *(last ) <<endl;// don't out anything 
        cout<< *(last - 1 ) <<endl;// 40
        cout<<"the first num Is ==> "<< *first<<endl;
        cout<<"the first num Is ==> "<< first[1] <<endl;// don't write before first[] --> {*}
        cout<<"the first num Is ==> "<< first[2] <<endl;
        cout<< "\n\n ================= \n ";
        //cout<<"the first num Is ==> "<< *(first - 1 ) <<endl; // will print >>>>>515151515 <<<<< the  different number *-**-*-* // that's error
        //cout<<"the first num Is ==> "<< *(nums.begin() -1 ) <<endl; // will print >>>>>1165165165 <<<<< the  different number *-**-*-* // that's error
        cout<<"the first num Is ==> "<< *(nums.begin() +1 ) <<endl; // 80
        cout<<"the last num Is ==> "<< *(last - 2)<<endl;//80
        cout<<"the last num Is ==> "<< *last - 2<<endl;//151846816810 unknown number 
        cout<<"advance  >>>   \n=========\n";
advance( first , 3); // forward //40 ==> // advance (  begin , go to the index 3)
    cout<<"the first num Is ==> "<< *first<<endl;

advance( last , -2); // 80
    cout<<"the last num Is ==> "<< *last<<endl;
/*
advance( first  , -3 ); //that's not the own track , I can't back to index [-1] not there in track *-*-*-  // will print >>>>>1165165165 <<<<< the  different number *-**-*-* // that's error
cout<<"the first num Is ==> "<< *first<<endl;

advance( last  , 1 ); ////that's not the own track , I can't foeward to index [5] not there in track  //// will print >>>>>1165165165 <<<<< the  different number *-**-*-* // that's error
cout<<"the first num Is ==> "<< *first<<endl;
*/
/********************************************************************************************************/
advance( first ,0); // i don't understand*-*-*- // = 40
        cout<<"the first num Is ==> "<< *first<<endl;
advance( last ,1);  // 30 // i don't understand 
    cout<<"the last num Is ==> "<< *last<<endl; 
advance( last ,0); // don't go forward // 30
    cout<<"the last num Is ==> "<< *last<<endl; // 
/************************************************************************************************************/
/************************************************************************************************************/
/************************************************************************************************************/

cout<<" Loop >>>>>>\n=========\n";
/*
    --vecotr 
            -Iterator 
            --Loop with Iterator
            ---Ranged loop with for***
*/

vector <int >number ={10 , 20 , 30 , 40};
vector <int >:: iterator IT;

for (IT = number.begin() ; IT < number.end(); IT++) // the traditional loop

{
    cout<<*IT<<endl; // note the (*)
    IT++ ; // skip 20 then outpute = 30  , then skip 40  
}
cout<<"\n=========\n";

vector<int> nuMs = { 10 , 200 , 500 , 300 , 800} ;
vector<int> ::iterator ali = nuMs.begin() ; 

for  (int atef : nuMs )
{
    cout<<atef<<endl;// with Ranged loop with for*** , i don't write (*)
}

cout<<"\n=========\n";
for (ali =( nuMs.end()-1) ; ali >= nuMs.begin() ; ali -- )

{
    cout<<*ali<<endl;
}
cout<<"\n=========\n";

//Ranged loop with for***
vector<int> numbers = { 10 , 600 , 500 , 1000 , 85} ;

for ( int own : numbers ) 
{
    cout<<own<<endl;// with Ranged loop with for*** , i don't write (*)
}

cout<<"\n=========\n";
/************************************************************************************************************/
/************************************************************************************************************/
/************************************************************************************************************/
/*
#include<algorithm> call header file 

vector 
-use iterator to : 
--sort
--Count 
--reverse
*/
vector<int> unknown = { 10 , 20 , 20 , 30 , 60 , -80 , 05 , -20};
//vecotr<int>::iterator ahmed = unknown.begin(); ==> we don't need it  , i won't use it


int countunknown = count(unknown.begin() , unknown.end() , 20); // count() from header <algorithm> 
cout<<"the number is rebeated for==> "<< countunknown<< " times"<<endl;

cout<<"trying>>>>>>>>>>>>>>>>>>\n================\n";
/****************************************-----***********************/
// trying
vector<int> CS = { 100 , 200 , -300 ,500 , -600 ,200 , 200,  200 , 500 , 600 };
vector<string> rate = { "junior" , "midsinior" , "sinior" ,"over qualified" , "--under qualifided" };
/*vector<int>::iterator first = CS.begin() ; //we don't need it
*/

for ( int numss : CS  )
{
    cout<< numss<<endl;
}
cout<<"\n================\n";
        sort(CS.begin() , CS.end() ); // arrange ==> -numbers first , +numbers second

for ( int numss2 : CS   )
{
    cout<<numss2 <<endl;
}

cout<<"reverse>>>>>>>>\n================\n";
reverse(CS.end() ,CS.begin() );
//reverse(CS.begin() ,CS.end() ); == reverse(CS.end() ,CS.begin() );

for ( int numss3 : CS  )
{
    cout<< numss3<<endl;
}
cout<<"\n================\n";

int find = 200; // you can skip this step and write 200 ; 
/*
int countunknown = count(unknown.begin() , unknown.end() , 20); 
cout<<"the number is rebeated for==> "<< countunknown<< " times"<<endl; 
*/
int countnums = count(CS.begin() ,CS.end(),find  ); // how many this number rebeated in vector

    cout <<" the number you search : " <<find <<" rebeated for " <<countnums<< " times"<<endl;

    cout<<"\n================\n";

/*for(string range : rate )
{
    cout<<range<<endl;
}*/
vector<string>::iterator second = rate.begin() ;
for ( second = rate.begin() ; second< rate.end() ; second++)
{
    cout<<*second <<endl;
}


cout<<"\n================\n";

        sort ( rate.begin(), rate.end() );
for(string range2 : rate )
{
    cout<<range2<<endl;
}
cout<<"\n================\n";

//         reverse( rate.begin() , rate.end());

// for(string range3 : rate )
// {
//     cout<<range3<<endl;
// }
cout<<"\n================\n";


sort( rate.rbegin() , rate.rend()); // to reverse the rate vector by SLash engineer 

for(string Range2 : rate )
{
    cout<<Range2<<endl;
}








    return 0; 
}