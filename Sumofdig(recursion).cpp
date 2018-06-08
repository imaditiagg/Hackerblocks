using namespace std;
#include<iostream>
#include<cstring>

int sum(string s,int i)
{
int num;


if(s[i] != '\0')
{
num=s[i]-'0';
return (num+ sum(s,i+1));
}
else
return 0;


}


int main()
{
string s;
cin>>s;
cout<<sum(s,0);
return 0;

}
