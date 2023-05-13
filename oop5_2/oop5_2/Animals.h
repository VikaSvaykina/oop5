#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
public:
	virtual string classname()
	{
		return "Animal";
	}
	virtual bool isA(const string &who)
	{
		return who == "Animal";
	}
	virtual ~Animal()
	{

	}
};

class Cat : public Animal
{
public:
	string classname() override
	{
		return "Cat";
	}
	bool isA(const string& who) override
	{
		return (who == "Cat") || (Animal :: isA(who));
	}
	void catchMouse()
	{
		cout << "catchMouse" << endl;
	}
	~Cat() override
	{

	}
};

class Dog : public Animal
{
public:
	string classname() override
	{
		return "Dog";
	}
	bool isA(const string& who)
	{
		return (who == "Dog") || (Animal :: isA(who));
	}
	~Dog() override
	{

	}
};

class Manul : public Cat
{
public:
	string classname() override
	{
		return "Manul";
	}
	bool isA(const string& who)
	{
		return (who == "Manul") || (Cat::isA(who));
	}
	~Manul() override
	{

	}
};