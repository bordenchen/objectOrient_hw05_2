#ifndef PERSON
#define PERSON
#include <string>
class Person {
private:
	int age;
	std::string name;
	bool gender;
public:
	Person();
	std::string get_name();
	int  get_age();
	bool get_gender();
};
#endif