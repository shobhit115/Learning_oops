#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void read();
    bool check();
    void display();
    void ones_c();
};
void binary :: read(){
    cout<<"enter binary number : ";
    cin>>s;
    if(s=="hack"){
        for(int i=0;i<10000;i++){
            cout<<1<<0;
        }
        cout<<endl<<"data hacked ----------XXXXXXX-------->>>>"<<endl;
        exit(0);
    }
    check();
}
bool binary :: check(){
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"entered data is not binary"<<endl;
            return 0;

        }
    }
    return 1;
}
void binary :: display(){
    if(check()==0) return;
    cout<<s<<endl;
}
void binary :: ones_c(){
    if(check()==0) {
        cout<<"ones compliment is a failure"<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        if (s[i]=='0'){
            s[i]='1';
        }
        else{
            s[i]='0';
        }
    }
    cout<<"ones compliment is a success"<<endl;
    display();

}
int main(){
    binary shobhit;
    cout<<"reading data --->"<<endl;
    shobhit.read();
    cout<<"displaying data --->"<<endl;
    shobhit.display();
    cout<<"displaying ones compliment of data --->"<<endl;
    shobhit.ones_c();


}