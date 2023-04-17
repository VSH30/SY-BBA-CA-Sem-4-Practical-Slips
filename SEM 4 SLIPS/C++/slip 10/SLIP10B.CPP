//city code city name pop
#include<iostream>
#include<conio.h>

using namespace std;

char v[30];

class City{
	private:
		int code, pop;
		char name[30];
	public:
		void accept(){
			cout<<endl<<"Enter city code: "; cin>>code;
			cout<<"Enter city name: "; cin>>name;
			cout<<"Enter Population: "; cin>>pop;
		}
		int getpop(){
			return pop;
		}
		void disp(){
			cout<<endl<<endl<<"Code = "<<code;
			cout<<endl<<"Name = "<<name;
			cout<<endl<<"Pop = "<<pop;
		}
		void check(){
			if(name==v)
				disp();
		}
};

void asc(City &x, City &y){
	City tmp;
	if(x.getpop()>y.getpop()){
		tmp = x;
		x = y;
		y = tmp;
	}
}

int main(){
	int n=0,i, c;
	cout<<endl<<"Enter number of City: ";
	cin>>n;
	City arr[30];
	for(i=0;i<n;i++){
		arr[i].accept();
	}
	for(i=0;i<n;i++){
		asc(arr[i], arr[i+1]);
	}
	for(i=0;i<n;i++){
		arr[i].disp();
	}
	cout<<endl<<"Enter name to search: ";
	cin>>v;
	for(i=0;i<n;i++){
		arr[i].check();
	}
	return 0;
}