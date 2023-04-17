#include<iostream>
#include<conio.h>

using namespace std;

inline int max(int a, int b){
	return(a>b)?a:b;
}
int main(){
	//clrscr();
	int x, y;
	cout<<"Enter x : ";
	cin>>x;
	cout<<"Enter y : ";
	cin>>y;

	int z=max(x,y);
	(z==x)?cout<<y:cout<<x;

	cout<<" is min"<<endl<<z<<" is max";
	getch();
	return 0;
}