
#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{

vector<int>num = { 10 , 20 , 30 , 60}; 
cout<<num.at(2)<<endl;
cout<<num[3]<<endl;
num.at(3) = 100 ; 
cout<<num[3]<<endl;

num.push_back(1000); 
num.push_back(500); 
num.push_back(133); 
cout<<num.size()<<endl; // number of elements

num.pop_back(); // automatic delete the last valuse 
cout<<num.size()<<endl;

cout<<num.max_size()<<endl;
num.push_back(200); 
num.push_back(300); 
num.push_back(50); 
num.push_back(5000); 
cout<<num.capacity()<<endl; // always capacity > size and give you more storage
cout<<num.size()<<endl;

cout<<num.front()<<endl;
cout<<num.at(0)<<endl;

cout<<num.back()<<endl;
cout<<num.at(num.size()- 1)<<endl; // mean last element

cout<<"\n=======\n";

if ( num.empty())
{
    cout<<"nnum is Empey"<<endl;
} 
else 
{
    cout<<"num is not Empty"<<endl;
}

//num.clear(); delete all elements 


for (int i = 0 ; i< num.size(); i++)
{
    cout<<num[i]<<endl;
}



    return 0;
}