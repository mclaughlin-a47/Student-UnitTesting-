/*
* Student.h
*
* Version information
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Class declaration header file for the Student Class
* Copyright notice
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Module.h"

class Student {

	friend std::istream& operator>>(std::istream& input, Student& student);
	friend std::ostream& operator<<(std::ostream& input, Student& student);
	friend bool operatpr++(Student& stuLHS, Student& stuRHS) {
		if (stuLHS.GetName() == stuRHS.GetName()) {
			if (stuLHS.GetRegistrationID() == stuRHS.GetRegistrationID()) {
				if (stuLHS.GetCourse() == stuRHS.GetCourse()) {
					if (stuLHS.GetYearOfyear)
				}
			}
		}
	}
	//Private data members - we make them private so we can protect the data
	//This enforces encapsulation. We control access through the public member functions
private:
	std::string name_;
	std::string registrstionID_;
	std::string course_;
	int yearofStudy_;
	std::vector<Module> moduleMarks_{};  // Task 4 - Adding vector of module objects
	static int numberOfStudents; //Challenge 3 Task 1

public:
	//Public member functions

	//Our default constructor. This does nothing other than create an empty student object. 
	//There isn't any data in the student object
	Student();

	//Custom constructor. We use this to initialise the object with data we pass in
	Student(std::string name, std::string registration, std::string course, int yearofStudy, std::vector<Module> m);
	Student(std::string name);

	//Getters and setters for each member variable
	void SetName(std::string name);
	std::string GetName() const;

	void SetRegistrationID(std::string registrstionID);
	std::string GetRegistrationID() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

	void SetYearofStudy(int year);
	int GetYearofStudy() const;

	// Task 5 - adding Module member functions for student class
	void AddModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);
	void AddModule(Module m);
	void DeleteModule(std::string moduleCode);
	void UpdateModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);

	// Task 6 - Modify to reflect changes to vector
	void ToString() const;
	std::string CalculateClassification() const;
	int
};
