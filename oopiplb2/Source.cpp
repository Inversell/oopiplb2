#include <iostream>
#include <windows.h>

#include <string>
using namespace std;
class Contact {
	string name;
	int number;

public:
	string SetName(string name)
	{
		this->name = name;
	}

	int  SetNumber(int number)
	{

		this->number = number;
	}
	string GetName(string name)
	{
		return name;
	}
	
	int  GetNumber(int number)
	{
		return number;
	}
	Contact() 
	{

	}
	Contact(string name, int number)
	{
		this->name = name;
	
		this->number = number;
	}
	Contact(const Contact& other)
	{
		this->name = other.name;
	
		this->number = other.number;
	}
	~Contact()
	{

	}
	bool operator ==(const Contact& other)
	{
		return(this->name == other.name &&  this->number == other.number);
	}

	Contact& operator&=(const Contact& other) {
		if (name == other.name &&  number == other.number) {

		}
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Contact& contact) {
		os << "Name: " << contact.name << ", Phone Number: " << contact.number;
		return os;
	}

	friend istream& operator>>(istream& is, Contact& contact) {
		cout << "Enter name: ";
		is >> contact.name;
		cout << "Enter phone number: ";
		is >> contact.number;
		return is;
	}
};
int main()
{
	Contact contact1("Name", 123456);
	Contact contact2("Name", 123456);

	cout << "Contact 1: " << contact1 << endl;
	cout << "Contact 2: " << contact2 << endl;

	if (contact1 == contact2) {
		cout << "Contacts are the same" << endl;\
		Contact mergedContact = contact1;
		cout << "Merged Contact: " << mergedContact << endl;
	}
	else {
		cout << "Contacts are different" << endl;
	}



	

	Contact newContact;
	cin >> newContact;
	cout << "New Contact: " << newContact << endl;

	return 0;
}
