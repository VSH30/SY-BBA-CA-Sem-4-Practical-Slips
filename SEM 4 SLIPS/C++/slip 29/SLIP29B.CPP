#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class VisitingStaff{
    private:
	char **subjects, *name;
	int hrs, salary, nosubs;
    public:
	VisitingStaff(char nn[30], int h, int n, char arr[10][30]);
	void disp();
};

void VisitingStaff::disp(){
	cout<<"Name = "<<name<<endl;
	cout<<"No of hrs = "<<hrs<<endl;
	cout<<"No of subs = "<<nosubs<<endl;
	cout<<"Salary = "<<salary<<endl;
	cout<<endl<<"Subjects : "<<endl;
	for(int i=0;i<nosubs;i++)
		cout<<subjects[i]<<endl;
}

VisitingStaff::VisitingStaff(char nn[30], int h, int n, char arr[10][30]){
	subjects = new char*[n];
	nosubs = n;
	for(int i=0;i<n;i++){
		subjects[i]= new char[strlen(arr[i])+1];
		subjects[i]=arr[i];
	}
	name = new char[strlen(nn)+1];
	name=nn;
	hrs=h;
	salary = hrs*300;
}


int main(){
	//clrscr();
    char subs[5][30]={"Networking","CPP","Operating System","Adv PHP","jQuery"};
    VisitingStaff vsh("Vishal Hanchnoli",5,5,subs);
    vsh.disp();
    getch();
    return 0;
}