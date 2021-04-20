#include <iostream>


using namespace std;


class Animal
{
public:
	Animal() : m_name(""), m_numOfLegs(0) {};
	virtual ~Animal()
	{
		cout << "~Animal()\n";
	}

	virtual void Speak()
	{
		cout << "Hi, I'm a Animal, and my name is " << m_name << ".\n";
	}

	string getName()
	{
		return m_name;
	}

	void setName(string name)
	{
		m_name = name;
	}

	int getNumOfLegs()
	{
		return m_numOfLegs;
	}

	void setNumOfLegs(int numOfLegs)
	{
		m_numOfLegs = numOfLegs;
	}


protected:

	string m_name;
	int m_numOfLegs;

};

class Dog : public Animal
{
public:
	Dog() {};
	virtual ~Dog()
	{
		cout << "~Dog()\n";
	}
	virtual void Speak() override
	{
		cout << "Hi, I'm a Dog, and my name is " << m_name << ".\n";
		cout << "I have " << m_numOfLegs << " legs!!  I can walk!\n";
	}

private:

};


class Cat : public Animal
{
public:
	Cat() {};
	virtual ~Cat()
	{
		cout << "~Cat()\n";
	}
	virtual void Speak() override
	{
		cout << "Hi, I'm a Cat, and my name is " << m_name << ".\n";
		cout << "I have " << m_numOfLegs << " legs!!  I can walk!\n";
	}
private:

};


int main()
{
	Cat cat;
	Dog dog;

	cat.setName("Kitty");
	cat.setNumOfLegs(2);

	cat.Speak();

	cout << endl;

	dog.setName("Snoopy");
	dog.setNumOfLegs(2);

	dog.Speak();

	cout << endl;





	return 0;
}