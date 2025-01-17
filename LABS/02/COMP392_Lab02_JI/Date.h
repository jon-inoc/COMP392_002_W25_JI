#pragma once
/**
* Author: John Inocente
* Date: January 17, 2025
* Filename: Date.hpp
**/

#include <iostream>

namespace Week2Lab02 
{
	class Date
	{
	public:
		Date(int year, int month, int day);
		~Date();
		Date(const Date&);

		Date operator+(const Date& rhs) const { 
			// Logic for adding two Date objects
			Date result = *this; 
			// Implement the logic here
			return result;
		}
		Date operator+(const int days) const { 
			// Logic for adding a certain number of days
			Date result = *this; 
			// Implement the logic here 
			return result; }
		
		friend std::ostream& operator<<(std::ostream& os, const Date& rhs)
		{ 
			os << rhs.year_ << '-' << rhs.month_ << '-' << rhs.day_;
			return os;
		}




	private:
		int year_ = 2019;
		int month_ = 1;
		int day_ = 1;
	};
}

