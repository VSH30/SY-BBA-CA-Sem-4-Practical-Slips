#include<iostream>
#include<conio.h>

using namespace std;

class Float_Array;

class Integer_Array{
    private:
        int *arr,n,i;
    public:
        Integer_Array(){
            cout<<"INTEGER ARRAY number of elements : "; cin>>n;
            arr = new int[n];
            for(i=0;i<n;i++){
                cout<<"Enter element "<<i+1<<" : ";
                cin>>arr[i];
            }
        }
        friend void avg(Integer_Array intobj, Float_Array floatobj);
};

class Float_Array{
    private:
        int n,i;
        float *arr;
    public:
        Float_Array(){
            cout<<"Float ARRAY number of elements : "; cin>>n;
            arr = new float[n];
            for(i=0;i<n;i++){
                cout<<"Enter element "<<i+1<<" : ";
                cin>>arr[i];
            }
        }
        friend void avg(Integer_Array intobj, Float_Array floatobj);
};

void avg(Integer_Array intobj, Float_Array floatobj){
    float sum=0;
    int i;
    cout<<"Average of Integer Array = ";
    for(i=0;i<intobj.n;i++){
        sum = sum + intobj.arr[i];
    }
    cout<<(sum/intobj.n)<<endl;
    cout<<"Average of Float Array = ";
    sum=0;
    for(i=0;i<floatobj.n;i++){
        sum = sum + floatobj.arr[i];
    }
    cout<<(sum/floatobj.n)<<endl;
}

int main(){
    Integer_Array a;
    Float_Array b;
    avg(a,b);
    return 0;
}