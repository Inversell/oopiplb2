#include <iostream>
#include <windows.h>

#include <string>
using namespace std;
class Contact {
	string name;
	string surname;
	int number;

public:
	string SetName(string name)
	{
		this->name = name;
	}
	string SetSurname(string surname)
	{
		this->surname = surname;
	}
	int  SetNumber(int number)
	{

		this->number = number;
	}
	string GetName(string name)
	{
		return name;
    }
	string GetSurname(string surname)
	{
		return surname;
    }
	int  GetNumber(int number)
	{
		return number;
    }
	Contact(string name, string surname, int number)
	{
		this->name = name;
		this->surname = surname;
		this->number = number;
	}
	Contact(const Contact& other)
	{
		this->name = other.name;
		this->surname = other.surname;
		this->number = other.number;
	}
	~Contact()
	{
	
	}
	bool operator ==(const Contact& other)
	{
		return(this->name == other.name && this->surname == other.surname && this->number == other.number);
	}

	Contact& operator&=(const Contact& other) {
		if (name == other.name && surname == other.surname && number == other.number) {
			
		}
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Contact& contact) {
		os << "Name: " << contact.name << ", Phone Number: " << contact.number;
		return os;
	}

	friend istream& operator>>(istream& is, Contact& contact) {
		std::cout << "Enter name: ";
		is >> contact.name;
		std::cout << "Enter phone number: ";
		is >> contact.number;
		return is;
	}
};
int main()
{
	Contact contact1("HH", "dd", 4743789);
	Contact contact2("tt","ew", 446834);

	cout << "Contact 1: " << contact1 << endl;
	cout << "Contact 2: " << contact2 << endl;

	if (contact1 == contact2) {
		cout << "Contacts are the same" << endl;
	}
	else {
		cout << "Contacts are different" << endl;
	}

	Contact mergedContact = contact1;
	mergedContact.SetNumber(contact2.GetNumber());

	std::cout << "Merged Contact: " << mergedContact << std::endl;

	Contact newContact;
	std::cin >> newContact;
	std::cout << "New Contact: " << newContact << std::endl;

	return 0;
}