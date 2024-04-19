#include <iostream>
using namespace std;
class Manager
{
protected:
    string territoryName;
    string managerName;
    string salesman;
    int managerID,amount;
public:
    Manager( int a, string b)
    {
        managerID=a;
        managerName=b;
        cout<<"Manager Name :"<<managerName<<endl;
        cout<<"Manager ID is :"<<managerID<<endl;
    }
    void showdetails(string c)
    {
        territoryName=c;
        cout<<"Manager's Territory is :"<<territoryName<<endl;

    }
    void increment_salary(string d, int e)
    {
        salesman=d;
        amount=e;
        cout<<"Salary increased of :"<<salesman<<endl;
        cout<<"Increased amount :"<<amount<<endl;

    }
    ~Manager()
    {
        cout<<"Manager Destructor called "<<endl;
    }
};
class Salesman
{
protected:
    string salesArea;
    string productName;
    int Manager_id;
    string salesmanName;
public:
    Salesman( string x, int z)
    {
        Manager_id=z;
        salesmanName=x;
        cout<<"Manager's ID :"<<Manager_id<<endl;
        cout<<"Salesman's name :"<<salesmanName<<endl;
    }
    void showdetails(string g, string h)
    {
        salesArea=g;
        productName=h;
        cout<<"Sales man's specific area :"<<salesArea<<endl;
        cout<<"Sales man's product name :"<<productName<<endl;
    }


    ~Salesman()
    {
        cout<<"Salesman destructor called "<<endl;
    }


};
class Employee:public Manager, public Salesman
{
protected:
    int employeeID;
    string employeeName;
    double salary;
public:

    Employee(int j, string i,int a, string b, string x, int z):Manager( a,b),Salesman(x,z)
    {
        employeeID=j;
        employeeName=i;
        cout<<"Employee's ID :"<<employeeID<<endl;
        cout<<"Employee's name :"<<employeeName<<endl;
    }

    void showDetails( int k)
    {

        salary=k;
        cout<<"Employee's salary :"<<salary<<endl;
    }
    ~Employee()
    {
        cout<<"Employee's destructor called"<<endl;
    }

};


int main()
{
Manager man(4242,"Pranto");
man.showdetails("Banani");
Salesman sale("Abdullah",4242);
sale.showdetails("A block", "Pizza");
Employee emp( 6565,"Udoy", 4242, "Pranto","Abdullah",4242);
emp.showDetails(5692.842);






    return 0;
}
