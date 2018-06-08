#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{

int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++) //Enter guessed ranks
{
cin>>a[i];
}

sort(a+1,a+n); //sort them

int ranks[n];

//Now assign ranks linearly
for(int i=1;i<=n;i++)
{
    ranks[i]=i;
}

int badness=0;
for(int i=1;i<=n;i++)
{
    badness+= abs(a[i]-ranks[i]);
}

cout<<badness;


return 0;
}
