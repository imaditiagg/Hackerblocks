#include<iostream>
using namespace std;

int binarySearchRoot(int no){
	int mid;
	int s= 1;
	int e = no;


	int ans = 0;

	while(s<=e){
		mid = (s+e)>>1;

		if(mid*mid==no){
			return mid;
		}
		else if(mid*mid>no){
			e = mid - 1;
		}
		else{
			ans = mid;
			s = mid + 1;
		}

	}
	return ans;


}

int main(){
	int n;
	cin>>n;
	int no[n];
	for(int i=0;i<n;i++)
	{
	cin>>no[i];
	}

	for(int i=0;i<n;i++)
        cout<<binarySearchRoot(no[i])<<endl;



	return 0;
}
