#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number to find all prime numbers :"<<endl;
	cin>>n;
	int a[n+1];
	a[0]=0;a[1]=0;a[2]=2;
	for(int i=3;i<=n;i++)
		a[i]=i;
	float k=sqrt(n);
	for(int i=2;i<=n;i++)
		for(int j=i;j<=(n/i);j++)	
			a[j*i]=0;
	cout<<"Prime numbers for "<<n<<" are :"<<" ";
	for(int i=2;i<=n;i++)
		if(a[i]!=0)
			cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
