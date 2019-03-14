#pragma once
#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h> 
#include <malloc.h>
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
	Student* search(int i);
	bool remove(int id);
	void clean();
	int size(); 
	void printlist();

};
Student* newSudent();