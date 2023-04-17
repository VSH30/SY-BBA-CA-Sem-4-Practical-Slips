#include<iostream>
#include<iomanip>
using namespace std;

class Time{
    private:
        int hours, minutes, seconds;
    public:
        friend istream &operator >> (istream &input, Time &a);
        friend ostream &operator << (ostream &output, Time a);
        int operator != (Time a){
            int t = (hours*60*60) + (minutes*60) + seconds;
            int t1 = (a.hours*60*60) + (a.minutes*60) + a.seconds;
            if(t != t1)
                return 1;
            else 
                return 0;
        }
};
istream &operator >> (istream &input, Time &a){
    cout<<"Enter hours : ";
    input>>a.hours;
    cout<<"Enter minutes : ";
    input>>a.minutes;
    cout<<"Enter seconds : ";
    input>>a.seconds;
    if(a.seconds>=60){
        a.minutes += a.seconds/60;
        a.seconds %= 60;
    }
    if(a.minutes>=60){
        a.hours += a.minutes/60;
        a.minutes %= 60;
    }
    return input;
}      
ostream &operator << (ostream &output, Time a){
    output<<setw(2)<<setfill('0')<<a.hours<<":";
    output<<setw(2)<<setfill('0')<<a.minutes<<":";
    output<<setw(2)<<setfill('0')<<a.seconds;
    return output;
}

int main(){
    Time a, b;
    cout<<"Time a : "<<endl;
    cin>>a;
    cout<<"__________________________________"<<endl;
    cout<<"Time b : "<<endl;
    cin>>b;
    cout<<"__________________________________"<<endl;
    cout<<"Time a = "<<a<<endl;
    cout<<"Time b = "<<b<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"(Time a != Time b) =  "<<(a!=b)<<endl;
    cout<<"__________________________________"<<endl;
    return 0;
}