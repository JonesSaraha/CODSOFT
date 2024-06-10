#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{ int a;
 string b;
cout<<"Welcome To Gusse The Number!!"<<endl;
while(true)
{
cout<<"Enter Your Number (or type end to exit):"<<endl;	
cin>>b;
if(b=="end")
{
	cout<<"Successfully Exited"<<endl;
	return 0;
}
else{
	a=stoi(b);
 
srand(time(0));
int random= rand()% 100;
if(random==a)
{
	cout<<"Yeah your guess is rigth!!"<<endl;
}
else if(random>a)
{cout<<"Your Guess is Wrong !!"<<endl;
cout<<"The Number is: "<<random<<endl;
	cout<<"The Number is greater than your Guess "<<endl;
	cout<<"Try Again !!"<<endl;
}
else if(random<a)
{cout<<"Your Guess is Wrong !!"<<endl;
cout<<"The Number is: "<<random<<endl;
	cout<<"The Number is lesser than your guess "<<endl;
	cout<<"Try Again!!"<<endl;
}
else{
	cout<<"Thank you";} } }



}



