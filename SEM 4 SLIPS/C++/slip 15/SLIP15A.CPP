#include<iostream>

using namespace std;

class Fraction{
    private:
        int num, denum;
    public:
        Fraction(){}
        Fraction(int x, int y){
            num = x;
            denum = y;
        }
        void display(){
            cout<<num<<"/"<<denum<<endl;
        }
        Fraction operator+(Fraction obj){
            obj.num = num*obj.denum + denum*obj.num;
            obj.denum = denum*obj.denum;
            return obj;
        }
};

int main(){
    Fraction a(3,5), b(1,4), c;
    cout<<"Fraction a = ";
    a.display();
    cout<<"Fraction b = ";
    b.display();
    c = a + b;
    cout<<"Fraction sum = ";
    c.display();
    return 0;
}