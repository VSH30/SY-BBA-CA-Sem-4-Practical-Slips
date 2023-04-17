#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Account{
    private:
        int *acc_no, *balance;
        char *acc_type;
    public:
        Account(){
            acc_no = new int[1];
            balance = new int[1];
            char x[30];
            cout<<"Enter Acc no : "; cin>>*acc_no;
            cout<<"Enter Acc type : "; cin>>x;
            cout<<"Enter Balance : "; cin>>*balance;
            acc_type = new char[strlen(x)+1];
            strcpy(acc_type,x);
        }
        void disp(){
            cout<<"Acc no = "<<*acc_no<<endl;
            cout<<"Acc type = "<<acc_type<<endl;
            cout<<"Balance = "<<balance<<endl;
        }
};

int main(){
    Account a;
    a.disp();
    return 0;
}