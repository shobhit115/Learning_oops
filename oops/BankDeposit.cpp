#include<iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnvalue;
    public:
    BankDeposit(){}
    BankDeposit(int p,int y,int r);
    BankDeposit(int p,int y,float r);
    void show(){
        cout<<endl;
        cout<<"Principal amount was "<<principal<<endl<<"Return value after "<<years<<" years is "<<returnvalue<<endl;
    }

};
BankDeposit::BankDeposit(int p,int y,int r){

        principal=p;
        years=y;
        interestRate=float(r)/100;
        returnvalue=principal;
        for (int i=0;i<y;i++){
            returnvalue*=(1+interestRate);
        }
    }
BankDeposit::BankDeposit(int p,int y,float r){
        principal=p;
        years=y;
        interestRate=r;
        returnvalue=principal;
        for (int i=0;i<y;i++){
            returnvalue*=(1+r);
        }
    }
int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of principal value, years and interst Rate"<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();
    cout<<"Enter the value of principal value, years and interst Rate"<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();
    return 0;
}