#include <iostream>
using namespace std;

int rev (int n)
{
	int r=0;
	while (n>0)
	{
		r=r*10;
		r=r+(n%10);
		n=n/10;
	}
	return r;
}
int main(void) 
{
	int i,n,a,b,sum;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d %d",&a,&b);
		a = rev(a);
		b = rev(b);
		sum = a+b;
		sum = rev(sum);
		printf ("%d\n",sum);
	}

	return 0;
}
