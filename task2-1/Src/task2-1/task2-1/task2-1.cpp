#include "stdafx.h"
#include "Header.hpp"
#include "iostream"



void List::pushFront(Student* newstudent)
{
	newstudent->next = head;
	newstudent->id = 1;
	head->id = 2;
	head = newstudent;
	std::cout << "Student added to front!" << std::endl;
}

void List::pushEnd(Student * newstudent)
{
	Student * ptr = head;
	do
	{
		ptr = ptr->next;
	} while (ptr->next);
	ptr->next = newstudent;
	newstudent->next = NULL;
	std::cout << "Student added to end!" <<std:: endl;
}
void List::remove(int id)
{
	Student* ptr = head;
	Student* node;
	while (ptr->next->id!=id && ptr->next)
		ptr = ptr->next;
	if (ptr->next->next)
		ptr->next = ptr->next->next;
	else
		ptr->next = NULL;
	std::cout << "Student number" << id << " is removed!" << std::endl;
}
void List::clean()
{
	head = NULL;
}
int List::size()
{
	int counter = 0;
	if (head)
		counter = 1;
	else
		return 0;
	Student* ptr = head;
	while (ptr->next)
	{
		ptr = ptr->next;
		counter++;
	} 
	return counter;
}

void List::printlist()
{
	
	Student* ptr = head;
	while (ptr)
	{
		std::cout << ptr->name << ptr->id<<std::endl;
		ptr = ptr->next;
	} 

}
