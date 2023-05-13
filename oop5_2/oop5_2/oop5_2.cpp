//базовый виртуальный метод string classname(), перекрыть его в потомках, проверить работу и показать, какие проблемы возникают при его использовании;
//базовый виртуальный метод bool isA(string classname), перекрыть его в потомках и показать отличие от метода classname

#include <vector>
#include "Animals.h"

using namespace std;

int main()
{
	vector<Animal*> animals(3);
	animals[0] = new Cat();
	animals[1] = new Dog();
	animals[2] = new Manul();

	cout << "Using string classname()" << endl;
	for (auto ani : animals)
	{
		if (ani->classname() == "Cat")
		{
			Cat* tmp = static_cast<Cat*>(ani);
			tmp->catchMouse();
		}
	}

	cout << "Using bool isA(const string& who)" << endl;
	for (auto ani : animals)
	{
		if (ani->isA("Cat"))
		{
			Cat* tmp = static_cast<Cat*>(ani);
			tmp->catchMouse();
		}
	}

	delete animals[2];
	delete animals[1];
	delete animals[0];
}