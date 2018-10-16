#ifndef PERSONVEC
#define PERSONVEC
#include "Person.h"
#include <vector>
class personVector {
private:
	std::vector<Person> personVec;
public:
	void addPersons(int number);
	void displayPersons();

};
#endif
