#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace LAB01 
{
	class Employee
	{
	public:
		Employee(string name, int salary); //normal constrructor

	private:
		int _salary;
		string _name;

	public:
		// Setter
		void setSalary(int salary) {
			_salary = salary;
		}

		void setName(string name) {
			_name = name;
		}
		// Getter
		int getSalary() {
			return _salary;
		}

		string getName() {
			return _name;
		}
	};
}