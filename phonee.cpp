#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
ofstream output;
class phone                      //NAME NATNAEL.TESHOME,AWOKE  
{
		 
	public:
	 virtual void Display(string full_name ,int pin)
		{
			cout<<">>>>>>>>>The phone information is:>>>>>>>>"<<endl;
		cout<<"the phone  user  name is>>" <<full_name<<endl;
		 
		}
  void security(string brande)
  {
  	cout <<"your phone brande is:>>"<<brande<<endl;
  	 
  }
   void read();
   
};
class information: public phone
{
	public:
	  void Display()
		{
			cout<<"input your model :"<<endl ;
			cout<<"input your price :"; 
		}
 	void result(float price)
		{
			cout<<"your phone price is"<<price<<endl;
		}
		
};
 void read()
    {
    	string x;
    	int y[10];
    	ifstream myfile;
    	myfile.open("contact.txt");
    	myfile>>x;
    	cout<<x<<endl;
    	myfile>>y[10];
    	cout<<y[10]<<endl;
    	myfile.close();
    	
	}
		void add(){
	int g;
	 output.open("contact.txt");
	 int y;
	 
	  
	  cout <<"\t\thow many contact do you add: ";
         cin >> g;
	string  name[g];
	float phone_no[g];
	for(int i=0;i<g;i++)
	{
		cout<<"enter name :"<<i+1<<": ";
		cin>>name[i];
		cout<<"enter phone number :"<<i+1<<": ";
		cin >>phone_no[i];
	}
	float a=0;
    string b;
    for(int j=0;j<g;j++)
    {  
	 b=name[j];
    a=phone_no[j];
	 
    
output<<b<<"   "	<<a<<"   "	<<endl;
output<<"name --"<<"number---"<<endl;
}
	output.close();	
	
	sub:
	int x;
	cout<<"\tpress 1 To show contact \n";
    cout<<"\tpress 2 To exit \n";
    cin>>x;
       if(x==1)
       {
          read();
       }
       else{
        exit(EXIT_SUCCESS);

       }
   
    }
 
int main()
{
	void read();
	information inf;
	phone &reg =inf;
	string n;
	string d;
	int p;
	float r;
	cout << "\t>>>>>>>> Welcome  <<<<<<<<<<<\n";
	cout<< "enter phone user name ";
	cin>> n;
	cout<<"enter your phone price";
	cin>> r;
	cout<<"enter your  brande : ";
	cin>> d;
 
	 
	 reg.Display(n,p);
	 reg.security(d);
	void result(float r);
	int y;
	 cout<<"\t\t: What Do You Went add contact:\n\n";
	  cout<<"if you went press 1 else press 0 : ";
	  cin >>y;
	  if(y==1)
       {
         add();
       }
       else{
        exit(EXIT_SUCCESS);

       }
	

	 

}

