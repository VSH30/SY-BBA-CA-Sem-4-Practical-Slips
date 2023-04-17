#include<iostream>
#include<conio.h>

using namespace std;

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

int main(){
	int x, y;

	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Ener second number: ";
	cin>>y;
	cout<<"Numbers are "<<x<<" and "<<y<<endl;
	swap(x,y);
	cout<<"Numbers after swapping are "<<x<<" and "<<y<<endl;
	return 0;
}