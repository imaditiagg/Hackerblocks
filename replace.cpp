#include<iostream>
#include<string>
using namespace std;
string replacePI(string s,int i=0)
{

     if(s[i]=='\0' || s[i+1]=='\0')
  {
      return s;
  }

  if(s[i]=='3' && s[i+1]=='.' && s[i+2]=='1' && s[i+3]=='4')
  {
      s[i]='p';
      s[i+1]='i';
      s[i+2]='\0';
      s[i+3]='\0';
      int j=i+4;
      int len=s.length();
      while(j<=len)
      {
          s[j-2]=s[j];
          s[j]='\0';
          j++;
      }
     return  replacePI(s,i+2);
  }
  else
    return replacePI(s,i+1);



}
int main()
{
int N;
cin>>N;
cin.ignore();
string s[N];

for(int i=0;i<N;i++)
{
getline(cin,s[i]);

}

for(int i=0;i<N;i++)
{

cout<<replacePI(s[i],0)<<endl;


}

return 0;
}
