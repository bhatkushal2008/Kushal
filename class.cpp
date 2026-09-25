#include<iostream>
#include<string>
using namespace std;

class student{
    private:

    string name;
    int rollno;
    float marks;

    public:

    void inputdetails(){


    cout<<"Enter your name: ";
    getline(cin>>ws,name);

    cout<<"Enter your Roll No: ";
    cin>>rollno;

    cout<<"Enter your Marks: ";
    cin>>marks;

    }
    void displaydetails(){

        cout<<"\n---Student Data---";
        cout<<"\nName: "<<name;
        cout<<"\nRoll No: "<<rollno;
        cout<<"\nMarks: "<<marks;

    }
};
      


int main(){

    student s;
    s.inputdetails();
    s.displaydetails();
    return 0;
}