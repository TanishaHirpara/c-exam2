#include<iostream>
using namespace std;

class rectangle{
	public :
		int l,w;
	  rectangle()
		{
			cout<<"Enter length= ";
			cin>>l;
			cout<<"Enter width = ";
			cin>>w;
		}

	int rarea;
	area()
	{
		rarea = l * w;
		cout<<"area of rectangle is = "<<rarea<<endl;
	}
		
};

main()
{
	rectangle r1;
	r1.area();
	
	
	
}


		

