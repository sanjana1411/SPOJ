#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int t;
    double a,b,c,x,y,z,area,radius,dist;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> y >> z;
        area = 1.5*a*x;
        b=(a*x)/y;
        c=(a*x)/z;
        radius = (a*b*c)/(4*area);
        if(radius*radius-(a*a+b*b+c*c)/9>0)  
            dist=sqrt(radius*radius-(a*a+b*b+c*c)/9)*2;
        cout << fixed << setprecision(3) << area << " " << dist << endl;
    }
    return 0;
}
