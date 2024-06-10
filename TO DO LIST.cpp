#include <iostream>
#include <vector>
#include <string>
using namespace std;

class List
{
public:
    vector<string> store;
    vector<string> com;
    vector<string>pend;
    string a;
    string d;
    string e;
    string g;
    string h;
void task(int b)
{    
	cout<<"Enter Your Tasks!!(Type save To Save)"<<endl;
	for(int i=1;i<10000;i++)
	{   cout<<i<<".";cin>>a;
		if(a=="Save"||a=="save")
		{
			cout<<"Your Tasks Have Been Saved"<<endl;
			break;
		}
		store.push_back(a);
	}
}
void add( int b)
{   
 
	 cout<<"Add The Task Here!!(Type save To Save)"<<endl;
	 while(true)
	 {
	 
	cout<<"*";cin>>d;
	if(d=="Save"||d=="save")
		{
			cout<<"Your Tasks Have Been Saved"<<endl;
			break;
			
		}
	store.push_back(d);
	
}  }
void  view(int b)
{
	cout<<"View your Tasks!!"<<endl;
	if(com.empty())
	{
		cout<<"No Tasks Have Been Enter!"<<endl;
	}
	else{
	cout<<"Completed Tasks"<<endl;
	 for(int i=0;i<com.size();i++)          
                                  	                 
	{cout<<i+1<<".";cout<<com[i]<<endl;
	
	}
	
		
            
} }
void pen(int b)
{   if(pend.empty())
	{
		cout<<"No Tasks Have Been Enter!"<<endl;
	}
	else{cout<<"Pending Tasks"<<endl;
for(int i=0;i<pend.size();i++){
	
	cout<<"\t\t"<<i+1<<"."; cout<<pend[i]<<endl;}
	
} } 
											
	
	

void remove(int b)
{
	cout<<"Remove the task here!!"<<endl;
	cout<<"Enter the task u want to remove!"<<endl;
	cin>>e;
	bool foun=false;
	for(int k=0;k<store.size();k++)
	{
	if(e==store[k])
	{   store.erase(store.begin()+k) ; cout<<"The Task has been deleted"<<endl; foun=true;
    }
}
	if(!foun){
		cout<<"Task is not found!"<<endl;
		
	} 
		
	
	}
	void complete(int b)
	{  
	
		cout<<"Enter Your Completed Tasks!!(Type save To Save)"<<endl;
		while(true){
		cout<<"*";
		cin>>g;if(g=="save"||g=="Save")
		{
			break;
		}
		com.push_back(g);}
		
	}
	void pending(int b)
	{  
 		cout<<"Enter Your Pending Tasks!!(Type save To Save)"<<endl;
		while(true){
		cout<<"*";
		cin>>h;if(h=="save"||h=="Save")
		{
			break;
		}
		pend.push_back(h);}
		
	} 
	void views(int b)
	{
		cout<<"Your Tasks Are...."<<endl;
		if(store.empty())
		{
			cout<<"No Task is Enter!!"<<endl;
		}
		else{
		
		for(int i=0;i<store.size();i++)
	    {   
		cout<<i+1<<".";cout<<store[i]<<endl;
     	} }
	}



   
};

int main()
{    List c;
    int b;
    cout << "WELCOME TO TO DO LIST " << endl;
    while (true)
    {
        cout << "Choose the option" << endl;
		
        cout << "\t1.ENTER YOUR TASK" ;cout<<"\t\t\t 5.Enter Your Pending Tasks"<<endl;
      
        cout << "\t2.TO ADD TASKS" ;cout << "\t\t\t\t 6.TO VIEW THE Your Completed  Tasks " << endl;
        cout<<"\t3.To View Your Task"; cout<<"\t\t\t 7.To view pending Tasks"<<endl;
        cout<<"\t4.Enter Your Completed Tasks";cout <<"\t\t 8.TO REMOVE TASKS" << endl;
        cout<<"\t\t\t\t 9.Press 9 To Exit!!"<<endl;
		cout << " Enter your option:";
        cin >> b;
      if(b>10 )
      {
      	cout<<"Enter a Wrong Option!"<<endl;
	  }
	
	  else{
	  
        if (b==1)
        {
             c.task( b);}
        if (b==2)
        {
        	c.add(b);
		}
		if(b==3)
		{
			c.views(b);
		}
		if(b==4)
		{
			c.complete(b);
		
		}
		if(b==5)
		{
			c.pending(b);
		}
		if(b==6)
		{
			c.view(b);
		}
		if(b==7)
		{
			c.pen(b);
		}
		if(b==8)
		{
			c.remove(b);
		}
        
             
            if (b == 9)
            {
                cout << "YOU SUCCESSFULLY EXITED";
                break;
            }
        } }
       
        
    
    return 0;}
