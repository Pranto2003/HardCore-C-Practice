#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string name;
    int Size;
    string insurance;
public:
    int Tire_count;
    void setVehicledata(string a, int b, string c, int d)
    {
        name=a;
        Size=b;
        insurance=c;
        Tire_count=d;
    }
    void getVehicledata()
    {
        cout<<"Your vehicle name is :"<<name<<endl;
        cout<<"Your car size is : "<<Size <<" feet"<<endl;
        cout<<"Your insurance is :"<<insurance<<endl;
        cout<<"Your Tire count is :"<<Tire_count<<endl;


    }

};
class Insurance_Company
{
protected:
    int insurances;
public:
    void setInsurance_Companydata(int e)
    {
        insurances=e;
    }
    void getInsurance_Companydata()
    {
        cout<<"You got "<<insurances<<" insurances"<<endl;

    }

};
class Insurance: public Insurance_Company
{
protected:
    int Insurance_Number;
public:
    string vehicle_type;
    void setInsurancedata(int f, string g )
    {
        Insurance_Number=f;
        vehicle_type=g;
    }
    void getInsurancedata()
    {
        cout<<"Your Insurance number is :"<<Insurance_Number<<endl;
        cout<<"Your Vehicle Type is :"<<vehicle_type<<endl;

    }

};
class Car:public Vehicle, public Insurance
{
protected:
    int car_id;
public:
    string car_model;
    void setCardata(int h, string i)
    {
        car_id=h;
        car_model=i;
    }
    void getCardata()
    {
        cout<<"Your Car id is :"<<car_id<<endl;
        cout<<"Your Car model is :"<<car_model<<endl;

    }

};
class Bike:public Vehicle, public Insurance
{
protected:
    int bike_id;
public:
    string bike_model;
    void setBikedata(int j, string k)
    {
        bike_id=j;
        bike_model=k;
    }
    void getBikedata()
    {
        cout<<"Your Bike Id is :"<<bike_id<<endl;
        cout<<"Your Bike Model is :"<<bike_model<<endl;

    }

};

int main()
{
    Vehicle veh;
    Insurance_Company Ic;
    Insurance Inc;
    Car cr;
    Bike bk;
    veh.setVehicledata("Bus", 7, "cgf3u", 6);
    veh.getVehicledata();
    Ic.setInsurance_Companydata(4);
    Ic.getInsurance_Companydata();
    Inc.setInsurance_Companydata(2);
    Inc.getInsurance_Companydata();
    Inc.setInsurancedata(34727, "Ferrari");
    Inc.getInsurancedata();
    cr.setVehicledata("truck", 5, "djaue3", 3);
    cr.getVehicledata();
    cr.setInsurance_Companydata(6);
    cr.getInsurance_Companydata();
    cr.setInsurancedata(62373, "Buggati");
    cr.getInsurancedata();
    cr.setCardata(716152, "j20um4");
    cr.getCardata();
    bk.setVehicledata("Bike", 4, "gajjs7", 1);
    bk.getVehicledata();
    bk.setInsurance_Companydata(5);
    bk.getInsurance_Companydata();
    bk.setInsurancedata(44112, "R15");
    bk.getInsurancedata();
    bk.setBikedata(7612, "R15sPro");
    bk.getBikedata();
    return 0;
}
