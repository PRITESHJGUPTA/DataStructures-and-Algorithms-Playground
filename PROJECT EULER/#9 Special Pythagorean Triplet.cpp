#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<500;i++)
		for(int j=1;j<500;j++)
			for(int k=1;k<500;k++)
				if(i<j<k && i*i+j*j==k*k && i+j+k==1000)
				{
					cout<<i*j*k;
					goto label;
				}
	label:	
	return 0;			
		
}
