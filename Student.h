#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	int id;
	string name;
	int quizNote;

public:
	// Constructor
	Student(int _id, string _name, int _quizNote);
	void setId(int _id);
	void setName(string _name);
	void setQuizNote(int _quizNote);
	int getId();
	string getName();
	int getQuizNote();
	void informationString();
};