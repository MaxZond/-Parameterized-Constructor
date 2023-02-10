#include <iostream> 
#include <string> 
#include <windows.h> 

using namespace std;

enum class AnimalType 
{
	Cat,
	Dog,
	Mouse,
};

string chooseAnimal(AnimalType type)
{
	switch (type)
	{
	case AnimalType::Cat:
		return "Cat";
		break;
	case AnimalType::Dog:
		return "Dog";
		break;
	case AnimalType::Mouse:
		return "Mouse";
		break;
	}
}

class Animal {
	AnimalType type_ = AnimalType::Cat;
	string name_ = "Barbos";
	string owner_name_ = "James";

public:
	AnimalType GetType() const
	{
		return type_;
	}

	const string& GetName() const
	{
		return name_;
	}

	const string& GetOwnerName() const
	{
		return owner_name_;
	}

	void print()
	{
		cout << "Type of animal: " << chooseAnimal(type_) << ", " << "Name of animal: " << name_ 
			<< ", " << "Owner's name: " << owner_name_ << endl;
	}

	Animal() = default;

	Animal(AnimalType type, string name, string owner_name)
	{
		type_ = type;
		name_ = name;
		owner_name_ = owner_name;
	}
};


int main()
{
	SetConsoleOutputCP(1251);

	Animal pet;
	pet.print();

	Animal blackThirty(AnimalType::Cat, "DB", "Ouwen");
	blackThirty.print();
}
