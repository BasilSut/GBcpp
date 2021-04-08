#include "date.h"
#include <memory>
using std::cout;
using std::endl;
using std::auto_ptr;


int main()
{
	
	//AutoPtr<Date> Today2(new Date(6, 4, 2021));
	Date* Today = new Date(4, 4, 2021);
	cout << Today;
	
	std::unique_ptr<Date> Today3(new Date(12, 10, 2020));
	cout << *Today3<<endl;
	std::auto_ptr<Date> Date1(new Date(20, 10, 2007));
	cout << *Date1;
	return 0;
}
