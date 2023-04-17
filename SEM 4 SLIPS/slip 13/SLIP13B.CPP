#include<iostream.h>
#include<conio.h>

class Cuboid{
	private:
		float length, breadth, height;
	public:
		void setvalues(float a,float b,float c){
			length = a;
			breadth = b;
			height = c;
		}

		void getvalues(){
			cout<<endl<<"Cuboid data: "<<endl;
			cout<<"Length = "<<length<<endl;
			cout<<"Breadth = "<<breadth<<endl;
			cout<<"Height = "<<height<<endl;
		}

		inline float volume(){
			return(length*breadth*height);
		}

		inline float area(){
			return(2*((length*breadth) + (breadth*height) + (length*height)));
		}
};

void main(){
	float x, y, z;
	clrscr();
	cout<<"Enter breadth : "; cin>>x;
	cout<<"Enter Breadth : "; cin>>y;
	cout<<"Enter Height : "; cin>>z;

	Cuboid vsh;
	vsh.setvalues(x,y,z);
	vsh.getvalues();
	cout<<endl<<"Volume = "<<vsh.volume();
	cout<<endl<<"Surface area = "<<vsh.area();
	getch();
}