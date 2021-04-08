// date.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include <memory>
#include <iostream>
using std::ostream;

class Date {
public:
	Date();
	Date(int day, int month, int year);
	~Date();

	int get_day() const;
	int get_month() const;
	int get_year() const;

	void set_day(int day);
	void set_month(int month);
	void set_year(int year);


	friend std::ostream& operator<<(std::ostream& out, const Date& point);
	friend bool operator==(const Date &d1, const Date &d2);
	friend bool operator!=(const Date &d1, const Date &d2);
	friend bool operator>(const Date &d1, const Date &d2);
	friend bool operator<(const Date &d1, const Date &d2);

private:
	int m_day;
	int m_month;
	int m_year;
};	




