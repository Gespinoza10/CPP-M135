#include <iostream>
#include <string>

using namespace std;

class HUMAN {						//BLUEPRINT HUMAN "PARENT"CLASS<-----//parent class		
public:																
	string gender;
	int age;

	void setGender(string g);
	void setAge(int a);

	string getGender() {			//getter gender value		
		return gender;
	}

	int getAge() {					//getter age value
		return age;
	}

	int calcAge(int x);

	double calcAge(double x);

public:			
	HUMAN();

	void DisplayInfo();
};									//END<-----//parent class  

HUMAN::HUMAN() {
	cout << "This is a Human Species Constructor" << endl;
}

int HUMAN::calcAge(int x) {         //calAge function
	return age * x;					//overloading the calcAge function 
}

double HUMAN::calcAge(double x) {
	return age * x;
}

void HUMAN::setGender(string g) {   //setter gender DEFINE
	gender = g;
}

void HUMAN::setAge(int a) {			//setter age DEFINE
	age = a;
}

void HUMAN::DisplayInfo() {        //Dislay function in the parent class 
	cout << "Gender: " << getGender() << endl;
	cout << "Age: " << getAge()<<endl;
}

class Student : public HUMAN		//START BLUEPRINT child class Student inhereits from HUMAN class
{
public:
	string studentName;
	char grades[3];
public:
	void setName(string);

	void setGrades(char gradeOne, char gradeTwo, char GradeThree);

	void DisplayInfo();
};									//END of Student Class

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

void Student::DisplayInfo() {		//overridding the Display function from the parent class
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
	cout << "Display info function from Student Class (Overriding)" << endl;
	Jerry.DisplayInfo();

	HUMAN One;
	One.setAge(22);
	One.setGender("Female");
	cout << "Display info function from HUMAN Class (Overriding)" << endl;
	One.DisplayInfo();
	cout << "Calculate age in months INT (OVERLOADING): " << One.calcAge(12) << endl;
	cout << "Calculate age in months DOUBLE (OVERLOADING): " << One.calcAge(12.7) << endl;
	system("pause");
}; 