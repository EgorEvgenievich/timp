#pragma once
#include "stdafx.h"
#include "iostream"
#include "string"
struct Student
{
	std::string name;
	int id;
	Student* next;
};

class List
{
public:
	Student* head;
	List() { head = NULL; }
	List(Student* firststudent) { head = firststudent; }
	void pushFront(Student* newstudent);
	void pushEnd(Student* newstudent);
	void remove(int id);
	void clean();
	int size(); 
	void printlist();

};
Student* newSudent();