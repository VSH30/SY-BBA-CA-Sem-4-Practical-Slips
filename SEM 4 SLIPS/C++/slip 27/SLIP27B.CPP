#include<iostream>
#include<string.h>
//#include<conio.h>
using namespace std;

class Travels{
    protected:
	int T_No;
	char Company_Name[30];
    public:
	void accTravel(int t, char cname[30]){
	    T_No = t;
	    strcpy(Company_Name,cname);
	}
};

class Route:public Travels{
    protected:
	int Route_id;
	char Source[30], Destination[30];
    public:
	void setRoute(int t, char cname[30], int id, char sor[30], char dest[30]){
	    accTravel(t, cname);
	    Route_id = id;
	    strcpy(Source,sor);
	    strcpy(Destination,dest);
	}
};

class Reservation:public Route{
    private:
	int Number_of_seats, Fare, Travel_Date;
	char Travels_Class[20];
    public:
	void accReservation(int t, char cname[30], int id, char sor[30], char dest[30], int nos, char tc[20], int fa, int d){
	    setRoute(t, cname, id, sor, dest);
	    Number_of_seats = nos;
	    Fare = fa;
	    Travel_Date = d;
	    strcpy(Travels_Class,tc);
	}
	void disp(){
	    cout<<endl;
	    cout<<"|"<<T_No;
	    cout<<"|"<<Company_Name;
	    cout<<"|"<<Route_id;
	    cout<<"|"<<Source;
	    cout<<"|"<<Destination;
	    cout<<"|"<<Number_of_seats;
	    cout<<"|"<<Travels_Class;
	    cout<<"|"<<Fare;
	    cout<<"|"<<Travel_Date;
	    cout<<"|"<<endl;
	}
	int getdate(){
	    return Travel_Date;
	}
};

int main(){
    Reservation arr[4];
    arr[0].accReservation(1,"ABC Travels",91,"Pune","Mumbai",5,"First Class",1500,21);
    arr[1].accReservation(2,"DEF Travels",72,"Chennai","Kolkata",8,"Sleeper",3200,15);
    arr[2].accReservation(3,"GHI Travels",68,"Delhi","Gujarat",3,"Semi-Sleeper",1200,8);
    arr[3].accReservation(4,"LMN Travels",37,"Rajasthan","Goa",10,"First Class",4000,15);

    cout<<endl;
    cout<<"|"<<"T_No";
    cout<<"|"<<"Company_Name";
    cout<<"|"<<"Route_id";
    cout<<"|"<<"Source";
    cout<<"|"<<"Destination";
    cout<<"|"<<"Number_of_seats";
    cout<<"|"<<"Travels_Class";
    cout<<"|"<<"Fare";
    cout<<"|"<<"Travel_Date";
    cout<<"|"<<endl;

    for(int i=0;i<4;i++)
	arr[i].disp();

    cout<<endl<<"Reservations made on 15th : "<<endl;
    for(int i=0;i<4;i++){
	if(arr[i].getdate()==15)
	    arr[i].disp();
    }
    //getch();
    return 0;
}