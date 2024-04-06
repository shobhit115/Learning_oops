#include<iostream>
using namespace std;
class Number {
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a=num;
    }
    // Number(Number &num){
    //     a=num.a;
    // }
    void diaplay(){
        cout<<"The number is "<<a<<endl;
    }

};
int main(){
    Number a,b,c(45);
    b=Number(c);
    a.diaplay();
    b.diaplay();
    c.diaplay();
    // z1 should exactly resamble z
    return 0;

}