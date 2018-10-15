#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h" 

int main()
{
	int numberOfStudents;
	std::cout << "Enter number of students to append into file: ";
	std::cin >> numberOfStudents;

	std::string name = "";
	std::string egn = "";

	int genderNumber;
	Gender gender;

	std::ofstream myfile("allUserStudents.txt");
	if (myfile.is_open())
	{
		for (int i = 0; i < numberOfStudents; i++)
		{
			std::cout << std::endl << "Enter name: ";
			std::cin >> name;
			std::cout << std::endl << "Enter egn: ";
			std::cin >> egn;
			std::cout << std::endl << "Choose 0 for Male , 1 For Female: ";
			std::cin >> genderNumber;
			while (genderNumber != 0 && genderNumber != 1)
			{
				std::cout << std::endl << "You can only choose 0 for male , 1 for female !Choose again: ";
				std::cin >> genderNumber;

			}

			if (genderNumber == 0)
				gender = eMale;
			else
				gender = eFemale;

			CStudent iStudent(name, egn, gender);
			myfile << iStudent.GetName()<<" ";
			myfile << iStudent.GetEgn()<<" ";
			myfile << iStudent.GetGender()<<std::endl;
		}

	}
};