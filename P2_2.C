//C program to check whether a person is eligible for voting or not
#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Enter your age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"Eligible for voting"<<endl;
	}
	else
	{
		cout<<"Eligible for not voting"<<endl;
	}
	
}