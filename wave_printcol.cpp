using namespace std;
#include<iostream>
int main()
{

int M,N;
cin>>M;
cin>>N;
int a[M][N];

for(int i=0;i<M;i++)
{
for(int j=0;j<N;j++)
{
cin>>a[i][j];
}
}
int k=0;

while(k<N)
{

if((k%2)==0)
{
for(int i=0;i<M;i++)
{
cout<<a[i][k]<<","<<" ";
}
}
else
{
for(int i=M-1;i>=0;i--)
{
cout<<a[i][k]<<","<<" ";
}
}
k++;
}
cout<<"END";
return 0;


}



