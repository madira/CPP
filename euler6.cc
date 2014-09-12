#include<iostream>
using namespace std;

int main()
{
	int sum_of_square=0,square_of_sum=0;
	for(int i=1;i<101;i++)
		sum_of_square+=(i*i);
	for(int i=1;i<101;i++)
		square_of_sum+=i;
	long long int result;
	result=(square_of_sum*square_of_sum)-sum_of_square;
	cout<<result;
	return 0;
}
		
