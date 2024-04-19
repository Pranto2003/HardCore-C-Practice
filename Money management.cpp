#include <iostream>
using namespace std;
class Money_management{
private:
    int income;
    int total=0;
public:
    int count=0;
    void management(){
        for(int i=1; i<=12; i++){
            count++;
            if(count==1){
                cout<<"Management for January"<<endl;
            }
            else if(count==2){
                cout<<"Management for February"<<endl;
            }
            else if(count==3){
                cout<<"Management for March"<<endl;
            }
            else if(count==4){
                cout<<"Management for April"<<endl;
            }
            else if(count==5){
                cout<<"Management for May"<<endl;
            }
            else if(count==6){
                cout<<"Management for June"<<endl;
            }
            else if(count==7){
                cout<<"Management for July"<<endl;
            }
            else if(count==8){
                cout<<"Management for August"<<endl;
            }
            else if(count==9){
                cout<<"Management for September"<<endl;
            }
            else if(count==10){
                cout<<"Management for October"<<endl;
            }
            else if(count==11){
                cout<<"Management for November"<<endl;
            }
            else if(count==12){
                cout<<"Management for December"<<endl;
            }
            cout<<"how much money have you make in this month :"<<" ";
            cin>>income;
           int w_n= income*0.7;
           int savings=income*0.2;
           int donation_temp=income*0.05;
           int donation_peo=income*0.05;
           total=total+savings;
           cout<<"You will use "<<w_n<<" taka for wants and needs"<<endl;
           cout<<"You will save "<<savings<<" taka this month"<<endl;
           cout<<"You will donate "<<donation_temp<<" taka in temple"<<endl;
           cout<<"You will donate "<<donation_peo<<" taka for the poors or orphan"<<endl;
           cout<<endl;


        }
    cout<<"Your total savings of 1 year is :"<<total<<endl;
    }

};
int main(){
Money_management mm;
mm.management();

return 0;
}
