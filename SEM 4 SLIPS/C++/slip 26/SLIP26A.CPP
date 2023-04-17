#include<iostream>
#include<iomanip>
using namespace std;

float avg(int a, int b, int c){
    return((a+b+c)/3);
}

float avg(float x, float y, float z){
    return((x+y+z)/3);
}
int main(){
    int x=6, y=3, z=12;
    float a=7.12, b=2.54, c=8.2;

    cout<<"Three Integers = "<<x<<"  "<<y<<"  "<<z<<endl;
    cout<<"Average of Integers = "<<avg(x,y,z)<<endl;

    cout<<"Three Floats = "<<a<<"  "<<b<<"  "<<c<<endl;
    cout<<"Average of Floats = "<<setprecision(4)<<avg(a,b,c)<<endl;

    return 0;
}