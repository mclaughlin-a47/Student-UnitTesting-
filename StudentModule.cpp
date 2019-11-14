/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Driver to test the student class
* Copyright notice
*/

#include <iostream>
#include "Student.h"
#include "Module.h"

using namespace std;

int main() {

	// Set the module for the students
	Module tempM1{ "Fundamental of Programming", "COM149", 20, 70 };
	Module tempM2{ "Object Oriented Programming", "COM326", 20, 90 };
	Module tempM3{ "Data Structures", "COM328", 20, 90 };

	std::vector<Module> m{};
	m.push_back(Module { "Fundamental of Programming "})
	m.at(0) = tempM1;
	m.at(1) = tempM2;
	m.at(2) = tempM3;

	// Calling the custom constructor 2
	Student stu1("Jeni Watt", "B004568656", "BSc Computing", 3, m);
	stu1.ToString();
	cout << "Status: " << stu1.CalculateClassification() << endl;

	cout << "\n---------------------------------------------------\n";

	// Calling the custom constructor 1
	Student stu2("Frank Lyons");
	stu2.SetRegistrationID("B0033438656");
	stu2.SetCourse("BSc Information Technology");
	stu2.SetYearofStudy(1);
	stu2.AddModule("Fundamental of Programming ", "COM149",20,70);
	cout << endl << endl;
	cout << stu1.GetEnrolled();
	cout <<	stu2.GetEnrolled();
	cout << endl << endl;

	Student stu3;

	cout << "\n Calling ostream";
	cout << stu2;
	cout << endl;
	cout << "Test == operator\n";
	cout << (stu1 == stu2) << endl;
	cout << (stu2 == stu1) << endl;

	++stu1;
	stu++;
	cin >> stu3;


	tempM1.setModuleMark(50);
	tempM2.setModuleMark(75);
	stu2.AddModule(tempM1);
	stu2.AddModule(tempM2);
	stu2.ToString();
	cout << "Status: " << stu2.CalculateClassification() << endl;
	
	cout << "\n---------------------------------------------------\n";

	// Calling default constructor
	/*Student stu3;
	stu3.SetName("Paul Doherty");
	stu3.SetCourse("BSc Artificial Intelligence");
	stu3.SetRegistrationID("B004556565");
	stu3.SetYearofStudy(1);
	tempM1.setModuleMark(35);
	stu1.AddModule(tempM1);
	stu1.ToString();
	cout << "Status: " << stu3.CalculateClassification() << endl;
	*/
	//Module* modPtr = &module;
	//string code = modPtr->getModuleCode();

	return 0;
}

