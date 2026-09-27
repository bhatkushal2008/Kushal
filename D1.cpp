#include<iostream>
#include<string>
using namespace std;
class savingaccount{

    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double intrestrate;

    public:

    savingaccount(string name,int accnumber,double initialbalance,double rate){


        accountHolderName = name;
        accountNumber = accnumber;
        balance = initialbalance;
        intrestrate = rate;

    }
 void deposite(double amount){
    if(amount>0){
        balance+=amount;
        cout<<"Deposisted: Rs"<<amount<<endl;
    }
    else{
        cout<<"Invalid amount"<<endl;
    }
 }
 void display(){

    cout<<"\n---[Account Details]---"<<endl;
    cout<<"Account Number: "<<accountHolderName<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Current Balance: RS"<<balance<<endl;
    cout<<"Rate: "<<intrestrate<<endl;

 }

};
int main(){

    savingaccount saving("Kushal",1001,50000,5);
    saving.display();
    cout<<"\n---Transaction 1 ---"<<endl;
    saving.deposite(2000);
    saving.display();

    cout<<"\nTransaction 2---"<<endl;
    saving.deposite(-500);
    saving.display();
    return 0;
}