#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
long int a[1000000]={0},i;
int main()
{
    int t;
    long int n;
    for (i=2;i<=1000000;i++)
    {
    long int p=2;
    while ((p*i) <= 1000000)
    {
        a[p*i] += i;
        p++;
    }
    a[i]+=1;
    }
    for (i=2;i<=1000000;i++)
    a[i] += a[i-1];
    cin >> t;
    while (t--)
    {
        cin >> n;
        
        cout << a[n] << endl;
    }
    return 0;
}