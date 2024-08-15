#include<iostream>
using namespace std;
int main()
{
	for(int i=21;i<2147483647;i++)
	{
		for(int j=2;j<21 && !(i%j) ;j++)
			if(j==20)
			{
				cout<<i;
				goto label;
			}
	}
	label:
	return 0;
}
