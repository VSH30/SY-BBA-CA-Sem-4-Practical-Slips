#include<iostream>
#include<conio.h>

using namespace std;

class Number{
	private:
		static int cnt;
	public:
		void display(){
			cnt++;
			cout<<endl<<"Display has been called "<<cnt<<" times";
		}
};

int Number::cnt=0;

int main(){
	Number a;
	Number b;

	a.display();
	a.display();
	b.display();
	a.display();
	b.display();
	return 0;
}