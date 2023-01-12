#include <iostream>
#include <string>

using namespace std;

class HUMAN {	//parent class 
public:
	string gender;
	int age;

	void setGender(string g);
	void setAge(int a);

	string getGender() {			//get gender value
		return gender;
	}

	int getAge() {					//get age value
		return age;
	}
};

void HUMAN::setGender(string g) {    //set gender
	gender = g;
}

void HUMAN::setAge(int a) {			//set age
	age = a;
}

class Student : public HUMAN		//child class student inhereits from HUMAN class
{
public:
	string studentName;
	char grades[3];
public:
	void setName(string);

	void setGrades(char gradeOne, char gradeTwo, char GradeThree);

	void DisplayInfo();
};
void Student::setName(string name)
{
	studentName = name;
}

void Student::setGrades(char gradeOne, char gradeTwo, char gradeThree)
{
	grades[0] = gradeOne;
	grades[1] = gradeTwo;
	grades[2] = gradeThree;
}

void Student::DisplayInfo() {
	cout << "Student Name: " << studentName << endl;
	
	for (int count = 1; count <= 3; count++)
	{
		cout << "Student Grade" << " " << count << ":";
		cout << grades[count - 1] << " , ";
	 }


	cout<< endl<< "Student Gender: " << getGender() << endl <<  "Student Age: " << getAge() << endl;
}

void main()
{
	Student Jerry;
	Jerry.setName("Jerry");
	Jerry.setGrades('A', 'B', 'C');
	Jerry.setGender("Male");
	Jerry.setAge(32);
	
	Jerry.DisplayInfo();
	system("pause");
}; 