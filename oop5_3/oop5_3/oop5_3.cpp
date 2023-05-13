//передача объектов как параметров в функции и возврат объектов из функций
#include <iostream>
#include "Header.h"

using namespace std;

void infunc1(Base obj)
{
	cout << "infunc1" << endl;
}
void infunc2(Base* obj)
{
	cout << "infunc2" << endl;
}
void infunc3(Base& obj)
{
	cout << "infunc3" << endl;
}

Base outfunc1()
{
	Base b("outfunc1");
	return b;
}
Base* outfunc2()
{
	Base b("outfunc2");
	return &b;
}
Base& outfunc3()
{
	Base b("outfunc3");
	return b;
}
Base outfunc4()
{
	Base* b = new Base("outfunc4");
	return *b;
}
Base* outfunc5()
{
	Base* b = new Base("outfunc5");
	return b;
}
Base& outfunc6()
{
	Base* b = new Base("outfunc6");
	return *b;
}

int main()
{
	//проверка механизма передачи объектов как параметров в функции
	cout << "\nCheck infunctions:\n" << endl;

	Base* b = new Base();
	Desc* d = new Desc();

	cout << endl;

	infunc1(*b);
	infunc2(b);
	infunc3(*b);
	infunc1(*d);
	infunc2(d);
	infunc3(*d);

	cout << endl;

	delete d;
	delete b;

	//проверка механизма возврата объектов из функции
	cout << "\nCheck outfunctions:\n" << endl;

	Base b1;
	Base* b2;

	cout << endl;

	b1 = outfunc1();
	b2 = outfunc2();
	b1 = outfunc3();
	b1 = outfunc4();
	b2 = outfunc5();
	b1 = outfunc6();
}