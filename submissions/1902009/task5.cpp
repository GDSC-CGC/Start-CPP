#include <iostream>
#include<string>
using namespace std;

class Student{
	string name;
	int classNumber;
	int rollNo;
	string email;
public:

	// Getters
	string getName(){
		return this->name;
	}
	int getClassNumber(){
		return this->classNumber;
	}
	int getRollNo(){
		return this->rollNo;
	}
	string getEmail(){
		return this->email;
	}

	// Setters

	void setAll(string name,int classNumber,int rollNo,string email){
		this->name = name;
		this->classNumber = classNumber;
		this->rollNo = rollNo;
		this->email = email;
	}

	void setName(string name){
		this->name = name;
	}
	void setClassNumber(int classNumber){
		this->classNumber = classNumber;
	}
	void setRollNo(int rollNo){
		this->rollNo = rollNo;
	}
	void setEmail(string email){
		this->email = email;
	}
};

int main(){
	Student s1;
	// All in one setter
	s1.setAll("Aadi",10,21,"aadi@gmail.com");

	// Individual Setters
	s1.setName("Aaditya");
	s1.setClassNumber(11);
	s1.setRollNo(22);
	s1.setEmail("aadi1@gmail.com");


	cout<<"Name : "<<s1.getName()<<endl;
	cout<<"Class : "<<s1.getClassNumber()<<endl;
	cout<<"Roll number : "<<s1.getRollNo()<<endl;
	cout<<"Email : "<<s1.getEmail()<<endl;
	return 0;
}