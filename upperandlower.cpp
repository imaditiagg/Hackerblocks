#include<iostream>
using namespace std;


int lowerBound(int *a,int n,int key){
    int s =0,e=n-1;
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(a[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(a[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return ans;
}
int upperBound(int *a,int n,int key){
    int s =0,e=n-1;
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(a[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int T;
    cin>>T;
    int b[T];
    for(int i=0;i<T;i++)
        cin>>b[i];

        for(int i=0;i<T;i++)
        {
            cout<<lowerBound(a,n,b[i])<<" ";
            cout<<upperBound(a,n,b[i])<<endl;
        }

return 0;
}


