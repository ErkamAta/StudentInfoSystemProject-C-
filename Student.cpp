#include "Student.h"
#include <iostream>

using namespace std;

//Constructor
Student::Student(int _id, string _name, int _quizNote) {
	id = _id;
	name = _name;
	quizNote = _quizNote;
}

void Student::setId(int _id) {
	id = _id;
}
void Student::setName(string _name)
{
	name = _name;
}
void Student::setQuizNote(int _quizNote)
{
	quizNote = _quizNote;
}
int Student::getId()
{
	return id;
}
string Student::getName()
{
	return name;
}
int Student::getQuizNote() 
{
	return quizNote;
}

void Student::informationString() {
	cout << "Name: " << name << " ID: " << id << " Quiz Note: " << quizNote << endl;

}
