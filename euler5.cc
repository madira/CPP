#include<iostream>
using namespace std;

int main()
{
	int n=2520;
		int flag=1;
	for(int i=2520;flag==1;i++)
	{
		flag=0;
		for(int j=1;j<21;j++)
			{
				if(i%j==0)
					flag++;
				if (flag==20)
					cout<<i<<endl;
			}
		if(flag!=20)
			flag=1;
	}
	return 0;
}
