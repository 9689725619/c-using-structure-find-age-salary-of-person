#include<iostream>
using namespace std;
struct person{
	int age;
	float salary;
	void set(int a,double s)
	{
		age=a;
		salary=s;
	}
	void show(){
		cout<<"\n age="<<age;
		cout<<"\n salary="<<salary;
	}
};
     int main(){
     	person p;
     	p.set(24,20000.0);
     	p.show();
     	return 0;
	 }
