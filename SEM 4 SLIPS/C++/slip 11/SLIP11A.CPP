#include<iostream>
#include<conio.h>

using namespace std;

class MyArray{
    private:
        int *arr,i,sum;
    public:
        MyArray(int n){
            sum = 0;
            arr = new int(n);
            for(i=0;i<n;i++){
                cout<<"Enter "<<i+1<<" : ";
                cin>>arr[i];
                sum += arr[i];
            }
            cout<<endl<<"Sum of Elements of Array = "<<sum<<endl;
        }
        ~MyArray(){
            cout<<"DESTRUCTING!!!";
        };
};

int main(){
    int v;
    cout<<"Enter Number of elements : ";
    cin>>v;
    
    MyArray obj(v);

    return 0;
}