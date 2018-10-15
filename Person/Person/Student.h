#pragma once
#include <string>
#include "Person.h"

class CStudent : public CPerson
{
public:
	CStudent(std::string Name, std::string egn, Gender gender) : CPerson(Name, egn, gender)
	{
	}

private:
	std::string m_studentFN;
	std::string m_Specialty;

private:
	bool ValidateFN();

public:
	std::string GetName()
	{
		return m_name;
	}
	std::string GetEgn()
	{
		return m_EGN;
	}
	std::string GetGender()
	{
		return GenderEnumToStr(m_gender);
	}

};