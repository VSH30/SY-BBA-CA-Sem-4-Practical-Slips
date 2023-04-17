#include<iostream>
#include<conio.h>

using namespace std;

class Media{
    public:
        virtual void display()=0;
};

class NewsPaper:public Media{
    private:
        int N_Price, No_of_Pages;
        char N_Name[50], N_Editor[50];
    public:
        NewsPaper(){
            cout<<"Enter Name of Newspaper : "; cin>>N_Name;
            cout<<"Enter Editor of Newspaper : "; cin>>N_Editor;
            cout<<"Enter Price : "; cin>>N_Price;
            cout<<"Enter Number of Pages : "; cin>>No_of_Pages;
        }
        void display(){
            cout<<endl<<"Name of Newspaper : "<<N_Name;
            cout<<endl<<"Editor of Newspaper : "<<N_Editor;
            cout<<endl<<"Price : "<<N_Price;
            cout<<endl<<"Number of Pages : "<<No_of_Pages;
        }
};

class Magazine:public Media{
    private:
        int M_Price;
        char M_Name[50], M_Editor[50];
    public:
        Magazine(){
            cout<<"Enter Name of Magazine : "; cin>>M_Name;
            cout<<"Enter Editor of Magazine : "; cin>>M_Editor;
            cout<<"Enter Price of Magazine: "; cin>>M_Price;
        }
        void display(){
            cout<<endl<<"Enter Name of Magazine : "<<M_Name;
            cout<<endl<<"Enter Editor of Magazine : "<<M_Editor;
            cout<<endl<<"Enter Price of Magazine: "<<M_Price;
        }
};

int main(){
    NewsPaper n;
    Magazine m;

    cout<<endl<<"Newspaper Details:";
    n.display();
    cout<<endl<<"Magazine Details:";
    m.display();
    return 0;
}