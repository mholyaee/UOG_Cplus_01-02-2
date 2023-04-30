#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		if(b>0)
		{
			cout<<a*b<<"\t"<<(a+b)*2;
		}
	}
	if(a<=0)
	cout<<"error in a";
	if(b<=0)
	cout<<"error in b";
	return 0;
}
