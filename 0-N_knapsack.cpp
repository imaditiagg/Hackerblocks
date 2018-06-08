//0-N knapsack(Unbounded)
#include<iostream>
#include<algorithm>
using namespace std;

int bottomUpDp(int wts[],int prices[],int N,int S)
{
int dp[1000][100000];

for(int i=0;i<=N;i++)
{

for(int w=0;w<=S;w++)
{
if(i==0 || w==0)
dp[i][w]=0;
else
{
int inc=0,exc=0;
if(wts[i-1]<=w)
inc=prices[i-1]+dp[i][w-wts[i-1]];

exc= dp[i-1][w];


dp[i][w]=max(inc,exc);

}

}
}
int x= dp[N][S];
return x;
}

int main()
{
int S,N;

cin>>N;
cin>>S;
int wts[N];
int prices[N];

for(int i=0;i<N;i++)
{
cin>>wts[i];

}
for(int i=0;i<N;i++)
{
cin>>prices[i];

}

cout<<bottomUpDp(wts,prices,N,S);
return 0;
}
