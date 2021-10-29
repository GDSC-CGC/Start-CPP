#include <iostream>

 using namespace std;

 class student
 {
     public: string name, email_id;
             int clas, roll_no;
         void print_details()
         {
             cout<<"Name: "<<name<<endl;
             cout<<"Class: "<<clas<<endl;
             cout<<"Roll Number: "<<roll_no<<endl;
             cout<<"Email Id: "<<email_id;
         }
 };

 int main()
 {
     student s;
     cout<<"Enter the Name: ";
     cin>>s.name;
     cout<<"Enter Class: ";
     cin>>s.clas;
     cout<<"Enter Roll Number: ";
     cin>>s.roll_no;
     cout<<"Enter Email Id: ";
     cin>>s.email_id;
     cout<<endl;
     s.print_details();
     return 0;
 }