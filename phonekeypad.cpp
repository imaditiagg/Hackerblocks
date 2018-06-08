#include<iostream>
#include<cstring>
using namespace std;


string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };  // an array of strings

void printKeyCombination(string input,char *output,int i=0,int j=0){
	if(input[i]=='\0'){
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}

	///Rec Case
	int current_digit = input[i] - '0';
	/*if(current_digit==0){
		printKeyCombination(input,output,i+1,j);
	}*/

	for(int k=0;k<table[current_digit].size();k++){
		output[j] = table[current_digit][k];
		printKeyCombination(input,output,i+1,j+1);
	}

}


int main(){

	string input;
	cin>>input;

	char output[10];
	printKeyCombination(input,output);


	return 0;
}
