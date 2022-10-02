// virtual funtion
#include<iostream>
using namespace std;
class A 
{

public:
virtual	void show()
{
	cout<<" I am class A "<<endl;
}
};
class B : public A
{

public:
void show()
{
	cout<<"I am class B"<<endl;
	}	
};
int main()
{
	A*p;
	A a1;
	B b1;
	p=&a1;
	p->show();
	p= &b1;
	p->show();
	
	return 0;
}
