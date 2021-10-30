#include<bits/stdc++.h>
using namespace std;

class details{
    string name;
    string rollno;
    string email;
    string standard;

    public:

    void getdetails(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll no.: ";
        cin>>rollno;
        cout<<"Email: ";
        cin>>email;
        cout<<"Class: ";
        cin>>standard;

    }

    void output(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<rollno<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Class: "<<standard<<endl;
        cout<<"--------------------------------"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter no. of students: ";
    cin>>n;
    cout<<"\n";
    cout<<"\tEnter the following details:"<<endl;
    details student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<":"<<endl;
        student[i].getdetails();
        cout<<"\n";
    }
    cout<<"\tStudent Details:";
    cout<<"\n--------------------------------"<<endl;
    cout<<"\n";
    for(int j=0;j<n;j++)
    {
        student[j].output();
    }
    return 0;
}
