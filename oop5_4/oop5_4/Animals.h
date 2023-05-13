#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal()" << endl;
	}
	virtual void sound()
	{
		cout << "Silence" << endl;
	}
	virtual ~Animal()
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
	void sound() override
	{
		cout << "Meow" << endl;
	}
	~Cat() override
	{
		cout << "~Cat()" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog()
	{
		cout << "Dog()" << endl;
	}
	void sound() override
	{
		cout << "Wow" << endl;
	}
	~Dog() override
	{
		cout << "~Dog" << endl;
	}
};