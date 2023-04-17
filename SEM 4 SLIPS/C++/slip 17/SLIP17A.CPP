#include<iostream>
#include<iomanip>
using namespace std;

class MyMatrix{
    private:
        int **m, row, col;
    public:
        MyMatrix(int x, int y){
            row=x;
            col=y;
            m = new int*[row];
            for(int i=0;i<row;i++)
                m[i] = new int[col];
            
            cout<<"Enter Values: "<<endl;
            for(int i=0;i<row;i++)
                for(int j=0;j<col;j++){
                    cout<<"Enter "<<i<<","<<j<<" : ";
                    cin>>m[i][j];
                }
        }
        void display(){
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<setw(4)<<m[i][j];
                }
                cout<<endl;
            }
        }
        MyMatrix operator - (MyMatrix obj){
            for(int i=0;i<row;i++)
                for(int j=0;j<col;j++){
                    obj.m[i][j]=m[i][j]-obj.m[i][j];
                }
            
            return obj;
        }
};

int main(){
    int row, col;
    cout<<"Enter rows : "; cin>>row;
    cout<<"Enter col : "; cin>>col;
    cout<<"Values For matrix A :"<<endl;
    MyMatrix a(row,col);
    cout<<"Values For matrix B :"<<endl;
    MyMatrix b(row,col);
    cout<<endl<<"Matrix A : "<<endl;
    a.display();
    cout<<endl<<"Matrix B : "<<endl;
    b.display();
    cout<<endl<<"Matrix Sub : "<<endl;
    (a-b).display();
    return 0;
}