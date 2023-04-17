#include<iostream>
#include<conio.h>

using namespace std;

class Rectangle;

class Square{
	private:
		int side;
	public:
		Square(){
			cout<<"Enter Side of Square: ";
			cin>>side;
		}
		int area(){
			return(side*side);
		}
		friend void compare(Square,Rectangle);
};

class Rectangle{
	private:
		int length, breadth;
	public:
		Rectangle(){
			cout<<"Enter length: ";
			cin>>length;
			cout<<"Enter breadth: ";
			cin>>breadth;
		}
		int area(){
			return(length*breadth);
		}
		friend void compare(Square, Rectangle);
};

void compare(Square x, Rectangle y){
	int sq, rc;
	sq = x.area();
	rc = y.area();
	cout<<"Area of Square = "<<sq<<endl;
	cout<<"Area of Rectangle = "<<rc<<endl;

	cout<<endl<<"Area of Square("<<sq<<")";
	if(sq>rc)
		cout<<" is greater than ";
	else if(sq==rc)
		cout<<" is equal to ";
	else
		cout<<" is lower than ";
	cout<<"area of Rectangle("<<rc<<")";
}

int main(){

	Square s;
	Rectangle r;

	compare(s,r);

	return 0;
}
