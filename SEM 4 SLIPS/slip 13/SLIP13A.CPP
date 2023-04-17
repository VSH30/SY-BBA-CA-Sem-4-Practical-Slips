#include<iostream>
#include<conio.h>

using namespace std;

class Product{
    private:
        int Product_id, Qty, Price;
        char Name[30];
    public:
        static int products;
    public:
        void accept(){
            products++;
            //cout<<endl<<"Enter Product "<<products<<" Data : "<<endl;
            cout<<"Enter ID : "; cin>>Product_id;
            cout<<"Enter Name : "; cin>>Name;
            cout<<"Enter Qty : "; cin>>Qty;
            cout<<"Enter Price : "; cin>>Price;
        }
        void display(){
            cout<<"ID = "<<Product_id<<endl;
            cout<<"Name = "<<Name<<endl;
            cout<<"Qty = "<<Qty<<endl;
            cout<<"Price = "<<Price<<endl;
        }
};

int Product::products=0;

int main(){
    int n,i;
    Product obj[15];
    cout<<"Enter number of Products :  "; cin>>n;
    for(i=0;i<n;i++){
        cout<<endl<<"Enter Product "<<i+1<<" Data : "<<endl;
        obj[i].accept();
    }
    for(i=0;i<n;i++){
        cout<<endl<<"Product "<<i+1<<" Details : "<<endl;
        obj[i].display();
    }
    cout<<endl<<"Total Objects created of Product Class = "<<Product::products;
    
    return 0;
}
