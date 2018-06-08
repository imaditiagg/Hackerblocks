#include<bits/stdc++.h>
using namespace std;
#include<cstring>
string out[50];
int j=0;

bool cmp(string a,string b) //overload cmp
{
return a>b;
}

void printPermutation(string input,int i){
	if(input[i]=='\0'){
		out[j]=input;

		j++;
		return;
	}

	///Rec Case
	for(int j=i;input[j]!='\0';j++){
		swap(input[i],input[j]);
		printPermutation(input,i+1);
		//Backtracking - restore the original array
		swap(input[i],input[j]);
	}
}


int main(){
	string input;
	cin>>input;
	int index;

	printPermutation(input,0);
    sort(out,out+j,cmp); //calling sort function

        for(int k=0;k<j;k++) //checking the index of input string and printing elements which are present before that index in sorted out array.
        {

        if(input==out[k])
        {

            index=k;
        }
        }
        for(int s=index-1;s>=0;s--)
        cout<<out[s]<<endl;

	return 0;
}
