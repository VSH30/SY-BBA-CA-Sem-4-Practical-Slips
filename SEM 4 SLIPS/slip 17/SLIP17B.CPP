#include<iostream>
#include<string.h>

using namespace std;

class Student{
    protected:
        int id;
        char name[30], clas[15];
    public:
        void accStudent(){
            cout<<endl<<"Enter Stud Name : "; cin>>name;
            cout<<"Enter Stud id : "; cin>>id;
            cout<<"Enter Stud Class : "; cin>>clas;
        }
        void studdata(){
            cout<<endl<<"Stud Name : "<<name<<endl;
            cout<<"Stud id : "<<id<<endl;
            cout<<"Stud Class : "<<clas<<endl;
        }
};

class Competition{
    protected:
        int cid;
        char cname[30];
    public:
        void accCompetition(){
            cout<<"Enter Competition Name : "; cin>>cname;
            cout<<"Enter Competition id : "; cin>>cid;
        }
        void compdata(){
            cout<<"Competition Name : "<<cname<<endl;
            cout<<"Competition id : "<<cid<<endl;
        }
        int getcomp(){
            return cid;
        }
};

class Stud_Comp:public Student, public Competition{
    private:
        int rank;
    public:
        void accept(){
            accStudent();
            accCompetition();
            cout<<"Enter Rank : "; cin>>rank;
        }
        void display(){
            studdata();
            compdata();
            cout<<"Rank : "<<rank<<endl;
        }
        int getrank(){
            return rank;
        }
        void mindata(){
            cout<<endl<<"Stud Name : "<<name<<endl;
            cout<<"Competition Name : "<<cname<<endl;
            cout<<"Rank : "<<rank<<endl;
        }
        friend void swap(Stud_Comp &a, Stud_Comp &b);
};

void swap(Stud_Comp &a, Stud_Comp &b){
    if(a.getrank() > b.getrank()){
        Stud_Comp c = a;
        a = b;
        b = c;
    }
}


int main(){
    int ch,n,id,num=-1;
    Stud_Comp arr[10], temp[5];
    while(1){
        cout<<"-----MENU-----"<<endl;
        cout<<"1. Accept Information"<<endl;
        cout<<"2. Display Information"<<endl;
        cout<<"3. Enter Comp to display students"<<endl;
        cout<<"0. Exit"<<endl<<endl;

        cout<<"Enter Choice: "; cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter number of students : ";
                cin>>n;
                for(int i=0;i<n;i++)
                    arr[i].accept();
                break;
            case 2:
                cout<<endl<<"Details : "<<endl;
                for(int i=0;i<n;i++)
                    arr[i].display();
                break;
            case 3:
                cout<<"Enter Comp id : ";
                cin>>id;
                //Checking for students in req comp
                for(int i=0;i<n;i++){
                    if(id==arr[i].getcomp()){
                        num++;
                        temp[num] = arr[i];
                    }
                }
                //Sorting in Ascending
                for(int i=0;i<=num;i++){
                    for(int j=i+1;j<=num;j++)
                        swap(temp[i],temp[j]);
                }
                //Display sorted list
                for(int i=0;i<=num;i++)
                    temp[i].mindata();
                break;
            case 0:
                exit(0);
                break;
            default:
                cout<<"INVALID"<<endl;
                break;
        }
    }
    return 0;
}