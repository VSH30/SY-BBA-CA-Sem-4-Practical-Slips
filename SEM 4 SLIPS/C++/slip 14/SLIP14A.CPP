#include<iostream.h>
#include<conio.h>


#define pi 3.14

inline float area(int r){
	return(pi*r*r);
}
inline float circumference(int r){
	return(2*pi*r);
}
inline int dia(int r){
	return(2*r);
}

void main(){
	int r;
	clrscr();
	cout<<"Enter Radius : ";
	cin>>r;
	cout<<"Area = "<<area(r)<<endl;
	cout<<"Circumference = "<<circumference(r)<<endl;
	cout<<"Diameter = "<<dia(r);
	getch();
}