using namespace std;
#include<iostream>
#include<cstring>

bool obedient_string(string s,int i)
{
if(s[i]=='\0')   //base case
return true;

//Rec case
if(s[0]=='a')
{
if(s[i]=='a')
{
   if(s[i+1]=='\0' || s[i+1]=='a' || (s[i+1]=='b' && s[i+2]=='b'))
   {
   return obedient_string(s,i+1);

   }


}
else if(s[i]=='b' && s[i+1]=='b')
{
 if(s[i+2]=='\0' || s[i+2]=='a')
 {


  return obedient_string(s,i+2);

 }

}
}

return false;
}

int main()
{
string s;
cin>>s;

int result=obedient_string(s,0);
if(result==1) cout<<"True";
else cout<<"False";
return 0;

}
