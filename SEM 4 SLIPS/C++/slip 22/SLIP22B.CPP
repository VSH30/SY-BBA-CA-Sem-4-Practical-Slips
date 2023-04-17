#include<iostream>
#include<string.h>
using namespace std;

void display_str(char *c){
    cout<<'"'<<c<<'"'<<endl;
}

void display_str(int n, char *c){
    string s(c);
    cout<<s.substr(0,n)<<endl;
}

void display_str(int n, int m, char *c){
    string s(c);
    cout<<s.substr(n,m)<<endl;
}

int main(){
    char *p="Hello All";
    int m,n;
    cout<<"String in Double Quotes = ";
    display_str(p);

    cout<<endl<<"Enter number of char to display : ";
    cin>>n;
    cout<<"First "<<n<<" char of String = ";
    display_str(n,p);

    cout<<endl<<"Enter start : ";
    cin>>n;
    cout<<"Enter End : ";
    cin>>m;
    cout<<"Sub string from "<<n<<" to "<<m<<" = ";
    display_str(n,m,p);

    return 0;
}