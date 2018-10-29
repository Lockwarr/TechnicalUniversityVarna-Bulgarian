#pragma once
#include <string>
#include <iostream>
#include <iomanip>

template<class T>
class CDynArray
{
private:
	int size;
	T *myArray;
public:
	CDynArray(int Size) 
	{
		size = Size;
		myArray = new T[size];
	}

	bool setArray(int elem, T val)
	{
		if (elem >= size)
			return false;

		myArray[elem] = val;
		return true;
	}

	bool sumElements(double &sum)
	{
		for (int i = 0; i < size; i++)
		{
			sum += myArray[i];
		}
		return true;
	}

	T maxElement()
	{
		T max = myArray[0];
		for (int i = 0; i < size; i++)
		{
			if (max < myArray[i])
			{
				max = myArray[i];
			}
		}
		return max;
	}

	T searchElement(int elemNumber)
	{
		return myArray[elemNumber];
	}
	
	void print() {
		for (int j = 0; j < size; j++) {
			//typeid - type of each value
			std::cout << std::setw(7) << "element number: "<< j << std::setw(13) <<"value: "<<myArray[j]
				<< " type: " << typeid(myArray[j]).name() << std::endl;
		}
		std::cout << "-----------------------------" <<  std::endl;
	}
};