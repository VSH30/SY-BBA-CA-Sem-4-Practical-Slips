#include<iostream>
#include<conio.h>

using namespace std;

class Strrr{
	private:
		char str[50];
	public:
		Strrr(){
			cout<<"Enter a string : ";
			gets(str);
		}
		void display(){
			cout<<endl<<"Current String: "<<str<<endl;
		}
		void replace(char ch1,char ch2);
};

void Strrr::replace(char ch1, char ch2='x'){
	int i;
	for(i=0;i<sizeof(str);i++){
		if(str[i]==ch1)
			str[i]=ch2;
	}
}

int main(){
	char c;
	Strrr s;
	s.display();
	cout<<endl<<"Enter char to replace: ";
	cin>>c;
	s.replace(c);
	s.display();
	return 0;
}
