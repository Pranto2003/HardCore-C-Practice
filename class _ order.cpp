#include <iostream>
using namespace std;
class Order{
private:
    int Order_Number;
    string customer_location;
    int Discount_percentage;
    int price;


public:
    float payable;

    void setdata(){
        cout<<"Enter your order number"<<endl;
        cin>>Order_Number;
        cout<<"Your Price"<<endl;
        cin>>price;
        cout<<"Discount percentage"<<endl;
        cin>>Discount_percentage;
        cout<<"Customer's Location"<<endl;
        cin>>customer_location;


    }
public:

     void getdata(){
         int a=(price*Discount_percentage);
         int b=a/100;
         int amount=b+50;
    cout<<"Discount Percentage : "<<Discount_percentage<<endl;
    cout<<"Your order number is :"<<Order_Number<<endl;
    cout<<"Customer's Location is :"<<customer_location<<endl;
    cout<<"Product Price is :"<<price<<endl;
    cout<<amount<<endl;


    }
};

int main(){
Order obj;
obj.setdata();
obj.getdata();

return 0;
}
