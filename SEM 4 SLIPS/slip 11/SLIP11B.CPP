#include<iostream>
#include<conio.h>

using namespace std;

class Student{
    protected:
        int Roll_No;
        char Name[50];
    public:
        void setdata(){
            cout<<"Enter Roll No : "; cin>>Roll_No;
            cout<<"Enter Name : "; cin>>Name;
        }
        void getdata(){
            cout<<"Name = "<<Name<<endl;
            cout<<"Roll No = "<<Roll_No<<endl;
        }
};

class Theory:virtual public Student{
    protected:
        int M1,M2,M3,M4;
    public:
        void settheory(){
            cout<<endl<<"Enter Theory Marks: "<<endl;
            cout<<"Enter Networking Marks : "; cin>>M1;
            cout<<"Enter CPP Marks : "; cin>>M2;
            cout<<"Enter OS Marks : "; cin>>M3;
            cout<<"Enter Adv PHP Marks : "; cin>>M4;
        }
};

class Practical:virtual public Student{
    protected:
        int P1,P2;
    public:
        void setpractical(){
            cout<<endl<<"Enter Practical Marks"<<endl;
            cout<<"Enter CPP Practical Marks : "; cin>>P1;
            cout<<"Enter Adv PHP Practical Marks : "; cin>>P2;
        }
};

class Result:public Theory, public Practical{
    protected:
        int Total_Marks, Percentage;
        string Grade;
    public:
        void get_result(){
            Total_Marks = M1+M2+M3+M4+P1+P2;
            Percentage = (Total_Marks/6);
            if(Percentage < 40)
                Grade = "Fail";
            else if(Percentage < 75)
                Grade = "Pass";
            else if(Percentage < 100)
                Grade = "Distinction";
            cout<<endl<<endl<<"RESULT: "<<endl;
            getdata();
            cout<<"Total Marks = "<<Total_Marks<<"/600"<<endl;
            cout<<"Percentage = "<<Percentage<<"%"<<endl;
            cout<<"Grade = "<<Grade<<endl;
        }
};

int main(){
    Result stud;
    int ch;
    
    while(1){
        cout<<endl<<"-----MENU-----"<<endl<<endl;
        cout<<"1.Accept Student Information"<<endl;
        cout<<"2.Display Student Information"<<endl;
        cout<<"3.Result"<<endl;
        cout<<"4.Exit"<<endl;

        cin>>ch;

        switch(ch){
            case 1:
                stud.setdata();
                stud.settheory();
                stud.setpractical();
                break;
            case 2:
                stud.getdata();
                break;
            case 3:
                stud.get_result();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"IVALID OPTION!!!"<<endl;
                break;
        }
    }
    return 0;
}