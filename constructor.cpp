#include<iostream>
#include<string>
using namespace std;

class student{

    private:
    string name;
    int rollno;

    public:

    student(string n,int r) {//CONSTRUCTOR

    name = n;
    rollno = r;}

    void display(){

        cout<<"Your Name: "<<name<<endl;
        cout<<"Your Roll no: "<<rollno<<endl;
}

};

int main(){

    student s("Kushal",101);
    s.display();
    return 0;

}