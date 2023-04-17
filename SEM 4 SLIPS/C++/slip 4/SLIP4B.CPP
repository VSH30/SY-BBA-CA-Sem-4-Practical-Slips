#include<iostream>
#include<conio.h>

using namespace std;

class Employee{
    protected:
        int emp_code, salary;
        char name[50];
};

class Fulltime:public Employee{
    protected:
        int daily_wages, number_of_days;
    public:
        void setdata(){
            cout<<"Enter emp_code : "; cin>>emp_code;
            cout<<"Enter name : "; cin>>name;
            cout<<"Enter daily wages : "; cin>>daily_wages;
            cout<<"Enter number of days : "; cin>>number_of_days;
            salary = daily_wages * number_of_days;
        }
        void getdata(){
            cout<<endl<<"Employee code = "<<emp_code<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Daily wages = "<<daily_wages<<endl;
            cout<<"Number of days = "<<number_of_days<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
        int getsal(){
            return salary;
        }
};

class Parttime:public Employee{
    protected:
        int hourly_wages, number_of_hours;
    public:
        void setdata(){
            cout<<"Enter emp_code : "; cin>>emp_code;
            cout<<"Enter name : "; cin>>name;
            cout<<"Enter hourly wages : "; cin>>hourly_wages;
            cout<<"Enter number of hours : "; cin>>number_of_hours;
            salary = hourly_wages * number_of_hours;
        }
        void getdata(){
            cout<<"Employee code = "<<emp_code<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Hourly wages = "<<hourly_wages<<endl;
            cout<<"Number of hours = "<<number_of_hours<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
        int getsal(){
            return salary;
        }
};

int main(){
    int n, i, ch, a, b;
    Parttime prt[10], maxp;
    Fulltime flt[10], maxf;

    while(1){
        cout<<endl<<"-----MENU-----"<<endl;
        cout<<"1.Accept details of 'n' Employees"<<endl;
        cout<<"2.Display details of 'n' Emploees"<<endl;
        cout<<"3.Display Details of Employees with max salary for both types"<<endl;
        cout<<"4.EXIT"<<endl;
        cout<<endl<<"Enter your Option: ";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<endl<<"Enter number of employees : ";
                cin>>n;
                a=n/2;
                b=n-a;

                cout<<endl<<"PART-TIME EMPLOYEES : "<<endl;
                for(i=0;i<a;i++){
                    cout<<endl<<"employee "<<i+1<<": "<<endl;
                    prt[i].setdata();
                    if(maxp.getsal()<prt[i].getsal())
                        maxp = prt[i];
                }

                cout<<endl<<"FULL-TIME EMPLOYEES : "<<endl;
                for(i=0;i<b;i++){
                    cout<<endl<<"employee "<<i+1<<": "<<endl;
                    flt[i].setdata();
                    if(maxf.getsal()<flt[i].getsal())
                        maxf=flt[i];
                }
                maxp=prt[0];
                maxf=flt[0];
                break;
            case 2:
                cout<<endl<<"PART-TIME EMPLOYEES : "<<endl;
                for(i=0;i<a;i++){
                    cout<<endl<<"employee "<<i+1<<": ";
                        prt[i].getdata();
                }

                cout<<endl<<"FULL-TIME EMPLOYEES : "<<endl;
                for(i=0;i<b;i++){
                    cout<<endl<<"employee "<<i+1<<": "<<endl;
                    flt[i].getdata();
                }
                break;
            case 3:
                for(i=0;i<a;i++)
                    if(maxp.getsal()<prt[i].getsal())
                        maxp = prt[i];
                for(i=0;i<b;i++)
                    if(maxf.getsal()<flt[i].getsal())
                        maxf=flt[i];
                cout<<endl<<"Employee with max salary in Part-Time : ";
                maxp.getdata();
                cout<<endl<<"Employee with max salary in Full-Time : ";
                maxf.getdata();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"INVALID OPTION!!!"<<endl;
                break;
        }
    }

    return 0;
}