#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

class Time{
    private:
        int hr, min, sec;
    public:
        Time(){
            cout<<"Enter hours : "; cin>>hr;
            cout<<"Enter minutes : "; cin>>min;
            cout<<"Enter seconds : "; cin>>sec;
        }
        void format(){
            cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw(2)<<setfill('0')<<sec;
        }
        int tosec(){
            return((hr*60*60) + (min*60) + sec);
        }
        void diff(Time a, Time b){
            int x = a.tosec();
            int y = b.tosec();
            int diff = (x>y)?(x-y):(y-x);
            
            int s = diff%60;
            diff = diff/60;
            int m = diff%60;
            diff = diff/60;
            int h = diff%60;
            cout<<endl<<"Difference between ";
            a.format();
            cout<<" and ";
            b.format();
            cout<<" = ";
            cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s;
        }
};

int main(){
    Time ob1, ob2;
    cout<<endl<<"First time = ";
    ob1.format();
    cout<<endl<<"Second time = ";
    ob2.format();

    ob1.diff(ob1,ob2);
    return 0;
}