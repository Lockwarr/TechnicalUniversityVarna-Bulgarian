
#include "Student.h"

CStudent::~CStudent()
{

}

bool CStudent::ValidateFN() 
{
	if (m_studentFN == m_FN)
		return true;
	else
		return false;
}
