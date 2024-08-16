#include<iostream>
using namespace std;
int sum=0;
int sumsq(int num)
{
	if(num==1)
		return 1;	
	return 	num*num+sumsq(num-1);	
}
int sum1(int num)
{
	if(num==1)
		return 1;
	return num+sum1(num-1);	
}
int main()
{
	cout<<sum1(100)*sum1(100)-sumsq(100);
	return 0;
}
