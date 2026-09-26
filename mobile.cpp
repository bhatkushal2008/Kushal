#include<iostream>
#include<string>
using namespace std;

class mobile{

    private:

    string brand;
    string model;
    int price;

   public:
   mobile(string b,string m,int p){ // constructor with parameter
   brand = b;
   model = m;
   price = p;
   }

   void display(){

    cout<<"Your Mobile brand: "<<brand<<endl;
    cout<<"Your Mobile model: "<<model<<endl;
    cout<<"Your Mobile price: "<<price<<endl;

   }

};

int main(){

    mobile s("Samsung","A33",26000);
    s.display();
    return 0;
}
