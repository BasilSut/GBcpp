// date.cpp: определяет точку входа для приложения.
//



#include "date.h"

Date::Date(): m_day(6),m_month(4),m_year(2021) {}

Date::Date(int day, int month, int year) {
	if (month <= 12) {
		if (day <= 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
			m_month = month;
				m_day = day;
		}
		else if (day <= 30 && (month == 4 || month == 6 || month == 9 || month == 11) ){
			m_month = month;
				m_day = day;
		}
		else if (day <= 30 && month == 2) {
			m_month = month;
				m_day = day;
		}
		else if(month>12){
				m_month = 1;
				m_day = 1;
				//std::cout << "invalid data";
		}
		else {
			m_day = 6; m_month = 4; m_year = 2021;
		}
	}
		if (year > 0 && year<3000) {
			m_year = year;
		}
		else {
			m_year = 2021;
		}
		
	};

	Date::~Date() {};

int Date::get_day() const { return m_day; }
int Date::get_month() const { return m_month; }
int Date::get_year() const { return m_year; }

void Date::set_day(int day) {
	m_day = day;
}
void Date::set_month(int month) {
	m_month = month;
}
void Date::set_year(int year) {
	m_year = year;
}

std::ostream& operator<<(std::ostream &out, const Date &point) {
	out << "The date is " << point.m_day<< "." << point.m_month << "." << point.m_year << std::endl;
	return out;
}


template <typename T>
AutoPtr<T>::AutoPtr(T* ptr){
	m_ptr = ptr;
}

template <typename T>
AutoPtr<T>::~AutoPtr() {
	delete m_ptr;
}