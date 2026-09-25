#include<iostream>
#include<string>
using namespace std;

class account{

    private:

string name;
int accno;
float balance;

public:

void inputdetails(){
    cout<<"Enter Account Holder Name: ";
    getline(cin>>ws,name);
    cout<<"Enter Account number: ";
    cin>>accno;
    cout<<"Enter Balance: ";
    cin>>balance;

}
void displaydetails(){

    cout<<"\nYour Name: "<<name;
    cout<<"\nYour Account number: "<<accno;
    cout<<"\nYour Balance: "<<balance;

}
};

int main()
{

    account b;
    b.inputdetails();
    b.displaydetails();
    return 0;

}