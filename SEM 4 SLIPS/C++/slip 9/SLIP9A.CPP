#include<iostream.h>
#include<conio.h>

class Person{
	char Name[20];
	char Addr[30];
	float Salary;
	float tax_amount;

	public:
		Person(){
			cout<<"Enter person name: "; cin>>Name;
			cout<<"Enter Addr: "; cin>>Addr;
			cout<<"Enter Salary: "; cin>>Salary;

			if(Salary<=20000)
				tax_amount = Salary*(0/100);
			else if(20000<Salary & Salary<=40000)
				tax_amount = Salary*(5/100);
			else if(Salary>40000)
				tax_amount = Salary*(10/100);
		}

		void getdata(){
			cout<<endl<<"Person = "<<Name;
			cout<<endl<<"Addr = "<<Addr;
			cout<<endl<<"Salary = "<<Salary;
			cout<<endl<<"Tax amount = "<<tax_amount;
		}
};

void main(){
	clrscr();
	Person vsh;
	vsh.getdata();
	getch();
}