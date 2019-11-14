/*
* Student.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Class definition .cpp file for the Student Class
* Copyright notice
*/

#include "Student.h"


int Student::numberOfStudents{ 0 };

std::istream& operator >>(std::istream& input, Student& student) {
	std::cout << "Enter deetails for new student/n";
	std::cout << "Enter name:";
	std::getline(input, student.name_);
	std::cout << "Registration ID: ";
	input >> student.registrationID_;
	std::cout << "Name of course:";
	input.ignore();
	std::getline(input, student.course_);
	std::cout << "Year of study: ";
	input >> student.yearofstudy_;

}
std::ostream& operator<<(std::ostream& output, Student& student) {
	output << "Student" << Student::numberOfStudents << "details/n";
	output << "Name:" << student.GetName() << std::endl;
	output << "Registration" << student.GetRegistrationID << std::endl;

		return output;
}}

Challenge 4 - Task 4
void operator++ (Student& student){
	switch (student.GetYearOfStudy()) {
	case 1: student.AddModule("Object oriented programming,COM326, 20,0");
		break;
	case 2:student.AddModule("Object oriented programming,COM326, 20,0");
	}
	++student.yearofStudy_;

//Default constuctor
//Note how we use the scope resolution operator ::
//We do that to specify which class the member functions belong to
//Class_Name::Member_Function
Student::Student() {
	std::cout << "The default Student class constructor was called" << std::endl;
	yearofStudy_ = GetYearofStudy();
	numberOfStudents++;
}

Student::Student(std::string name) {
	std::cout << "The first custom Student class constructor was called" << std::endl;
	name_ = name;
}

//This constructor creates and initialises it by copying the data from each variable
//into the specified data member. We use an initializer list but we could also initialize each
//variable by using assignment statements in the main body of the function
Student::Student(std::string name, std::string registration, std::string course, int yearofStudy, std::vector<Module> m)
	: name_{ name }, registrstionID_{ registration }, course_{ course }, yearofStudy_{ yearofStudy }, moduleMarks_{ m }
{
	std::cout << "The second custom Student class constructor was called" << std::endl;
	//we could assign the values of the parameters to the data members like this
	//name_ = name;
}

//Getters and setters
void Student::SetName(std::string name) {
	name_ = name;
}

//Make getters const so that it tells the compiler to complain if we accidentlly 
//try to change a data member 
std::string Student::GetName() const {
	return name_;
}

void Student::SetRegistrationID(std::string registrstionID) {
	registrstionID_ = registrstionID;
}
std::string Student::GetRegistrationID() const {
	return registrstionID_;
}

void Student::SetCourse(std::string course) {
	course_ = course;
}
std::string Student::GetCourse() const {
	return course_;
}

void Student::SetYearofStudy(int year) {
	yearofStudy_ = year;
}
int Student::GetYearofStudy() const {
	return yearofStudy_;
}

// Task 6 - Need to modify the class to incorporate the use of vector
// To print the module name and marks for each module
void Student::ToString() const {
	std::string output = name_ + " " + registrstionID_ + " " + course_ + " " + std::to_string(yearofStudy_) + " " + "\n";
	for (int index = 0; index < moduleMarks_.size(); index++) {
		output = output + "\nModule Code: " + moduleMarks_.at(index).getModuleCode() + "\nModule Name: " + moduleMarks_.at(index).getModuleTitle() + "\n";
	}
	std::cout << output << std::endl;
}

std::string Student::CalculateClassification() const {

	int average = 0;
	int totalMark = 0;
	int index = 0;

	for (index; index < moduleMarks_.size(); index++) {
		totalMark += moduleMarks_.at(index).getModuleMark();
	}

	// To avoid division by zero - for student with only 1 course
	if (index > 0)
		average = totalMark / index;
	else
		average = totalMark / 1;

	if (average < 40) {
		return "fail";
	}
	else if (average >= 40 && average <= 49) {
		return "3rd class";
	}
	else if (average >= 50 && average <= 59) {
		return "2nd class";
	}
	else if (average >= 60 && average <= 69) {
		return "2-1";
	}
	else
		return "1st class";
}

void Student::AddModule(Module m) {
	moduleMarks_.push_back(m);
}

void Student::AddModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark) {
	Module m(moduleTitle, moduleCode, moduleCreditPoints, moduleMark);
	moduleMarks_.push_back(m);

}

void Student::DeleteModule(std::string moduleCode) {
	//Loop through the module marks and remove a module that 
	for (int index = 0; index < moduleMarks_.size(); index++) {
		if (moduleMarks_.at(index).getModuleCode() == moduleCode) {
			moduleMarks_.erase(moduleMarks_.begin() + index);
		}
	}
}

void Student::UpdateModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark) {
	//Loop through the module marks and remove a module that 
	for (int index = 0; index < moduleMarks_.size(); index++) {
		if (moduleMarks_.at(index).getModuleCode() == moduleCode) {
			moduleMarks_.at(index).setModuleCreditPoints(moduleCreditPoints);
			moduleMarks_.at(index).setModuleTitle(moduleTitle);
			moduleMarks_.at(index).setModuleMark(moduleMark);
		}
	}
}
int Student::GetNumberOfModule() const {
	return ModuleMark.sizeOf;
}