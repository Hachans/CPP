#include "Conversion.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Provide 1 argument plsss" << std::endl;
		return 1;
	}
	
	std::string str = argv[1];
	double num = strtod(str.c_str(), NULL);

	if (!num && str[0] != '0' && str.length() != 1){
		std::cout << "Not a literal" << std::endl; 
		return 3;
	}

	// char
	if ((str.find_first_of("0123456789") == std::string::npos) && str.length() == 1)
		std::cout << "char: '" << str[0] << "'" << std::endl;
	else if (isprint(num))
		std::cout << "char: '" <<  static_cast<char>(num) << "'" <<  std::endl;
	else if (num == 127 || (num < 32 && num > 0))
		std::cout << "char: Non displayable" <<  std::endl;
	else
		std::cout << "char: impossible" <<  std::endl;

	// int
	if (!num && str[0] != '0')
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	else if (num > INT_MAX || num < INT_MIN || isnan(num))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << atoi(str.c_str()) << std::endl;

	// float
	std::cout.precision(1);
	float fnum = strtof(str.c_str(), NULL);

	if (!fnum && errno == ERANGE){
		std::cout << "Number out of range" << std::endl;
		return 5;
	}

	if (!fnum && str[0] != '0')
		std::cout << std::fixed << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
	else
		std::cout << std::fixed << "float: " << fnum << "f" << std::endl;

	// double
	if (!num && str[0] != '0')
		std::cout << std::fixed << "double: " << static_cast<double>(str[0]) << std::endl;
	else
		std::cout << std::fixed << "double: " << num << std::endl;


	return 0;
}