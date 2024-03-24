#include <iostream>
using namespace std;

class Person {
private:
	string firstName;
	string lastName;
	string streetAddress;
	string city;
	int zipCode;

public:
	Person(string firstName, string lastName, string streetAddress, string city, int zipCode)
	: firstName(firstName), lastName(lastName), streetAddress(streetAddress), city(city), zipCode(zipCode){

	}

	void Print(){
		cout << "Person: " << firstName << " " << lastName << " " << streetAddress << " " << city << " " << zipCode << ".";
	}
};

int main() {
	Person person("John", "Doe", "123 Fake Street", "City", 90755);
	person.Print();
	return 0;
}
