using namespace std;
#include<iostream>
int main()
{

int n,m;
cin>>n;
cin>>m;
int a[n][m];

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>a[i][j];
}
}
int k=0;

while(k<n)
{

if((k%2)==0)
{
for(int i=0;i<m;i++)
{
cout<<a[k][i]<<", ";
}
}
else
{
for(int i=m-1;i>=0;i--)
{
cout<<a[k][i]<<", ";
}
}
k++;
}
cout<<"END";
return 0;


}



