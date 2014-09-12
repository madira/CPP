#include<iostream>
using namespace std;

int main()
{
	int n;
	int flag=1;
	for (int i=999;i>100,flag==1;i--)
	{
		for (int j=999;j>800;j--)
		{
			int x,y,z,p;
			n= i * j;
			int m=n/1000;
			if ((n/100000)==(n%10))
			 {
				if (((n/10000)%10)== ((n%100)/10))
				{
					if(((n/1000)%10)==((n%1000)/100))
					{
						if(n>10000)
							cout<<"n:"<<n<<endl;
					}
				}
			}
			n=n%1000;
			x=n%10;
			y=n/10;
			z=n/100;
			p=x*100 + y * 10 + z;
		//	if( p==m)
		//	{
		//		cout<<"i:"<<i<<"j:"<<j<<endl;
		//		flag=0;
		//	}
		}
	}
	return 0;
}
