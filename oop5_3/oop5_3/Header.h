#pragma once
#include <iostream>
#include <string>

using namespace std;


class Base
{
public:
	Base()
	{
		cout << "Base()" << endl;
	}
	Base(Base* obj)
	{
		cout << "Base(Base* obj)" << endl;
	}
	Base(Base& obj)
	{
		cout << "Base(Base& obj)" << endl;
	}
	Base(const string& obj)
	{
		cout << "Base(const string& obj)" << endl;
	}
	~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Desc : public Base
{
public:
	Desc()
	{
		cout << "Desc()" << endl;
	}
	Desc(Desc* obj)
	{
		cout << "Desc(Desc* obj)" << endl;
	}
	Desc(Desc& obj)
	{
		cout << "Desc(Desc& obj)" << endl;
	}
	Desc(const string& obj)
	{
		cout << "Desc(const string& obj)" << endl;
	}
	~Desc()
	{
		cout << "~Desc()" << endl;
	}
};