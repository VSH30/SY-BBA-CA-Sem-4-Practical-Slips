#include <iostream>

using namespace std;

class Complex{
    private:
        int real, img;
    public:
        Complex(int x, int y){
            real = x;
            img = y;
        }
        Complex(){
            cout<<"Enter real : "; cin>>real;
            cout<<"Enter Img : "; cin>>img;
        }
        void disp(){
            cout<<real<<" + i"<<img<<endl;
        }
        friend Complex add(Complex x, Complex y);
};

Complex add(Complex x, Complex y){
    return Complex((x.real + y.real),(x.img + y.img));
}

int main(){
    cout<<"First Complex NUM: "<<endl;
    Complex a;
    cout<<"Second Complex NUM: "<<endl;
    Complex b;

    cout<<endl<<"First Complex NUM = ";
    a.disp();
    cout<<"Second Complex NUM: ";
    b.disp();
    cout<<endl<<"Sum of First and Second Complex NUM = ";
    add(a,b).disp();

    return 0;
}