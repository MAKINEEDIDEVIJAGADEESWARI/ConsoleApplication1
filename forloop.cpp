#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the elements are:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}