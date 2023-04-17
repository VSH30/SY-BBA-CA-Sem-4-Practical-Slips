#include<iostream>

using namespace std;

class MyMatrix{
    private:
        int **mat, row, col;
    public:
        MyMatrix(){
            cout<<"Enter number of Rows : ";
            cin>>row;
            cout<<"Enter number of Columns : ";
            cin>>col;

            mat = new int*[row];
            for(int i=0;i<row;i++)
                mat[i] = new int[col];
            
            cout<<"Enter values : "<<endl;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<"Enter "<<i<<","<<j<<" : ";
                    cin>>mat[i][j];
                }
            }
        }
        void display(){
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<" "<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void operator - (){
            for(int i=0;i<col;i++){
                for(int j=0;j<row;j++){
                    cout<<" "<<mat[j][i]<<" ";
                }
                cout<<endl;
            }
        }
        void operator ++(){
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    mat[i][j]++;
                }
            }
        }
};

int main(){
    MyMatrix a;
    
    cout<<"Matrix:"<<endl;
    a.display();

    cout<<"Transpose : "<<endl;
    -a;

    cout<<"Incremented Matrix: "<<endl;
    ++a;
    a.display();

    return 0;
}