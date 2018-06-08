using namespace std;
#include<iostream>


void targetsum(int a[],int N,int target)
{

for(int i=0;i<N;i++)
{
for(int j=i+1;j<N;j++)
{
if((a[i]+a[j])==target)
{

cout<<a[i]<<" and "<<a[j]<<endl;
}
}
}
}
int main()
{

int N,target;
cin>>N;
int a[N];

for(int i=0;i<N;i++)
cin>>a[i];

cin>>target;
targetsum(a,N,target);

return 0;
}
