#include "stdafx.h"
#include "Header.hpp"
#include "iostream"



void List::pushFront(Student* newstudent)
{
	newstudent->next = head;
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
Student* List:: search(int i)
{
	Student* temp= head;
	while (temp->id != i&&temp->next)
		temp = temp->next;
	return temp;
}
bool List::remove(int id)
{
	Student* current = head;
	Student* temp;	
	if (current->id == id)
	{
		head = head->next;
		delete current;
		return true;
	}
	while ( current->next)
	{
		if (current->next->id == id)
		{
			temp = current->next;
			current->next = current->next->next;
			delete temp;
			std::cout << "Student number" << id << " is removed!" << std::endl;
			return true;
		}
		if (current->next == NULL)
		{
		std::cout << "Student not found" << std::endl;
		return false;
		}
		current = current->next;
	}
}
void List::clean()
{
	Student* current=head;
	Student* temp;
	while (current != NULL)
	{
		temp = current->next;
		free( current);
		current = temp;
	}
	head = NULL;
	std::cout << "List removed" << std::endl;
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
	int counter = 0;
	Student* ptr = head;
	if (head == NULL)
		std::cout << "List is empty" << std::endl;
	while (ptr)
	{
		std::cout << ptr->name << ptr->id<<std::endl;
		ptr = ptr->next;
		counter++;
	} 
	std::cout << counter << " elements in List" << std::endl;
}
