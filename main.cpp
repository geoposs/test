#include <iostream>

std::ostream&  printCPPVersion()
{
	return std::cout << __cplusplus;
}

int main(int argc, char* argv[])
{
	printCPPVersion();
}
