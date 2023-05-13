//Для изучения умных указателей необходимо создать объекты, управляемые с помощью unique_ptr и shared_ptr (с помощью make_unique и make_shared и/или без них), помещать их в переменные, передавать их в функции, возвращать их из функций и демонстрировать, как они влияют на время жизни объекта, которым управляют.
#include <vector>
#include "Animals.h"

using namespace std;

void talk(Animal* who)
{
	who->sound();
}

void talk(shared_ptr<Animal> who)
{
	who->sound();
}

unique_ptr<Animal> makeCat()
{
	return make_unique<Cat>();
}

int main()
{
	unique_ptr<Animal> cat = make_unique<Cat>();
	shared_ptr<Animal> dog = make_unique<Dog>();

	cout << endl;

	talk(cat.get());	//проверяем

	{
		auto tmp_cat = makeCat();	//создаем временный указатель на кота
		shared_ptr<Animal> tmp_dog = dog;	//создаем еще один указатель на собаку
	}

	cout << endl;

	talk(dog);	//проверяем

}