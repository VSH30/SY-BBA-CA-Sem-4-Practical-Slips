#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Movie{
    private:
        int yr, bd;
        char mn[50], dr[30];
    public:
        friend istream &operator >> (istream &in, Movie o);
        friend ostream &operator << (ostream &out, Movie o);
};

istream &operator >> (istream &in, Movie o){
    cout<<"Enter Movie Name : "; in>>o.mn;
    cout<<"Enter Year : "; in>>o.yr;
    cout<<"Enter Budget : "; in>>o.bd;
    cout<<"Enter Director Name : "; in>>o.dr;
    return in;
}

ostream &operator << (ostream &out, Movie o){
    out<<o.mn<<ends<<o.yr<<ends<<o.bd<<ends<<o.dr;
    return out;
}

int main(){
    int n;
    cout<<"Enter Number of Movies : "; cin>>n;
    Movie arr[10];

    fstream f("Movie.txt",ios::in | ios::out);

    for(int i=0;i<n;i++){
        cout<<"-----------MOVIE DATA----------"<<endl;
        cin>>arr[i];    
        f<<arr[i]<<endl;
    }

    f.seekg(0,ios::beg);
    
    cout<<"--------------Display-------------"<<endl;

    int y, b;
    char nam[50], d[30];

    while(!f.eof()){
        f>>nam>>y>>b>>d;
        cout<<nam<<"\t"<<y<<"\t"<<b<<"\t"<<d<<endl;
    }
    
    return 0;
}