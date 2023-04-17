#include<iostream>

using namespace std;

class Number{
    private:
        int Integer;
    public:
        Number(){
            cout<<"Enter a Integer number : ";
            cin>>Integer;
        }
        int getnum(){
            return Integer;
        }
        int operator ++(){
            int z=Integer;
            return ++z;
        }
        int operator ++(int x){
            int z=Integer;
            return z++;
        }
};

int main(){
    Number x;
    cout<<"Entered Number = "<<x.getnum()<<endl;
    cout<<"Pre Increment = "<<++x<<endl;
    cout<<"Post Increment = "<<x++<<endl;
    return 0;
}