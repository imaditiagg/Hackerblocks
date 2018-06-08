#include<iostream>
using namespace std;
#include<cstring>
#include<set>

set<string> s;
set<string>::iterator it;

void printPermutation(string input,int i){
	if(input[i]=='\0'){
		string str(input);
		s.insert(str);
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
	char input[20];
	cin>>input;
	printPermutation(input,0);
	for( it = s.begin();it!=s.end();it++){
		cout<<(*it)<<endl;
  	}




	return 0;
}
