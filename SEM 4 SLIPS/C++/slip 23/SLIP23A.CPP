#include<iostream>
#include<string.h>

using namespace std;

class MyString{
    private:
        char *p;
    public:
        void accMyString(){
            char x[100];
            cout<<"Enter String : ";
            cin>>x;
            p = new char[strlen(x)+1];
            strcpy(p,x);
        }
        void display(){
            cout<<p<<endl;
        }
        MyString operator + (MyString obj){
            MyString z;
            //char *temp;
            z.p = new char[strlen(p)+strlen(obj.p)+1];
            strcpy(z.p,p);
            strcat(z.p,obj.p);
            return z;
        }
};

int main(){
    MyString a, b;
    a.accMyString();
    b.accMyString();

    cout<<"First String = ";
    a.display();
    cout<<"Secod String = ";
    b.display();
    cout<<"Combined String = ";
    (a+b).display();
    return 0;
}