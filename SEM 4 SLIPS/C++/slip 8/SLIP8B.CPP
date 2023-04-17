#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Person{
    private:
        long long Mobile_number;
        int Age, len;
        char *Person_name, *City;
    public:
        void set(long long m, int a, const char *p, const char *c){
            Mobile_number = m;
            Age = a;

            len=strlen(p);
            Person_name = new char[len+1];
            strcpy(Person_name,p);

            len=strlen(c);
            City = new char[len+1];
            strcpy(City,c);
        }
        void getdata(){
            cout<<endl<<"Name = "<<Person_name;
            cout<<endl<<"Mobile = "<<Mobile_number;
            cout<<endl<<"Age = "<<Age;
            cout<<endl<<"City = "<<City;
        }
        int search(long long m){
            if(m==Mobile_number)
                return 1;
            return 0;
        }
        int search(const char *p){
            if(strcmp(p,Person_name)==0)
                return 1;
            return 0;
        }
        int discity(char *c){
            if(strcmp(c,City)==0)
                return 1;
            return 0;
        }
};

int main(){
    Person p[10];
    p[0].set(9999999999,23,"VSH","PUNE");
    p[1].set(8888888888,21,"ADN","XYZ");
    p[2].set(7777777777,19,"RHO","MUM");
    p[3].set(7777777778,20,"PRN","XYZ");

    long long mob;
    int i;
    int flag=0;
    cout<<endl<<"Enter mobile number to search : "; cin>>mob;
    for(i=0;i<4;i++){
        if(p[i].search(mob)){
            p[i].getdata();
            flag=1;
        }
    }
    if(flag==0)
        cout<<endl<<"INVALID MOBILE NUMBER "<<mob<<endl;

    flag=0;
    char name[30];
    cout<<endl<<"Enter name to search : ";
    cin>>name;
    for(i=0;i<4;i++){
        if(p[i].search(name)){
            p[i].getdata();
            flag=1;
        }
    }
    if(flag==0)
        cout<<endl<<"INVALID NAME "<<name<<endl;
    
    flag=0;
    cout<<endl<<"Enter City : ";
    cin>>name;
    for(i=0;i<4;i++){
        if(p[i].discity(name)){
            p[i].getdata();
            flag=1;
        }
    }
    if(flag==0)
        cout<<endl<<"INVALID CITY "<<name<<endl;
    return 0;
}