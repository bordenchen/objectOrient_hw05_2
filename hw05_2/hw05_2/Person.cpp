#include "Person.h"
#include <ctime>
Person::Person() {
	static bool seeded = false;
	if (!seeded) {
		srand(time(0));
		seeded = true;
	}
	this->gender = (rand()%2);
	this->age = (rand() % 99 + 1);
	if (gender) {
		this->name = "john";
	}
	else {
		this->name = "jane";
	}
	
};

int Person::get_age() {
	return this->age;
}

bool Person::get_gender() {
	return this->gender;
}

std::string Person::get_name(){
	return this->name;
}