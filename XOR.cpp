#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int max=0,ans;
     for(int a=x;a<y;a++)
        for(int b=a+1;b<=y;b++)
        {
        ans=a^b;
        if(ans>max)
        max=a^b;
        }
     cout<<max;
     return 0;
}


