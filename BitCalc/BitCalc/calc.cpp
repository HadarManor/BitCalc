#include "calc.h"

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

int Calculator::XOR(int num, int key)
{
	return key ^ num;
}

std::string Calculator::XOR(std::string str, int key)
{
	int strLen = str.length();
	char* cString = (char*)(str.c_str());
	for (int i = 0; i < strLen; i++)
	{
		*(cString + i) = (*(cString + i) ^ key);
	}
	return cString;
}

int Calculator::NOT(int num)
{
	return ~num;
}

std::string Calculator::NOT(std::string str)
{
	int strLen = str.length();
	char* cString = (char*)(str.c_str());
	for (int i = 0; i < strLen; i++)
	{
		*(cString + i) = ~(*(cString + i));
	}
	return cString;
}

int Calculator::OR(int a, int b)
{
	return a | b;
}

std::string Calculator::OR(std::string str, int num)
{
	int strLen = str.length();
	char* cString = (char*)(str.c_str());
	for (int i = 0; i < strLen; i++)
	{
		*(cString + i) = (*(cString + i) | num);
	}
	return cString;
}

int Calculator::AND(int a, int b)
{
	return a & b;
}

std::string Calculator::AND(std::string str, int num)
{
	int strLen = str.length();
	char* cString = (char*)(str.c_str());
	for (int i = 0; i < strLen; i++)
	{
		*(cString + i) = (*(cString + i) & num);
	}
	return cString;
}


