#include "PersonVector.h"
#include "Person.h"
#include <iostream>
void personVector::addPersons(int n) {
	int cnt = 0;
	while(cnt < n){
		Person new_person;
		this->personVec.push_back(new_person);
		cnt++;
	}
};

void personVector::displayPersons() {
	std::cout << "Name   Age   Gender\n";
	for (int i = 0; i < this->personVec.size(); i++) {
		printf("%s   %02d       %d\n", this->personVec[i].get_name().c_str(),\
			this->personVec[i].get_age(), this->personVec[i].get_gender());
	}
};