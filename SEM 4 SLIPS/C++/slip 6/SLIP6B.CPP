#include<iostream>
#include<conio.h>

using namespace std;

class Matrix{
    public:
        int ** p;
        int row, col, i, j;

    public:
        Matrix(){
            cout<<"Enter number of Rows: ";
            cin>>row;
            cout<<"Enter number of Columns: ";
            cin>>col;

            p = new int * [row];

            for(i=0;i<row;i++){
                p[i] = new int[col];
            }
            cout<<endl<<"Enter Values for Matrix : "<<endl;
            for(i = 0 ; i < row ; i++){
                for(j = 0 ; j < col ; j++){
                    cout<<"Enter "<<i+1<<" , "<<j+1<<" : ";
                    cin >> p[i][j];
                }
            }
        }
        void display(){
            for(i = 0 ; i < row ; i++){
                for(j = 0 ; j < col ; j++){
                    cout<<p[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void transpose(){
            for(i = 0 ; i < col ; i++){
                for(j = 0 ; j < row ; j++){
                    cout<<p[j][i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Matrix a;
    a.display();
    a.transpose();
    return 0;
}