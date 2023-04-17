#include<iostream>
#include<string.h>

using namespace std;

class MyString{
    private:
        char *str;
        int str_len;
    public:
        void accept(){
            char s[50];
            cout<<"Enter a string : ";
            gets(s);
            str_len = strlen(s);
            str = new char[str_len];
            strcpy(str,s);
        }
        void display(){
            cout<<str<<endl;
        }
        void operator ! (){
            for (int i = 0; i < str_len; i++) {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] + 32;
                else if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
        }
        void operator < (MyString a){
            if(str_len < a.str_len)
                cout<<"First String is Smaller than Second String"<<endl;
            else
                cout<<"First String is Larger than Second String"<<endl;
        }
};

int main(){
    MyString a;
    cout<<"First string : "<<endl;
    a.accept();
    cout<<"_________________________________________"<<endl;
    MyString b;
    cout<<"Second string : "<<endl;
    b.accept();
    cout<<"_________________________________________"<<endl;
    
    cout<<"First string = ";
    a.display();
    cout<<"Second string = ";
    b.display();
    cout<<"_________________________________________"<<endl;
    
    cout<<"Reversed :"<<endl;
    cout<<"-----------------------------------------"<<endl;
    !a; !b;
    cout<<"First string = ";
    a.display();
    cout<<"Second string = ";
    b.display();
    cout<<"_________________________________________"<<endl;
    
    cout<<"First String < Second String : "<<endl;
    cout<<"-----------------------------------------"<<endl;
    a<b;
    cout<<"_________________________________________"<<endl;
    return 0;
}