#include<iostream>

using namespace std;

int main(){
    int *arr,n;

    cout<<"Enter number of elements : ";
    cin>>n;

    arr = new int[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<"Array = ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl<<"Array in Reverse order = ";
    for(int i=n-1;i>=0;i--)
        cout<<arr[i]<<" ";
}