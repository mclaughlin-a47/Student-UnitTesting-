/*
* Module.h
*
* Version information v0.1
* Author: Dr.Shane Wilson & Dr.Effirul Ramlan
* Date : 8 / 10 / 2017 || Modified : 29 / 09 / 2019
* Description: Class definition .cpp file for the Module Class
* Copyright notice
*/

#include "Module.h"

// Task 2 & 3 - Definition for constructors, setters, & getters
Module::Module()
{
	// default constructor
	// set temp value to remove unassinged value warnings
	moduleCreditPoints_ = getModuleCreditPoints();
	moduleMark_ = getModuleMark();
}

Module::Module(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark) :
	moduleTitle_{ moduleTitle }, moduleCode_{ moduleCode }, moduleCreditPoints_{ moduleCreditPoints }, moduleMark_{ moduleMark }
{
	// custom constructor
}
//Task 2
Module::Module() {
	std::cout << "Destructor of the Module class called on Fundamental of Programming";

}

std::string Module::getModuleTitle() const {
	return moduleTitle_;
}
void Module::setModuleTitle(std::string title) {
	moduleTitle_ = title;
}

std::string Module::getModuleCode() const {
	return moduleCode_;
}
void Module::setModuleCode(std::string code) {
	moduleCode_ = code;
}

int Module::getModuleMark() const {
	return moduleMark_;
}
void Module::setModuleMark(int mark) {
	moduleMark_ = mark;
};

int  Module::getModuleCreditPoints() const {
	return moduleCreditPoints_;
}
void  Module::setModuleCreditPoints(int creditPoints) {
	moduleCreditPoints_ = creditPoints;
}

/*
std::vector<Student> students_{};

Student stu2("Darling", "B004645", "Acting", 1);
Module m{ "Warfare", "WAR1012", 20, 0 };

stu2.AddModule(m);

//Module(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);


stu2.AddModule("acting101", "ACT101", 20, 45);
stu2.AddModule("acting102", "ACT102", 20, 45);
stu2.AddModule("acting103", "ACT103", 20, 45);
stu2.AddModule("acting104", "ACT104", 20, 45);



stu2.DeleteModule("ACT102");
stu2.UpdateModule("acting103 a new fresh start", "ACT103", 100, 100);

Student stu1;
stu1.SetCourse("Music theory");
stu1.SetName("Billy Bragg");
stu1.SetRegistrationID("B0000000");
stu1.SetYearofStudy(3);

stu1.ToString();

//Add students to the vector of students
students_.push_back(stu1);
students_.push_back(stu2);

cout << "\n" << stu1.CalculateClassification();
*/