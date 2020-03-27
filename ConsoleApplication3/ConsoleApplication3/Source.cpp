#include<iostream>
#include<string>

using namespace std;

class person{
private:
	string name;
	int age;
	string date_of_birth;

public:

	void set_name(string name)
	{
		this->name = name;
	}
	void set_age(int age)
	{
		this->age = age;
	}
	void set_dob(string date_of_birth)
	{
		this->date_of_birth =date_of_birth ;
	}

	string get_name()
	{
		return name;
	}
	int get_age()
	{
		return age;
	}
	string get_dob()
	{
		return date_of_birth ;
	}
	

};

class Employee:public person{
private:
	float monthly_salary;
	string employee_ID;
	string position;
public:
	void set_ms(float monthly_salary)
	{
		this->monthly_salary = monthly_salary;
	}
	void set_eid(string employee_ID)
	{
		this->employee_ID = employee_ID;
	}
	void set_position(string position)
	{
		this->position = position;
	}

	float get_ms()
	{
		return monthly_salary;
	}
	string get_eid()
	{
		return employee_ID;
	}
	string get_position()
	{
		return position;
	}
	void display()
	{
	
			cout<<"Name:"<<get_name()<<endl;
			cout<<"Age:"<<get_age()<<endl;
			cout<<"Date of Birth:"<<get_dob()<<endl;
			cout<<"Monthly Salary:"<<get_ms()<<endl;
			cout<<"Employee Id:"<<get_eid()<<endl;
			cout<<"Position:"<<get_position()<<endl;
	}

};

	/*
	class cricketplayer : public person, public Employee{
	private:
		int batting_average;
		int bowling_average;
	public:
		void set_batavg(int batting_average)
		{
			this-> batting_average= batting_average;
		}
		void set_bowlavg(int bowling_average)
		{
			this-> bowling_average = bowling_average;
		}
		int get_bat_avg()
		{
			return batting_average;
		}
		int get_bwl_avg()
		{
			return bowling_average;
		}
		
			cout<<"Batting Average:"<<batting_average<<endl;
			cout<<"Bowling Average:"<<bowling_average<<endl;
		}
	};*/
	void main()
	{
		Employee e1;
		e1.set_name("Shahriar");
		e1.set_age(12);
		e1.set_dob("31-03-98");
		e1.set_eid("000-03-01");
		e1.set_ms(31000.3);
		e1.set_position("Manager");
		e1.display();
	}