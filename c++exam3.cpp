#include<iostream>
using namespace std;

class shape{
	public :
		int l, b, r;
		int area;
		char colour[100];
		
		
		shape()
		{
			cout<<"Enter length = ";
			cin>>l;
			cout<<"Enter breadth = ";
			cin>>b;
			cout<<"Enter radius = ";
			cin>>r;
			cout<<"Enter colour = ";
			cin>>colour;
			
		}
};
class rectangle : public shape{
	public :
		int rarea;
	area()
	{
		rarea = l * b;
		cout<<"area of rectangle is = "<<rarea<<endl;
		
	}
		
};
class circle : public shape{
	public :
		int carea;
	area()
	{
	   carea = 3.14 * r * r;
		cout<<"area of circle is = "<<carea<<endl;
	}
		
};
main()
{
	rectangle r1;
	r1.area();
	circle c1;
	c1.area();
	
}


