using namespace std;
#include<iostream>

void subsequence(char in[],int i,char out[],int j){
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<endl;
		int k=0;
		while(out[k]!='\0')
        {
        cout<<int(out[k])<<endl;
         k++;
        }

		return;
	}
	//Rec Case

	out[j] = in[i];
	subsequence(in,i+1,out,j+1);
	out[j] = '\0';
	subsequence(in,i+1,out,j);




}



int main()
{

	char input[100],out[100];
	//cout<<"Enter a string:- ";
	cin>>input;
	subsequence(input,0,out,0);

    return 0;
}

