#include<iostream>
#include<iomanip>

using namespace std;

class Employee{
    private:
        int Emp_id, Salary;
        char Emp_Name[30], Company_Name[30];
    public:
        void accEmployee(){
            cout<<"Enter ID : "; cin>>Emp_id;
            cout<<"Enter EMP Name : "; cin>>Emp_Name;
            cout<<"Enter CMP Name : "; cin>>Company_Name;
            cout<<"Enter Salary : "; cin>>Salary;
        }
        void display(){
            cout<<"ID = "<<Emp_id<<endl;
            cout<<"EMP Name = "<<Emp_Name<<endl;
            cout<<"CMP Name = "<<Company_Name<<endl;
            cout<<"Salary = "<<setfill('*')<<setw(7)<<Salary<<endl;
        }
};

int main(){
    Employee a;
    a.accEmployee();
    a.display();
    return 0;
}
