#include<iostream>
using namespace std;

class calculator{
	public :
		int a,b;
		
		void setdata()
	{
	
	cout<<"Enter value of a = ";
	cin>>a;
	cout<<"Enter value of b = ";
	cin>>b;
	char str[] = "it cannot divide by zero ";
    }
    
	void division()
	{
		char str[] = "it cannot divide by zero ";

	try{
		if(b>0)
		{
			cout<<"division a/b = "<<a/b<<endl;
			
		}
		else
		{
			throw 8;
		}
	}
	catch(...)
	{
		cout<<str<<endl;
	}
}
		
};

main()
{
	calculator c1;
	
	c1.setdata();
	c1.division();
	
}
