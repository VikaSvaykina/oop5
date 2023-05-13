#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

int main()
{
	//создать в классе-предке виртуальный конструктор и виртуальный деструктор, зачем нужен виртуальный деструктор и как он работает?
	//Зачем нужны виртуальные методы? Зачем может понадобиться хранить объект не в указателе на свой собственный класс, а указателе на класс-предок?
	vector<Animal*> animals(2);
	animals[0] = new Animal();
	animals[1] = new Cat();
	cout << "Not Virtual:" << endl;
	for (auto someAnimal : animals) {
		someAnimal->sound();
	}
	delete animals[0];
	delete animals[1];
	cout << endl;

	vector<AnimalFixed*> correctAnimals(2);
	correctAnimals[0] = new AnimalFixed();
	correctAnimals[1] = new CatFixed();
	cout << "Virtual:" << endl;
	for (auto someAnimal : correctAnimals) {
		someAnimal->sound();
	}
	delete correctAnimals[0];
	delete correctAnimals[1];
	cout << "\n\n\n";

	//в методе1 базового класса вызывается метод2, который определен в этом же классе как невиртуальный, у класса-потомка метод2 переопределен: что происходит при вызове метода1 у класса-потомка?
	cout << "Not Virtual:" << endl;
	{
		Animal animal;
		Cat cat;
		cat.doSound();
	}
	cout << "\n\n\n";

	//в методе1 базового класса вызывается метод2, который определен в этом же классе как виртуальный, у класса-потомка метод2 переопределен: что происходит при вызове метода1 у класса-потомка?
	cout << "Virtual:" << endl;
	{
		AnimalFixed animal;
		CatFixed cat;
		cat.doSound();
	}
	cout << "\n\n\n";

	//в базовом классе объявить метод невиртуальный, а в классе - потомке объявить метод с таким же именем : какой метод будет вызываться при обращении к объекту через указатель на базовый класс, через указатель на класс - потомок ?
	cout << "Not Virtual:" << endl;
	{
		Animal* animal = new Cat;
		Cat* cat = new Cat;

		animal->sound();
		cat->sound();
		delete animal;
		delete cat;
	}
	cout << "\n\n\n";

	//в базовом классе объявить метод виртуальный, а в классе-потомке объявить метод с таким же именем: какой метод будет вызываться при обращении к объекту через указатель на базовый класс, через указатель на класс-потомок?
	cout << "Virtual:" << endl;
	{
		AnimalFixed* animal = new CatFixed();
		CatFixed* cat = new CatFixed;

		animal->sound();
		cat->sound();
		delete animal;
		delete cat;
	}
}