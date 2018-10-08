#pragma once
#include <string>

enum  Gender
{
	eMale,
	eFemale
};

class CPerson
{

	CPerson(std::string Name, std::string m_EGN, Gender gender);
	~CPerson();

private:
	std::string m_name;
	std::string m_EGN;
	Gender m_gender;

private:
	int ValidatePIN();
	std::string GenderEnumToStr(Gender eGender);

public:
	
	
};