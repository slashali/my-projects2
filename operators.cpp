#include <iostream>
using namespace std ;
/*
Operators & Operands
1-- Arithmatical Operatoin

{%}
*/
 int main ()
 {

cout<< 20 + 10  <<endl;
cout<< 20 - 10  <<endl;
 cout << 20 - -10<<endl; // - * -
cout<< 20 / 10  <<endl;
cout<< 20 * 10  <<endl;
cout<<"\n ==========================================\n";
cout<<  20. + 10 <<endl;
cout<< 20. + 10.  <<endl;
cout<< sizeof  (20.5f + 10 )<<endl; // 4Byte
cout << sizeof( 20.5 + 10.5) << endl; // 8 Byte
cout<< sizeof( int ( 20.5 + 10.5 ))  <<endl; //4 Byte
cout << sizeof( 20.f + 10.f) << endl; // 4 Byte
cout<<   " \n====================================\n" ;
cout<< 20 % 10  <<endl; //==> 0 -- Muodlias الباقي *******
cout << 0 % 10 << endl ; // ==>4 الباقي هيكون
cout<< 26 / 10<< endl; // ==> I don't know why .....
cout<< 26 % 10<< endl; // ==> // ==>6 الباقي هيكون
cout<< 21.5 /  10<<endl;
 //cout << 21.5 % 10  <<endl; // error ==> deals with intagers only ***
cout<<"\n=========================================================\n";

int b = 20;
b = b + 30;

 b += 30 ; // second way
cout<< b   <<endl; // first way

cout<<"\n=========================================================\n";
 int H = 300 ;
 H = H - 30 ;

H -= 30;
cout<< H <<endl;
cout<<"\n=========================================================\n";
int Y = 66 ;
Y = 66 / 33 ;

Y /= 33 ;
cout<< Y <<endl;
cout<<"\n=========================================================\n";
  int R = 99 ;
  R = 99 % 10 ; // ==> 0

  R %= 10 ;
cout<< R <<endl;
cout<<"\n=========================================================\n";

/* Increment Operators ** Decrement operators**********************/
// pre - post increment*** الزيادة قبل و بعد
// pre - post decrement *****  النقصان قبل و بعد

int views =0;
cout<< views++   <<endl; // process is post increment = print views , print increment ==> 0
cout << views <<endl;// ==> 1

cout<<"\n=========================================================\n";
int members = 3;
cout<< ++members   <<endl; // pre increment الزيادة اولا ثم يطبع
cout<< members   <<endl;

cout<<"\n=========================================================\n";
int Followers = 3000;
cout<< -- Followers  <<endl;
cout<<  Followers  <<endl;
cout<<"\n=========================================================\n";

cout<< Followers --  <<endl; // print Followers then post decrement meaning decrese Followers
cout<<  Followers  <<endl;

/*      comparison Operators *********************************************/
/*
            ==ecual //note**  = assinment value
            !=not ecual
            >
            <
            >=
            <=
*/
cout<<"\n=========================================================\n";
 cout<< ( 100 == 300)   <<endl; //reading from left 100 is first
 cout<< (100 != 300)   <<endl; // (!) ==> not ****// ==> 0= false
 cout<< (100 > 300)   <<endl;
 cout<< (100 < 300)   <<endl;// ==>  1 = true
 cout<<( 56 <= 66)  <<endl;
 cout<< (56 >= 66 ) <<endl;

//****Logical Operators***************************************
/*  && ==> and
   ||==> Or
   !==> Not
*/
cout<<"\n=========================================================\n";

 int Slash = 19;
 int Slash2 = 20;
 int X ;
 cin >> X;
    cout<< ( Slash > Slash2 )    <<endl; // false = 0
 cout<< (  Slash >= 10&&  Slash2 == 800 && Slash == 19 ||  Slash + Slash2 == X )<<endl; // true = 1

  cout<< ( X * Slash == 800 && Slash2 / 10 != 3 || Slash + Slash2 - X == 0 || X * X == 200 ) <<endl;// true = 1
 cout<< ( Slash != 19 || Slash2 ==80   )   <<endl;
 cout<<  ! ( Slash <= Slash2 )   <<endl;
 cout<< ! ( Slash == Slash2 )   <<endl;
 cout<< ( Slash!= Slash2 )   <<endl;

cout<<"\n=========================================================\n";

/*
Operators presedence ==> priorty of ( {/}{*}{-}{+}   processes )

 Search
 ---bitwise Operators ==> aware of Binary ******
 ---spaceship Operators
*/

   cout << 10 + 20 <<endl;
   cout << 20 * 3 / 5 + 2 - 8 / 4 <<endl;
   cout << (20*6) + 60 / 360 <<endl;
   cout << 30* 6 + 16 - 3 <<endl;

cout<<"\n=========================================================\n";
/*****************
Control Flow
---- if conditoin ==> Introduction *****
*******************/
int student  ;
cin >> student ;
if (  student < 12 )
{
   cout <<  " welcome to ElNagah School " <<endl;// in this case by student age =8 ==> print this massage
  cout <<  "  you must pay off the Cost = 2200  " <<endl;
    cout <<  "  See you later  " <<endl;
 }
if ( student > 12 )
{
cout <<" welcome to ElNagah School "<<endl;// in this case by student age = 18 ==> print this massage
cout <<" you must pay off the Cost = 4000 "<<endl;
    cout <<  "  See you later  " <<endl;

}

/*************
Complete ---
If conditoin
    ---  else
    --- else if
****************/
int age ;
cin >> age ;
int points = 666 ;
int rewards = 50000;
if ( age > 18  )

{
   cout<< rewards << " congratulation" ;

} else if (  points < 666  ){cout<< "you are loser "<<endl;}

else if ( age < 18  )
{cout<<  rewards << " oh! my god , you are so excelent"<<endl; }
/*
If condition (in If  codition  )
*/
int age2 = 20 ;
int Rank = 1000 ;

if ( age2 > 20 || Rank == 1000 )
{ cout<<  " accepted , welcom to the compitision"<<endl;
cout<<"   I'am really sorry"<<endl;

}
cout<<"\n==============================\n";


int age3 = 30;
int eng= 5;
int points2 =2000;
int Rank2 = 1;
auto a =19;

if ( age3 < 30)
{ cout<<" you are VIp"<<endl;}
 if ( a < 20 )
{
    cout<<" sorry for you"<<endl;
   //  else if ( eng> 4)   { cout<<" hi , come out now"<<endl;}
//erorr==> because else if written out { if condition }
 if ( eng> 4)   { cout<<" hi , come out now"<<endl;} //true
    }

  /*
  note==>>> else && else if must write out side { if }
  but==>> write if in { if condition} >> true *********importat*******
  */


if ( points2 >1000 || Rank2 == 1  && age < 30  )
{
    cout<< "welcome , you will part in the comptition Last time   "<<endl;
}
/* ***************************
control flow
---ternary Opperators
******************/
// if condition ==> abbrivatoin
/*
syntax
   ( If condition Is true)? true : false ;*******abbreviation
*/

/*int goals = 200;
if( goals < 100)
{ cout <<" you are an  good player"<<endl; }
else
{cout<< " hello ,  at club up 50 "<<endl;}
else  if ( goals > 200 )// else if you must give a condition
{ cout <<" you are an legand player"<<endl; }


/**********************************************/

int goals = 500;
int championships = 19 ;
if( goals < 100)
{ cout <<" you are an  good player"<<endl; } //false

else // if a first condiion false --- prient else condition
{
    cout<< " hello  "<<endl;
}
 if (championships < 20 || goals == 300 ) {cout<< " congratulation"<<endl;}// condition  ==> false
else // true
{cout<<" A7a " <<endl;}

// to make it easier***************

 cout<< ( goals < 100 ? " you are an  good player" :   " hello ,  at club up 50 ")   <<endl;

string MSg = goals < 100 ? " you are an  good player" :   " hello ,  at club up 50 ";

cout<<  MSg  <<endl;

cout <<( championships <= 20 || goals == 500 ?"congratulation" :" A7a ")<<endl; // important *****

string pannar = championships <=20 || goals == 500 ?"congratulation" :" A7a "; // impotant********
cout<<  pannar<<endl;


/***************************************
(control flow )
 ** traning Apps **
----Even زوجي /  odd checker فردي
----find greatest number
----User Rank checkrer
----simple Calculator
*******************************************/
int num_2 ;
cin >> num_2;
if(num_2 % 2 == 0) // make sure the condition** // ===> 0 = num is { Even  }
cout<< "the num is Even"<<endl;
else // you can delete {     } ***
 cout<< " the num is Odd "<<endl; // ===> another number than{ 0 }

cout<<"\n=======================================================\n";

/**********************************************************************/

int z , y , x ;
cin >> z >> y ; // note remmember that **
x = 20 ;
x += 10 ;
z -= 5 ;
y *= 2 ;
cout<<( z + y )<<endl;
if ( x - y == z || (y * z ) > 41 && ! ( x + z  ) == 0  && z >= y && y * z * x > 40 || y / z == 1 && x / (y + z)/*false*/   )
cout<<  " this is good , all Right"<<endl;
else
cout<< " there is error "<<endl;

cout<<"\n=======================================================\n";
int Points ;
cin >>Points ;
if (Points > 0    && Points < 500 && Points <=1000    )
{cout <<"Not Bad"<<endl;
cout <<"Not Bad Is : Points < 500   "<<endl; }
else  // else not work if you make not {  ***  }
{cout <<"fuck you Is : Points <= 1000 "<<endl; }

cout<<"\n=======================================================\n";



/*  very very very very very  important**********************************************/
cout<<"\n=======================================================\n";

int num_one , num_Two , Op ;

cout<< "Type number _one   "<<endl;
cin>> num_one ;

cout<< " Type number_ Two"       <<endl;
cin >> num_Two ;


cin >> Op ;
cout<<"[ 1 ] ==> ( + ) "  <<endl;
cout<<"[ 2 ] ==> ( - ) "<<endl;
cout<<"[ 3 ] ==> ( * ) "<<endl;
cout<<"[ 4 ] ==> ( / ) "<<endl;
cout<<"[ 5 ] ==> ( % ) "<<endl;

if ( Op ==1)
{
cout<< num_one +  num_Two  <<endl;
}

else if ( Op== 2 )
{
cout<< num_one -  num_Two<<endl;
}

else if(Op == 3  )
{
   cout <<  num_one *  num_Two <<endl;
}

else if(Op == 4  )
{
   cout <<  num_one /  num_Two <<endl;
}
else if(Op == 5  )
{
   cout <<  num_one %  num_Two <<endl;
}

else

cout<< " Please , determine the Operation"<<endl;

cout<<"\n =====================================================\n" ;
/***************************************************************/
/**********************************************************************
control flow

----- Switch ==> look like if condition**********************
**********************************************************************/

int The_presdent ;
cin>>The_presdent ;
if ( The_presdent == 1 ){ cout <<" عبدالفتاح المكسيكي"<<endl;}
else if (The_presdent == 2){ cout <<" yaMaMa "<< endl;}
   else if( The_presdent == 3) { cout << " Hazem omer  "<<endl;}
   else if( The_presdent == 4) { cout << " Fareid Zahran  "<<endl;}
   else {  cout<< " Fuck you man , are you serious"<<endl;}
cout<<"\n =====================================================\n" ;

int Pre_num_members ;
cout <<" Type the number of member" <<endl ;
cin>>Pre_num_members;

switch (Pre_num_members  )
{

case 39: cout<<" عبدالفتاح المكسيكي اللي هيودينا ف داهيه , is win     "<<endl;
break;
case 20 : cout<< " Ymama is loser      "  <<endl;
break;
case 31 : cout << " Hazem is a big loser    "<< endl;
break;
case 10 : cout << " faried , A7A wht fu*k  "  <<endl;
break;
//{break ;} // ==> if you make it in the last ,, the operation will print all cases ,, so , you must write ( break after cout to seprate one operatoin )***
}


return 0;

 }
