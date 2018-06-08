#include<iostream>
using namespace std;

bool isValid(int *books,int n,int k,int current_ans){

	int s=1;
	int currently_alloted = 0;

	for(int i=0;i<n;i++){

		if(books[i]>current_ans){
			return false;
		}

		if(currently_alloted + books[i]<=current_ans){
			currently_alloted = currently_alloted + books[i];
		}
		else{
			s++;
			if(s>k){
				return false;
			}
			currently_alloted = books[i];
		}
	}
	return true;



}

int findMinPages(int *books,int n,int k){

	//Search space
	int s = 0; //Book with maximum pages
	int sum=0;

	for(int i=0;i<n;i++)
        sum+=books[i];
	int e = sum;//sum of all books

	int mid;
	int ans;

	while(s<=e){
		mid = (s+e)/2;

		if(isValid(books,n,k,mid)){
			ans =mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return ans;
}

int main(){
    int n,k;
	cin>>n;
	cin>>k;
	int books[n];

	for(int i=0;i<n;i++)
        cin>>books[i];


	cout<<findMinPages(books,n,k)<<endl;



return 0;


}
