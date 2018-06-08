#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {

        cin>>x[i];
        cin>>y[i];
    }

    sort(x,x+n);  // Sort the coordinates
    sort(y,y+n);

    int dx=x[0]; //dx and dy is the max. space available for temple
    int dy=y[0];

    for(int i=1;i<n;i++)
    {

        dx=max(dx,x[i]-x[i-1]);
        dy=max(dy,y[i]-y[i-1]);

    }
   cout<<(dx-1)*(dy-1);
   return 0;
}
