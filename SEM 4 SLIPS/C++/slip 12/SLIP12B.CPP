#include<iostream>
#include<iomanip>
using namespace std;

class Weight{
    private:
        int kg, gm;
    public:
        void accWeight(){
            cout<<"Enter KG : ";
            cin>>kg;
            cout<<"Enter GM : ";
            cin>>gm;
            if(gm>=1000){
                kg += gm/1000;
                gm %= 1000;
            }
        }
        void disp(){
            cout<<kg<<":"<<setfill('0')<<setw(3)<<gm<<" Kg"<<endl;
        }
        Weight operator +=(Weight obj){
            kg += obj.kg;
            gm += obj.gm;
            if(gm>=1000){
                kg += gm/1000;
                gm %= 1000;
            }
            return *this;
        }
        int operator == (Weight obj){
            int x = (kg*1000)+gm;
            int y = (obj.kg*1000)+obj.gm;
            if(x>y){
                return 0;
            }else if(x<y){
                return -1;
            }else{
                return 1;
            }
        }
};

int main(){
    Weight a,b;
    cout<<"First Weight : "<<endl;
    a.accWeight();
    cout<<"Second Weight : "<<endl;
    b.accWeight();

    cout<<endl<<"W1 = ";
    a.disp();
    cout<<"W2 = ";
    b.disp();
    
    cout<<endl;
    if((a==b)==1){
        cout<<"W1 == W2"<<endl;
    }else if((a==b) == 0){
        cout<<"W1 > W2"<<endl;
    }else{
        cout<<"W1 < W2"<<endl;
    }
    
    cout<<endl;
    cout<<"After (W1 += W2) W1 = ";
    (a+=b).disp();

    return 0;
}