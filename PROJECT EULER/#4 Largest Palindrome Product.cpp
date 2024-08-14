#include<iostream>
using namespace std;
int check_pal(int num)
{
	int sum=0,i=0,temp=num;
	while(num)
	{
		i=num%10;
		sum=sum*10+i;
		num/=10;
	}
	if(temp==sum)
		return 1;
	return 0;	
}
int main()
{
	long long prod=100;
	for(int i=100;i<1000;i++)
		for(int j=100;j<1000;j++)
			if(check_pal(i*j) && i*j>prod)
				prod=i*j;
	cout<<prod;
	return 0;		
}
