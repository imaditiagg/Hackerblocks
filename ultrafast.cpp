using namespace std;
#include<iostream>
int main()
{
int t; //no. of test cases
cin>>t;

string s1[10];
string s2[10];
string s3[t];
for(int i=0;i<t;i++) //enter both numbers(containing 0's ans 1's only)
{
cin>>s1[i];
cin>>s2[i];
}

int i=0,j=0;
while(i<t) //condition for no. of test cases
{
    j=0;
while(j<s1[i].length()) //to check length of each number
{
if(s1[i][j]!=s2[i][j])
s3[i][j]='1';
else
s3[i][j]='0';
cout<<s3[i][j];
j++;
}
cout<<endl;
i++;
}


return 0;
}







