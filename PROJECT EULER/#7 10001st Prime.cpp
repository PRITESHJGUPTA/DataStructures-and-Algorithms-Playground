#include<iostream>
using namespace std;
int check_prime(int num)
{
	int flag=0;
	for(int i=2;i<=num/2 && num%i ;i++)
		if(i==num/2)
			flag=1;
	return flag;
}
int main()
{
	int n=2,count=0;
	while(n)
	{	
		if(check_prime(n))
			count++;
		if(count==9999)
		{
			cout<<n;
			break;
		}	
		n++;	
	}
	return 0;
}
