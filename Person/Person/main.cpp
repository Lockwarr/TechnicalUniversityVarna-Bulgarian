#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h" 
#include "TemplArray.h"

int main()
{

	CDynArray<int> test(3);

	test.setArray(0, 1);
	test.setArray(1, 2);
	test.setArray(2, 3);

	double sum = 0;
	test.sumElements(sum);
	std::cout << "Max element: "<<test.maxElement() << std::endl;
	std::cout << "Sum: "<< sum << std::endl;
	std::cout << "The value of the element number you are looking for: "<< test.searchElement(2) << std::endl << std::endl;

	test.print();
	
	system("pause");
//	int numberOfStudents;
//	std::cout << "Enter number of students to append into file: ";
//	std::cin >> numberOfStudents;
//
//	std::string name = "";
//	std::string egn = "";
//
//	int genderNumber;
//	Gender gender;
//
//	std::ofstream myfile("allUserStudents.txt");
//	if (myfile.is_open())
//	{
//		for (int i = 0; i < numberOfStudents; i++)
//		{
//			std::cout << std::endl << "Enter name: ";
//			std::cin >> name;
//			std::cout << std::endl << "Enter egn: ";
//			std::cin >> egn;
//			std::cout << std::endl << "Choose 0 for Male , 1 For Female: ";
//			std::cin >> genderNumber;
//			while (genderNumber != 0 && genderNumber != 1)
//			{
//				std::cout << std::endl << "You can only choose 0 for male , 1 for female !Choose again: ";
//				std::cin >> genderNumber;
//
//			}
//
//			if (genderNumber == 0)
//				gender = eMale;
//			else
//				gender = eFemale;
//
//			CStudent iStudent(name, egn, gender);
//			myfile << iStudent.GetName()<<" ";
//			myfile << iStudent.GetEgn()<<" ";
//			myfile << iStudent.GetGender()<<std::endl;
//		}
//
//	}


};