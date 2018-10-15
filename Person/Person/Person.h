#pragma once
#include <string>

enum  Gender
{
	eMale,
	eFemale
};

class CPerson
{
public:

	CPerson(std::string Name, std::string m_EGN, Gender gender);
	~CPerson();

protected:


	std::string m_name;
	std::string m_EGN;
	std::string m_FN;
	Gender m_gender;

protected:
	int ValidatePIN();
	std::string GenderEnumToStr(Gender eGender);

};