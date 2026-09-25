#include<iostream>
#include<string>
using namespace std;

class car{

private:

string brand;
string model;
int price;

public:


void inputdetails() {

    cout<<"Enter your Car Brand: ";
    getline(cin>>ws,brand);
    cout<<"Enter your model: ";
    getline(cin>>ws,model);
    cout<<"Enter your price: ";
    cin>>price;
}
void displaydetails(){

    cout<<"\nYour Brand: "<<brand;
    cout<<"\nYour model: "<<model;
    cout<<"\nYour price: "<<price;

}

};
int main(){

    car c;
    c.inputdetails();
    c.displaydetails();
    return 0;
}