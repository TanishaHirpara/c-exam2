#include<iostream>
using namespace std;

class employee{
	public : 
	int x ,y;
	void set(int x, int y)
	{
		this->x=x;
		this->y=y;
		
	}
	void get()
	{
		cout<<"salary of employee one  = "<<x<<"\t salary of employee two = "<<y<<endl;
	}
	employee operator+(employee sum)
	{
		employee ans;
		ans.x = this->x + sum.x;
		ans.y = this->y + sum.y;
		return ans;
	}
	
	
};
main()
{
    employee s1,s2,s3;
	s1.set(4000 , 5000);
	s1.get();
	s2.set(7000 , 8000);
	s2.get();
	s3 = s1 + s2;
	s3.get();
	
	
}

