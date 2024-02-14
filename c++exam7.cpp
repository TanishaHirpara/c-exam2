#include<iostream>
using namespace std;

class animal{
	public :
		
		virtual sound()
		{
			
		}
		
		move()
		{
			
		}
};
class dog : public animal{
	public :
		virtual sound()
		{
			cout<<"sound of dog is xyze "<<endl;
		}
		move()
		{
			cout<<"movement of dog is 4788 \n "<<endl;
			
		}
};
class bird : public animal{
	public :
		virtual sound()
		{
			cout<<"sound of bird is efge \n "<<endl;
			
		}
		move()
		{
			cout<<"movement of bird is 4578  "<<endl;
			
		}
};
main()
{
	int i,n;
	cout<<"enter value of n = "<<endl;
	cin>>n;
	animal e[i];
	dog d1;
	bird b1;
	
	for(i=0;i<n;i++)
	{
		d1.sound();
		b1.sound();
	
	}
	for(i=0;i<n;i++)
	{
		d1.move();
		b1.move();
	
	}
	
	
}

