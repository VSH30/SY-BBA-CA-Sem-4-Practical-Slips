#include<iostream>

using namespace std;

class E_Bill{
    private:
        char Cust_Name[30];
        int Meter_ID,No_of_Units,Total_Charges;
    public:
        E_Bill(){
            cout<<"Enter Name : "; cin>>Cust_Name;
            cout<<"Enter Meter ID : "; cin>>Meter_ID;
            cout<<"Enter Number of Units : "; cin>>No_of_Units;
            
            if(No_of_Units<=125)
                Total_Charges = 150;
            else if(No_of_Units<=300)
                Total_Charges = 100 + ((No_of_Units-100)*2);
            else if(No_of_Units>300)
                Total_Charges = 100 + 400 + ((No_of_Units-300)*5);
            
            if(Total_Charges>250)
                Total_Charges = Total_Charges + ((15*Total_Charges)/100);
        }
        void getbill(){
            cout<<"Name = "<<Cust_Name<<endl;
            cout<<"Meter ID = "<<Meter_ID<<endl;
            cout<<"Number of Units = "<<No_of_Units<<endl;
            cout<<"total Charges = "<<Total_Charges<<endl;
        }
};

int main(){
    E_Bill obj;
    obj.getbill();
    return 0;
}