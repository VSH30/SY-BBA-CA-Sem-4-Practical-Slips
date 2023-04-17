#include<iostream>
#include<string.h>
using namespace std;

class Mobiles{
    private:
        char model[20], company[30], color[15];
        int price, quantity;
    public:
        void accMobiles(){
            cout<<"Enter Model : "; cin>>model;
            cout<<"Enter Company : "; cin>>company;
            cout<<"Enter Color : "; cin>>color;
            cout<<"Enter Price : "; cin>>price;
            cout<<"Enter Quantity : "; cin>>quantity; 
        }
        void purchase(){
            int q;
            cout<<"Enter number of mobiles to Purchase : ";
            cin>>q;
            quantity += q;
            cout<<"Purchased "<<q<<" Mobiles of model "<<model<<endl;
            cout<<"STOCK LEFT = "<<quantity<<endl;
        }
        void sale(){
            int z;
                cout<<"Enter Number of mobiles to sell : ";
                cin>>z;
                if(z<=quantity){
                    quantity -= z;
                    cout<<"Stock was available so SOLD "<<z<<" Mobiles of Model "<<model<<endl;
                }else{
                    cout<<"Sorry Stock not Available!!"<<endl;
                }
                cout<<"STOCK LEFT = "<<quantity<<endl;
        }
};

int main(){
    int ch;
    Mobiles a;
    while(1){
        cout<<endl<<"-----MENU-----"<<endl;
        cout<<"1. Accept Mobile info"<<endl;
        cout<<"2. Sell a Moile"<<endl;
        cout<<"3. Purchase Mobiles"<<endl;
        cout<<"0. Exit"<<endl<<endl;
        cout<<"Enter option : ";
        cin>>ch;
        switch(ch){
            case 1:
                a.accMobiles();
                break;
            case 2:
                a.sale();
                break;
            case 3:
                a.purchase();
                break;
            case 0:
                exit(0);
                break;
            default:
                cout<<"INVALID OPTION!!"<<endl;
        }
    }
    return 0;
}