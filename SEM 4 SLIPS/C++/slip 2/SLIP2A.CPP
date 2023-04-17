/*Write a cpp to find the volume of cyl, cone and sphere
using function overlaoding*/
/*cyl pi r^2 h
cone pi r^2 h/3
sph 4/3 pi r^3*/

#include<iostream>
#include<conio.h>
#define pi 3.14

using namespace std;
//cyl
float vol(int r, int h){
	return(pi*r*r*h);
}
//sph
float vol(int r){
	return((4/3)*pi*r*r*r);
}
//cone
float cv(int r, int h){
	return(r*r*(h/3));
}

int main(){
	int rad, ht, ch;
	while(1){
		cout<<endl<<"----MENU----"<<endl;
		cout<<"1.Cylinder"<<endl;
		cout<<"2.Cone"<<endl;
		cout<<"3.Sphere"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<endl<<"Enter option : ";
		cin>>ch;

		switch(ch){
			case 1:
				cout<<"Enter rad : "; cin>>rad;
				cout<<"Enter height : "; cin>>ht;
				cout<<"Volume of cylinder = "<<vol(rad,ht)<<endl;
				break;
			case 2:
				cout<<"Enter rad : "; cin>>rad;
				cout<<"Enter height : "; cin>>ht;
				cout<<"Volume of Cone = "<<cv(rad,ht)<<endl;
				break;
			case 3:
				cout<<"Enter rad : "; cin>>rad;
				cout<<"Volume of Sphere = "<<vol(rad)<<endl;
				break;
			case 0:
				return 0;
				break;
			default:
				cout<<"INVALID!!!"<<endl;
				break;
		}
	}
	return 0;
}

