#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        Date(){
            cout<<"Enter Day: "; cin>>day;
            cout<<"Enter month: "; cin>>month;
            cout<<"Enter year: "; cin>>year;
        }
        void display(){
            cout<<endl<<"Entered Date = "<<setw(2)<<setfill('0')<<day<<"-"<<setw(2)<<setfill('0')<<month<<"-"<<setw(4)<<setfill('0')<<year<<endl;
            cout<<endl<<"Date in Required Format = "<<setw(2)<<setfill('0')<<day<<"-";
            if(month==1)
                cout<<"Jan";
            else if(month==2)
                cout<<"Feb";
            else if(month==3)
                cout<<"March";
            else if(month==4)
                cout<<"April";
            else if(month==5)
                cout<<"May";
            else if(month==6)
                cout<<"June";
            else if(month==7)
                cout<<"July";
            else if(month==8)
                cout<<"Aug";
            else if(month==9)
                cout<<"Sept";
            else if(month==10)
                cout<<"Oct";
            else if(month==11)
                cout<<"Nov";
            else if(month==12)
                cout<<"Dec";
            cout<<"-"<<setw(4)<<setfill('0')<<year<<endl;
        }
};

int main(){
    Date x;
    x.display();
    return 0;
}