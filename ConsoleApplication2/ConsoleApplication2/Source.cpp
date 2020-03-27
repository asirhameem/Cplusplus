#include<iostream>
#include<string>

using namespace std;

class person{
private: 
	string name;
	int age;
	string date_of_birth;
public:
	void setName()
	{
		this-> name = n;
	}
	void setAge()
	{
		this-> age= a;
	}
	void setDob()
	{
		this->date_of_birth = dob;
	}
	string getName()
	{
		return n;
	}
	int getAge()
	{
		return a;
	}
	string getdob()
	{
		return dob;
	}
};

class 