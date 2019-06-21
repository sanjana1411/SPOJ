#include <iostream>
using namespace std;

int main() 
{
	int t;
	unsigned long int n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if ((n%2)==0)
		cout << "Thankyou Shaktiman" << endl;
		else
		cout << "Sorry Shaktiman" << endl;
	}
	return 0;
}