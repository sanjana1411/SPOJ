#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int t,n,m,k;
    long int hands,knife;
    cin >> t;
    for (int i=1;i<=t;i++)
    {
        cin >> n >> m >> k;
        hands = (n*m*k)-1;
        knife = ceil(log2(n))+ceil(log2(m))+ceil(log2(k));
        cout << "Case #" << i <<": " << hands <<" " << knife << endl;
    }
    return 0;
}
