// date.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include <memory>
#include <iostream>

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

private:
	int m_day;
	int m_month;
	int m_year;
	friend std::ostream& operator<<(std::ostream& out, const Date& point);
};	

template <typename T>
class AutoPtr {
private:
	T m_ptr;
public:
	AutoPtr(T* ptr);
	~AutoPtr();
	T* operator->() {
		return m_ptr;
	}
	T& operator*() {
		return *m_ptr;
	}
	friend std::ostream& operator<<(std::ostream& out, const T*& point) {
		out << point;
		return out;
	}
};

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.

