#include <iostream>
using namespace std;
class Savings
{
protected:
    string name,NID,phone;
    int Total_amount=0;
    int monthly_deposit;
public:
    string user_name, NID_Card, phone_number;
    int regular_monthly_deposit;
    Savings()
    {
        for(int i=1; i<=2; i++)
        {
            cout<<"This is our monthly deposit service"<<endl;
            cout<<"Enter your name :"<<" ";
            cin>>user_name;
            cout<<"Enter your NID card number :"<<" ";
            cin>>NID_Card;
            cout<<"Enter your phone number :"<<" ";
            cin>>phone_number;
            cout<<"How much money you want to deposit this month :"<<" ";
            cin>>regular_monthly_deposit;
            this->name=user_name;
            this->NID=NID_Card;
            this->phone=phone_number;
            this->monthly_deposit=regular_monthly_deposit;
            Total_amount=Total_amount+regular_monthly_deposit;
            cout<<"Today you have deposited "<<regular_monthly_deposit<<" taka"<<endl;
            cout<<"Now your total balance is :"<<Total_amount<<" taka"<<endl;
            cout<<endl;
        }
    }
};

class Cashout:protected Savings
{
protected:
    int amount;
public:
    Cashout()
    {

        cout<<endl;
        cout<<"This is our cash out service"<<endl;
        cout<<"Enter your name :"<<" ";
        cin>>user_name;
        cout<<"Enter your NID card number :"<<" ";
        cin>>NID_Card;
        cout<<"Enter your phone number :"<<" ";
        cin>>phone_number;
        cout<<"How much money you want to cash out :"<<" ";
        cin>>amount;
        this->name=user_name;
        this->NID=NID_Card;
        this->phone=phone_number;
        this->amount=amount;
        Total_amount=Total_amount-amount;
        if(Total_amount>amount)
        {
            cout<<"Today you have cashed out "<<amount<<" taka"<<endl;
            cout<<"Now your total balance is :"<<Total_amount<<" taka"<<endl;
        }

        else if(amount>Total_amount)
        {
            cout<<"You don't have sufficient balance "<<endl;
        }

    }
};

int main()
{
    cout<<"Thanks for being with us"<<endl;
        cout<<"Now we are providing you Monthly Deposit & Cashout Service "<<endl;
        cout<<"Please give your information below"<<endl;
        Cashout cash;
        cout<<endl;
        cout<<"Thanks for choosing us"<<endl;
        cout<<"Customer's privacy and satisfaction is our only goal"<<endl;

    return 0;
}
