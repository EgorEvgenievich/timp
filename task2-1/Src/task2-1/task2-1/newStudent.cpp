#include "stdafx.h"
#include "Header.hpp"

Student* newSudent()
{
	Student* new_element = new Student;
	std::cout << "Enter the student ID\t\t";
	std::cin >> new_element->id;
	std::cout << "Enter the name\t\t";
	std::cin >> new_element->name;
	new_element->next = NULL;
	return new_element;
}