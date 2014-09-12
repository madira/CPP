#include<iostream>
using namespace std;
int main()
{
	long long unsigned int n=2,i=2,k=600;
	//851475144;
	long long unsigned int a[k];
	a[0]=0;
	a[1]=0;
	while(i<k)
	{
		a[i]=i;
		i++;
	}
	i=2;
	n=2;
	while(n<k)
	{
		while(i<k)
		{
			if(a[i]%n==0)
				a[n]=0;
			i++;
		}
		n++;
	}
	i=0;
	while(n<k)
	{	if(a[i]!=0)
			cout<<i<<endl;
	}
	return 0;
}
