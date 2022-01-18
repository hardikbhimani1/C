#include<iostream>
using namespace std;
int main()
{
	char ch;
	for(ch=1; ch<=26; ch++)
	{
		if(ch%4==0)
		{
			cout<<"\n"<<ch+64;
		}
		else
		{
			cout<<" "<<ch+64;
		}
	}
	
}
