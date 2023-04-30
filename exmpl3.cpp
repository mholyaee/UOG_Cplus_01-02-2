#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a>0 && b>0)
	cout<<a*b<<(a+b)*2;
	if (b<=0 || a<=0)
	cout<<"error";
}
