#include<iostream>
using namespace std;
class calculator
{
	public:
		void add()
		{  int c,b;
		 
		  
		    
			cout<<"ADDITION!!"<<endl;
			cout<<"Enter a First Number:";
			cin>>b;
			cout<<"Enter a second Number:";
			cin>>c;
			int d = c+b;
			cout<< b<<"+"<<c<<"="<<d<<endl;
			
			
		}
		void sub()
		{   int b,c;
			cout<<"subtration!!"<<endl;
			cout<<"Enter a First Number:";
			cin>>b;
			cout<<"Enter a second Number:";
			cin>>c;
			int d =b-c;
		
		
			cout<< b<<"-"<<c<<"="<<d<<endl;
		
			
		 
		}
		void mul()
		{   int b,c;
			cout<<"multiplication!!"<<endl;
			cout<<"Enter a First Number:";
			cin>>b;
			cout<<"Enter a second Number:";
			cin>>c;
			int d = c*b;
			cout<< b<<"*"<<c<<"="<<d<<endl;
			
		}
		void div()
		{   float b,c;
			cout<<"Division!!"<<endl;
			cout<<"Enter a First Number:";
			cin>>b;
			cout<<"Enter a second Number:";
			cin>>c;
			if(c==0)
			{
				cout<<"Attempt To Divide By Zero!!"<<endl;
			}
			else{
			
			float d = b/c;
			cout<< b<<"/"<<c<<"="<<d<<endl;}
			
		}
	
};
int main()
{   calculator c;
	int a;
	
	cout<<"Welcome To Calculator!!"<<endl;
	while(true)
	{
	
	cout<<"Enter 1 for Addition";  cout<<"\t\t Enter 3 for Multiplication"<<endl;	
	cout<<"Enter 2 for Subtration";  cout<<"\t\t Enter 4 for Division"<<endl;

	cout<<"\t \t Enter 5 for Exit!!"<<endl;
	cin>>a;
	
	
		switch(a)
		{
			case 1:
				c.add();
				break;
			case 2:
				c.sub();
				break;
			case 3:
				c.mul();
				break;
			case 4:
				c.div();
				break;
			
		}
		if(a==5)
		{
			cout<<"SUCCESSFULLY EXITED!!";
			break;
		}
	}
	return 0;
	
}
