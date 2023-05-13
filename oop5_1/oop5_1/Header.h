#pragma once
#include <iostream>

using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal()" << endl;
	}
	void doSound()
	{
		sound();
	}
	void sound()
	{
		cout << "Silence" << endl;
	}
	~Animal()
	{
		cout << "~Animal()" << endl;
	}
};

class Cat : public Animal
{
public:

	Cat()
	{
		cout << "Cat()" << endl;
	}
	void sound()
	{
		cout << "Meow" << endl;
	}
	~Cat()
	{
		cout << "~Cat()" << endl;
	}
};




class AnimalFixed
{
public:
	AnimalFixed()
	{
		cout << "AnimalFixed()" << endl;
	}
	void doSound()
	{
		sound();
	}
	virtual void sound()
	{
		cout << "Silence" << endl;
	}
	virtual ~AnimalFixed()
	{
		cout << "~AnimalFixed()" << endl;
	}
};

class CatFixed : public AnimalFixed
{
public:
	CatFixed()
	{
		cout << "CatFixed()" << endl;
	}
	void sound() override
	{
		cout << "Meow" << endl;
	}
	~CatFixed() override
	{
		cout << "~CatFixed()" << endl;
	}
};