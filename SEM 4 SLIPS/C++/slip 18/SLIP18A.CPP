#include<iostream>

using namespace std;

class Student{
    private:
        int Roll_No;
        float Percentage;
        char S_Name[30], clas[15];
    public:
        Student(){
            cout<<endl<<"Enter Name  : "; cin>>S_Name;
            cout<<"Enter Roll No : "; cin>>Roll_No;
            cout<<"Enter Class : "; cin>>clas;
            cout<<"Percentage : "; cin>>Percentage;
        }
        void display(){
            cout<<"Name = "<<this->S_Name<<endl;
            cout<<"Roll No = "<<this->Roll_No<<endl;
            cout<<"Class = "<<this->clas<<endl;
            cout<<"Percentage = "<<this->Percentage<<endl;
        }
        float getper(){
            return this->Percentage;
        }
};

int main(){
    cout<<"Enter details for Student 1: ";
    Student a;
    cout<<endl<<"Enter details for Student 2: ";
    Student b;
    cout<<endl<<"Student data for highest percent : "<<endl;
    (a.getper()>b.getper())?a.display():b.display();
    return 0;
}