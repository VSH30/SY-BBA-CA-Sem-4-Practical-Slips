#include<iostream>

using namespace std;

class Employee{
    private:
        int Emp_Id, Salary;
        long long Mobile_No;
        char Emp_Name[30];
    public:
        void accEmployee(){
            cout<<"Enter EMP ID : "; cin>>Emp_Id;
            cout<<"Enter Name : "; cin>>Emp_Name;
            cout<<"Enter Mobile : "; cin>>Mobile_No;
            cout<<"Enter Salary : "; cin>>Salary;
        }
        void display(){
            cout<<endl<<"EMP ID = "<<Emp_Id<<endl;
            cout<<"Name = "<<Emp_Name<<endl;
            cout<<"Mobile = "<<Mobile_No<<endl;
            cout<<"Salary = "<<Salary<<endl;
        }
        int getsal(){
            return Salary;
        }
        int getid(){
            return Emp_Id;
        }
        friend void swap(Employee &a, Employee &b);
};

void swap(Employee &a, Employee &b){
    if(a.getsal()<b.getsal()){
        Employee z = a;
        a = b;
        b = z;
    }
}

int main(){
    int n, id;
    Employee arr[10];
    cout<<"Enter number of Employees : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Employee "<<i+1<<":"<<endl;
        arr[i].accEmployee();
    }

    cout<<endl<<"Employees details in DESCENDING ORDER (Salary) : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Emp "<<i+1<<" : ";
        for(int j=i+1;j<n;j++){
            swap(arr[i],arr[j]);
        }
        arr[i].display();
    }

    cout<<endl<<"Enter ID to search : ";
    cin>>id;
    int flag=1;
    for(int i=0;i<n;i++){
        if(id==arr[i].getid()){
            flag=0;
            arr[i].display();
        }
    }
    if(flag)
        cout<<"Does not exist!!"<<endl;
    return 0;
}