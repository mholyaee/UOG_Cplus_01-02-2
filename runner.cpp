#include<iostream>
using namespace std;
int main()
{
	int d;
	cout<<"Enter time of running in second:";
	cin>>d;
	int h,temp;
	h=d/3600;
	temp=d%3600;
	int m=temp/60;
	int s=temp%60;
	cout<<"Hour:"<<h<<"\tminute:"<<m<<"\tsecond"<<s;
	
}
