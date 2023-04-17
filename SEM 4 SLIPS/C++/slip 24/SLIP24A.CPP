#include<iostream>
#include<string.h>
using namespace std;

class FixDeposit{
    private:
        int FD_No, FD_Amt, Interest_rate, Maturity_Amt, Number_of_Months;
        char *Cust_Name;
    public:
        FixDeposit(int fno, int famt, int nom, char *c, int rate=10){
            FD_No = fno;
            FD_Amt = famt;
            Interest_rate = rate;
            Number_of_Months = nom;
            Maturity_Amt = FD_Amt*Number_of_Months*rate/100;
            strcpy(Cust_Name,c);
        }
        void disp(){
            cout<<endl<<"FD Num = "<<FD_No<<endl;
            cout<<"Cust Name = "<<Cust_Name<<endl;
            cout<<"FD Amount = "<<FD_Amt<<endl;
            cout<<"Interest Rate = "<<Interest_rate<<endl;
            cout<<"Number of Months = "<<Number_of_Months<<endl;
            cout<<"Maturity Amount = "<<Maturity_Amt<<endl;
        }
};

int main(){
    char *x = "Vishal Hanchnoli";
    FixDeposit a(101,60000,10,x);
    a.disp();
    return 0;
}