#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    double distance;
    cin>>x1>>x2;
    cin>>y1>>y2;
    cout<<showpoint;
    cout<<fixed;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<setprecision(2);
    cout<<distance;
    return 0;
}
