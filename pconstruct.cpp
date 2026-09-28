#include<iostream>
#include<string>
using namespace std;
class Rectangle{

    private:

    double length;
    double width;

    public:

    Rectangle(double l,double w){

        length = l;
        width = w;

        cout<<"Rectangle Object Created"<<endl;
    }
    void calculateArea(){

        cout<<"Area = "<< length*width<<endl;

    }
      ~Rectangle(){

        cout<<"Rectangle object destroyed"<<endl;

      }
};
int main(){

    Rectangle r(20,10);
    r.calculateArea();
    return 0;
}