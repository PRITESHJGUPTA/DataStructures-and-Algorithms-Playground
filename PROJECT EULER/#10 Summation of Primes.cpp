#include<iostream>
using namespace std;
int checkPrime(int num)
{
	if(num==2)
		return num;
	int i=2;
	while(num%i && i<num/2)
	{
		if(i==num-1)
			return num;
		i++;	
	}
	return 0;		
}
int main()
{
	int sum=0;
	for(int i=2;i<2000000;i++)
		sum+=checkPrime(i);
	cout<<sum;	
	return 0;	
}
