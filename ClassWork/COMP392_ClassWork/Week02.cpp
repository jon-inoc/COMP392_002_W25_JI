#pragma once
#include <iostream>

int main() 
{
	int i = 10;

	if (i == 0) 
	{
		std::cout << "true" << std::endl;
	}
	else 
	{
		std::cout << "false" << std::endl;
	}

	while (i--) 
	{
		std::cout << "i: " + i << std::endl;
	}

	int j = i;

	while (j--) 
	{
		std::cout << "j: " + j << std::endl;
		if (j == 0) 
		{
			break;
		}
	}

	std::cout << "=============================================" << std::endl;

	for (int k = 0; k < 10; k+=2) 
	{
		std::cout << "k: " + k << std::endl;
	}
	
	std::cout << "=============================================" << std::endl;

	j = 10;
	do {
		std::cout << j << std::endl;
		return j == 0;
	} while (--j);

	std::cout << "=============================================" << std::endl;

	int n = 1;
	n = n << 1;
	std::cout << n << std::endl;
	std::cout << "=============================================" << std::endl;

	n = 1;
	n = n << 10;
	std::cout << n << std::endl;
	std::cout << "=============================================" << std::endl;

	n = 1;
	n = 12 >> 1;
	std::cout << n << std::endl;
	std::cout << "=============================================" << std::endl;

}
