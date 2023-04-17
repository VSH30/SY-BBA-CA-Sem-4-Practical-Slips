#include<iostream>

using namespace std;

class College{
    private:
        char College_Name[30], University[30];
        int College_Id, Establishment_Year;
    public:
        friend istream &operator >> (istream &input, College &a);
        friend ostream &operator << (ostream &output, College a);
};

istream &operator >> (istream &input, College &a){
    cout << "Enter College ID : ";
    input >> a.College_Id;
    cout << "Enter College Name : ";
    input >> a.College_Name;
    cout << "Enter Establishment Year : ";
    input >> a.Establishment_Year;
    cout << "Enter Univerity : ";
    input >> a.University;
    return input;
}
ostream &operator << (ostream &output, College a){
    output<<"College ID = "<<a.College_Id<<endl;
    output<<"College Name = "<<a.College_Name<<endl;
    output<<"Establishment Year = "<<a.Establishment_Year<<endl;
    output<<"University = "<<a.University<<endl;
    return output;
}

int main(){
    College atss;

    cin>>atss;

    cout<<"___________________________________"<<endl;

    cout<<atss;

    return 0;
}