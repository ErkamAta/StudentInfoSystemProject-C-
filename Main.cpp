#include <iostream>
#include "Student.h"
#include "Main.h"
#include <list>

using namespace std;

void showMenu() {
	cout << "* * * * * * * * * * \n";
	cout << "*                 * \n";
	cout << "*       MENU      * \n";
	cout << "*                 * \n";
	cout << "* * * * * * * * * * \n";
	cout << "1. New student registration\n";
	cout << "2. Show full list\n";
	cout << "3. Delete registration by student ID\n";
	cout << "4. Show for student\n";
	cout << "5. Exit\n";
}
void appendStudent(list<Student>* lst) {
	int id;
	string name, surname, fullName;
	int quizNote;
	cout << "Please input student ID: ";
	cin >> id;
	cout << "Please input student name: ";
	cin >> name >> surname;
	fullName = name + " " + surname;
	cout << "Please input student quiz note: ";
	cin >> quizNote;
	Student student(id, fullName, quizNote);
	lst->push_back(student);
}
void showList(list<Student>* lst) {
	list<Student>::iterator it;
	cout << endl << " - - - - - Student Lists - - - - - \n";
	for (it = lst->begin(); it != lst->end(); it++)
	{
		it->informationString();
	}
	cout << endl;
}
void removeStudent(list<Student>* lst) {
	int id;
	cout << "Removed student input ID: ";
	cin >> id;
	list<Student>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == id)
			break;
	}
	if (it == lst->end())
		cout << "Wrong ID, try again";
	else
		lst->erase(it);

}
void showForStudent(list<Student>* lst) {
	int id;
	cout << "Please input show the student ID: ";
	cin >> id;
	list<Student>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == id)
			break;
	}
	if (it == lst->end())
		cout << "Wrong ID, try again";
	else {
		cout << endl << "Student information: \n";
		it->informationString();
		cout << endl;
	}
}


int main()
{

	list<Student>* pStudentList = new list<Student>();



	int chose = 0;
	do
	{
		showMenu();
		cout << "Choose: ";
		cin >> chose;
		if (chose == 1)
			appendStudent(pStudentList);
		else if (chose == 2)
			showList(pStudentList);
		else if (chose == 3)
			removeStudent(pStudentList);
		else if (chose == 4)
			showForStudent(pStudentList);
		else if (chose == 5)
			break;
		else
			cout << "Incorrect operation, try again.\n";
			
		
	} while (chose !=5);
	return 0;
}