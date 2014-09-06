#include<iostream>
using namespace std;

int main()
{
	int n,a=0,b=1;
	long long int sum=0;
	while(n<5702886)
	{
		n=a+b;
		a=b;
		b=n;
		if(n%2==0)
		sum+=n;
	}
	cout<<"A is "<<a<<endl;
	cout<<"B is "<<b<<endl;
	cout<<"N is "<<n<<endl;
	cout<<"Sum:"<<sum<<endl;
	return 0;
}
