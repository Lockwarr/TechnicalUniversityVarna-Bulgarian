#include "Person.h"

CPerson::CPerson(std::string Name, std::string egn, Gender gender)
{
	m_name = Name;
	m_EGN = egn;
	m_gender = gender;
}

CPerson::~CPerson()
{

}


std::string CPerson::GenderEnumToStr(Gender eGender)
{
	switch(eGender)
	{

	case 0:
		return "Male";
		break;

	case 1:
		return "Female";
		break;
	}
	return "false";
}

int CPerson::ValidatePIN()

{
	const char* egnCheck = m_EGN.c_str();

	for (int i = 0; i < strlen(egnCheck); i++)

	{

		if (!isdigit(egnCheck[i]))

			return 0;

	}

	int lengthOfPIN = strlen(egnCheck);
	
	if (lengthOfPIN != 10)

	{

		return 0;

	}
	
	std::string firstNum;

	firstNum.push_back(egnCheck[0]);


	std::string monthNums;

	monthNums.push_back(egnCheck[2]);

	monthNums.push_back(egnCheck[3]);


	std::string yearNums;

	yearNums.push_back(egnCheck[0]);

	yearNums.push_back(egnCheck[1]);



	if (stoi(firstNum) == 0)

	{

		if (!((stoi(monthNums) > 20 && stoi(monthNums) <= 32)

			|| (stoi(monthNums) > 40 && stoi(monthNums) <= 52)))

		{

			return 0;

		}

	}

	else

	{

		if (!((stoi(monthNums) >= 0 && stoi(monthNums) <= 12)

			|| (stoi(monthNums) > 20 && stoi(monthNums) <= 32)

			|| (stoi(monthNums) > 40 && stoi(monthNums) <= 52)))

		{

			return 0;

		}

	}



	std::string dayNums;//5th and 6th numbers

	dayNums.push_back(egnCheck[4]);

	dayNums.push_back(egnCheck[5]);



	if (stoi(monthNums) == 1 || stoi(monthNums) == 3 || stoi(monthNums) == 5 || stoi(monthNums) == 7

		|| stoi(monthNums) == 8 || stoi(monthNums) == 10 || stoi(monthNums) == 12



		|| stoi(monthNums) == 21 || stoi(monthNums) == 23 || stoi(monthNums) == 25 || stoi(monthNums) == 27

		|| stoi(monthNums) == 28 || stoi(monthNums) == 30 || stoi(monthNums) == 32



		|| stoi(monthNums) == 41 || stoi(monthNums) == 43 || stoi(monthNums) == 45 || stoi(monthNums) == 47

		|| stoi(monthNums) == 48 || stoi(monthNums) == 50 || stoi(monthNums) == 52)

	{

		if (stoi(dayNums) < 0 || stoi(dayNums) > 31)

		{

			return 0;

		}

	}

	else if (stoi(monthNums) == 2 || stoi(monthNums) == 22 || stoi(monthNums) == 42)

	{

		if (stoi(yearNums) % 4 == 0)

		{

			if (stoi(dayNums) < 0 || stoi(dayNums) > 29)

			{

				return 0;

			}

		}

		else

		{

			if (stoi(dayNums) < 0 || stoi(dayNums) > 28)

			{

				return 0;

			}

		}

	}

	else

	{

		if (stoi(dayNums) < 0 || stoi(dayNums) > 30)

		{

			return 0;

		}

	}



	return 1;

}