#include<iostream>
#include<string.h>

using namespace std;

class Seller{
    private:
        char S_Name[30], Product_Name[30];
        int Sales_Quantity, Target_Quantity, Month, Commission;
    public:
        Seller(){}
        void Set(char name[30], char prod[30], int sq, int tq, int m){
            strcpy(S_Name,name);
            strcpy(Product_Name,prod);
            Sales_Quantity = sq;
            Target_Quantity = tq;
            Month = m;

            if(Sales_Quantity>Target_Quantity)
                Commission = 25+10;
            else if(Sales_Quantity == Target_Quantity)
                Commission = 10;
            else
                Commission = 0;
        }
        void display(){
            cout<<endl;
            cout<<"Name = "<<S_Name<<endl;
            cout<<"Prodcut = "<<Product_Name<<endl;
            cout<<"Sales Quantity = "<<Sales_Quantity<<endl;
            cout<<"Target Quantity = "<<Target_Quantity<<endl;
            cout<<"Month = "<<Month<<endl;
            cout<<"Commission = "<<Commission<<endl;
        }
};

int main(){
    Seller arr[4];
    arr[0].Set("VSH","Laptop",10,8,4);
    arr[1].Set("ADN","PC",13,15,6);
    arr[2].Set("RHO","Keyboard",18,18,9);
    arr[3].Set("PRN","Mouse",21,25,12);

    for(Seller x : arr){
        x.display();
    }
    return 0;
}