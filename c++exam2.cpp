#include<iostream>
using namespace std;

class employee{
	private :
		char name[100];
		char salary[100];
		char designation[100];
		private :
		
		void setdata()
		{
			cout<<"Enter employee name = "<<endl;
			cin>>name;
			cout<<"Enter employee salary = "<<endl;
			cin>>salary;
			cout<<"Enter employee designation = "<<endl;
			cin>>designation;
			
		}
		void getdata()
		{
			cout<<"employee name is = "<<name<<endl;
			cout<<"employee salary is = "<<salary<<endl;
cout<<"employee designation is = "<<designation<<endl;
			    
		}
	};
		main()
		{
			employee e1;
			e1.setdata();
			e1.getdata();
			
		}
