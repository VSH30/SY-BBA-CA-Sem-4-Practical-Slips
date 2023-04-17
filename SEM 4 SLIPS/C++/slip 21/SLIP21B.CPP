#include<iostream>

using namespace std;

class Point{
    private:
        int x, y;
    public:
        void accPoint(){
            cout<<"Enter x coordinate: ";
            cin>>x;
            cout<<"Enter y coordinate: ";
            cin>>y;
        }
        void display(){
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        Point operator + (Point o){
            Point z;
            z.x = x + o.x;
            z.y = y + o.y;
            return z;
        }
        Point operator * (int n){
            Point z;
            z.x = x*n;
            z.y = y*n;
            return z;
        }
        void operator - (){
            -x;
            -y;
        }
};

int main(){
    Point p1, p2;
    int n;
    cout<<"Point p1: "<<endl;
    p1.accPoint();
    cout<<"Point p2: "<<endl;
    p2.accPoint();

    cout<<endl<<"P1 = "; p1.display();
    cout<<"P2 = "; p2.display();
    
    cout<<endl<<"P1 + P2 = ";
    (p1+p2).display();

    cout<<endl<<"Enter n to multiply : ";
    cin>>n;
    cout<<"P1 * "<<n<<" = ";
    (p1*n).display();

    cout<<endl<<"-p1 = ";
    -p1;
    p1.display();    

    return 0;
}