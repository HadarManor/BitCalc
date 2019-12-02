#pragma once
//TODO :
//xor
//and
//or
//not
//shl
//shr
//nand
#include <iostream>
#include <string>
#include <bitset>

class Calculator
{
public:
	Calculator();
	~Calculator();
	/*XOR*/
	int XOR(int, int);
	std::string XOR(std::string, int);
	/*NOT*/
	int NOT(int);
	std::string NOT(std::string);
	/*OR*/
	int OR(int, int);
	std::string OR(std::string, int);
	/*AND*/
	int AND(int, int);
	std::string AND(std::string, int);

};