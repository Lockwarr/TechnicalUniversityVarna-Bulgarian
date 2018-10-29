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

	class CAddress
	{
	private:
		std::string town;
		std::string street;

	public:
		CAddress(std::string Town, std::string Street)
		{
			town = Town;
			street = Street;
		};

	};

	std::string m_name;
	std::string m_EGN;
	std::string m_FN;
	Gender m_gender;

protected:
	int ValidatePIN();
	std::string GenderEnumToStr(Gender eGender);

};