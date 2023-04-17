#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>

using namespace std;

class Marksheet{
    private:
        int seat_no, Grand_Total, i;
        int int_marks[5], ext_marks[5], total[5];
        float percentage;
        char Name[30], Class[20], Grade[20], subject_name[5][20];

    public:
        Marksheet(){
            strcpy(subject_name[0],"Networking");
            strcpy(subject_name[1],"CPP");
            strcpy(subject_name[2],"Operating System");
            strcpy(subject_name[3],"Advance PHP");
            strcpy(subject_name[4],"jQuery");
            Grand_Total=0;
        }
        void accept(){
            cout<<"Enter Seat No : "; cin>>seat_no;
            cout<<"Enter Name : "; cin>>Name;
            cout<<"Enter Class : "; cin>>Class;
            cout<<endl<<"Enter Marks : "<<endl<<endl;
            for(i=0;i<5;i++){
                cout<<subject_name[i]<<" : "<<endl;
                cout<<"Internal = "; cin>>int_marks[i];
                cout<<"External = "; cin>>ext_marks[i];
            }
        }
        void setresult(){
            for(i=0;i<5;i++){
                total[i] = int_marks[i] + ext_marks[i];
                Grand_Total = Grand_Total + total[i];
            }
            percentage = Grand_Total/5;

            if(percentage<40)
                strcpy(Grade,"Fail");
            else if(percentage<75)
                strcpy(Grade,"Pass");
            else if(percentage>99)
                strcpy(Grade,"Outstanding");
        }
        void getresult(){
            cout << "|" << setw(14) << "Name" <<"|"<< setw(18) << Name << "|" << endl;
            cout << "|" << setw(14) << "Seat No" <<"|"<< setw(18) << seat_no << "|" << endl;
            cout << "|" << setw(14) << "Class" <<"|"<< setw(18) << Class << "|" << endl;
            cout << "|" << setw(33) << "Marks" << "|" << endl;
            cout << "|" << setw(18) << "Subject" << "|" << setw(4) << "Int" << "|" << setw(4) << "Ext" << "|" << setw(4) << "Tot" << "|" << endl;
            for(i=0;i<5;i++){
                cout<<"|"<<setw(18)<<subject_name[i]<<"|"<<setw(4)<<int_marks[i]<<"|"<<setw(4)<<ext_marks[i]<<"|"<<setw(4)<<total[i]<<"|"<<endl;
            }
            cout<<"|"<<setw(28)<<"Total"<<"|"<<setw(5)<<Grand_Total<<"|"<<endl;
            cout<<"|"<<setw(28)<<"Percentage"<<"|"<<setw(5)<<percentage<<"|"<<endl;
            cout<<"|"<<setw(33)<<"GRADE"<<"|"<<endl;
            cout<<"|"<<setw(33)<<Grade<<"|"<<endl;
        }
};

int main(){
    Marksheet stud;
    stud.accept();
    stud.setresult();
    stud.getresult();
    return 0;
}