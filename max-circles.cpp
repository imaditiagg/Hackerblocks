#include<algorithm>
#include<iostream>
using namespace std;
class circle
{
    public:
    int startpt;
    int endpt;
};
bool activityCompare(circle s1, circle s2)
{
    return (s1.endpt < s2.endpt);
}
int maxcircles(circle arr[],int n)
{
     // Sort circles according to end point
    sort(arr, arr+n, activityCompare);
    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i].startpt<<" ";
        cout<<arr[i].endpt;
        cout<<endl;
    }*/



    int flag=1; //first circle will always be selected
    int i=0;
    for(int j=1;j<n;j++)
    {
         if (arr[j].startpt >= arr[i].endpt)
       // If this circle has start pt greater than or
      // equal to the end pt of previously selected
      // activity, then select it
         {

         flag++;
         i=j;
         }

    }
    return flag;

}
int main()
{

    int n;
    cin>>n;  //integer denoting no. of circles

    int r[n],c[n];
    circle arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        cin>>r[i];
        arr[i].startpt= c[i]-r[i];
        arr[i].endpt=   c[i] + r[i];
    }




    int s=maxcircles(arr, n);
    cout<<n-s;

    return 0;

}
