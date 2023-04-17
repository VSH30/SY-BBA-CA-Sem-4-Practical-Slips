#include<iostream>

using namespace std;

class Distance{
    private:
        int meter, centimeter;
    public:
        Distance(){
            cout<<"Enter Meter : "; cin>>this->meter;
            cout<<"Enter centimeter : "; cin>>this->centimeter;
            if(this->centimeter>=100){
                this->meter += this->centimeter/100;
                this->centimeter %=100;
            }
        }
        void display(){
            cout<<this->meter<<":"<<this->centimeter<<" meter"<<endl;
        }
        int getcm(){
            return((this->meter*100) + this->centimeter);
        }
        void Larger(Distance obj){
            if(getcm()>obj.getcm())
                display();
            else
                obj.display();
        }
};

int main(){
    Distance a,b;
    cout<<"First Distance = ";
    a.display();
    cout<<"Second Distance = ";
    b.display();
    cout<<"Larger of Both = ";
    a.Larger(b);
    return 0;
}
