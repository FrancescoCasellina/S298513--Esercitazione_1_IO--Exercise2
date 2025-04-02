#include <iostream>
#include <fstream>
//#include "functions.hpp"

double map(double v)
{
	return ( (3.0*v - 7.0) / 4.0 );
}

int main()
{
	double val, mapv = 0, x = 0;
	std::ifstream fl1("data.txt");
	std::ofstream fl2("result.txt");
	if(!fl1)
	{
		std::cerr << "Warning: data.txt couldn't be found\nExiting..." << std::endl;
		return 1;
	}
	fl2 << "# N Mean" << std::endl;
	std::cout << "Reading data.txt ..." << std::endl;
	while(fl1 >> val)
	{
		mapv += map(val);
		x++;
		if (x > 0)
		{
			fl2 << x << "\t" << mapv/x << std::endl;
		}
	}
	std::cout << "Completed >> Check result.txt" << std::endl;
	std::cout << "---End of Program---" << std::endl;
	return 0;
}
