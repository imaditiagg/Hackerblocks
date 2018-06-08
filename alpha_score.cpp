using namespace std;
#include<iostream>

int main()
{
int N; //no.of stairs
cin>>N;

int alpha_stairs[N];
int alphasum=0;
for(int i=0;i<N;i++)
cin>>alpha_stairs[i]; //Enter the no. written on each stair


//compute alphascore at each stair

int alphascore[N]={0};
for(int i=0;i<N;i++)
{
for(int j=0;j<i;j++)
{
if(alpha_stairs[i]>alpha_stairs[j])
alphascore[i]+=alpha_stairs[j];
}
alphasum+=alphascore[i];
}



cout<<alphasum%1000000007;
return 0;





}
