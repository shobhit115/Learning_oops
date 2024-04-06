#include<iostream>
using namespace std;
class shop{
    int itemId[100]={0};
    int itemPrice[100]={0};
    int counter=0;
    public:
    void getItem();
    void display();
};
void shop:: getItem(){
        cout<<"enter id:";
        cin>>itemId[counter];
        cout<<"enter item price:";
        cin>>itemPrice[counter];
    counter++;
}
void shop::display(){
    for(int i=0;i<=counter;i++){
        cout<<"item ID-->"<<itemId[i]<<"\t item Price-->"<<itemPrice[i]<<endl;
    }
}
int main(){
    shop AapniDkan;
    AapniDkan.getItem();
    AapniDkan.getItem();
    AapniDkan.getItem();
    AapniDkan.getItem();
    AapniDkan.display();
}