#include<iostream>
#include<conio.h>

using namespace std;

class Worker{
	private:
		char name[50];
		int nohrs, payrate, salary;
	public:
		Worker(){
			cout<<"Enter Worker Name: "; gets(name);
			cout<<"Hours Worked(Number): "; cin>>nohrs;
		}

		void tsal(int x=100){
			payrate=x;
			salary = nohrs*payrate;
			
			cout<<endl<<"Total hours worked= "<<nohrs;
			cout<<endl<<"Payrate = "<<payrate;
			cout<<endl<<"Salary of Worker "<<name<<" is "<<salary;
		}
};

main(){
	Worker vsh;
	vsh.tsal();
	return 0;
}