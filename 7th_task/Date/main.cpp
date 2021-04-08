#include "date.h"
#include <memory>
using std::cout;
using std::endl;
//using std::auto_ptr;
using std::unique_ptr;
using std::make_unique;

int main()
{
	

	//Date* Today0 = new Date(4, 4, 2021);
	//cout << *Today0<<endl;
	unique_ptr<Date> Today = make_unique<Date>(5, 4, 2022);
	cout << *Today<<endl;
	unique_ptr<Date> Date1 = make_unique<Date>(12, 5, 2040);
	cout << *Date1<<endl;


	if (*Today>*Date1)//как передать умные указатели в функцию?
		cout << *Today << " -- bigger(older)" << endl;
	else
		cout << *Date1 << " -- bigger (older)" << endl;

	return 0;
}
