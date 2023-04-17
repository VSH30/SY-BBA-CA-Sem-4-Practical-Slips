#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class Machine{
    private:
        int Machine_id, Price;
        char Machine_Name[30];
    public:
        Machine(){}
        Machine(int id, int p, char name[30]){
            Machine_id = id;
            Price = p;
            strcpy(Machine_Name,name);
        }
        void display(){
            cout<<"|"<<setw(3)<<Machine_id<<"|"<<setw(30)<<Machine_Name<<"|"<<setw(7)<<Price<<"|"<<endl;
        }
};

int main(){
    Machine a(101,92000,"Mach1");
    Machine b(102,65000,"Mach2");
    Machine c(103,97000,"Mach3");
    Machine d(104,43000,"Mach4");

    for(int i=0;i<44;i++)
        cout<<"-";
    cout<<endl;
    cout<<"|"<<setw(3)<<"ID"<<"|"<<setw(30)<<"Machine_Name"<<"|"<<setw(7)<<"Price"<<"|"<<endl;
    for(int i=0;i<44;i++)
        cout<<"-";
    cout<<endl;
    
    a.display();
    b.display();
    c.display();
    d.display();
    return 0;
}