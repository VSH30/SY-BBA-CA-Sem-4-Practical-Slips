#include<iostream>

using namespace std;

class MyArray{
    private:
        int *arr;
        int size;
    public:
        void accept(){
            cout<<"Enter size of array : ";
            cin>>size;
            arr = new int[size];
            cout<<"Enter values : "<<endl;
            for(int i=0;i<size;i++){
                cout<<"Element "<<i+1<<" : ";
                cin>>arr[i];
            }
        }
        void display(){
            cout<<"Array = ";
            for(int i=0;i<size;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
        void operator - (){
            for(int i=0,j=size-1;i<size/2;i++,j--){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        MyArray operator + (int n){
            MyArray z = *this;
            for(int i=0;i<size;i++)
                z.arr[i] += n;
            return z;
        }
};

int main(){
    MyArray a;
    int n;
    a.accept();
    a.display();
    -a;
    a.display();
    cout<<"Enter a num to add : ";
    cin>>n;
    MyArray a2 = a+n;
    a2.display();
    return 0;
}