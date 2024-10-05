#include <iostream>

int main() {
	double goofygoober, goofygoober2, res;
	char oper;
	std::string resp;
	do {
		std::cout << "Enter two numbers: ";
		std::cin >> goofygoober >> goofygoober2;
	


		std::cout << "\t+ Addition\n";
		std::cout << "\t- Subtraction\n";
		std::cout << "\t* Multiplication\n";
		std::cout << "\t/ Division\n";

		std::cout << "Select an option: \n";
		std::cin >> oper;

		switch (oper) {
		case '+':
			res = goofygoober + goofygoober2;
			std::cout << "Results: " << res << '\n';
			break;

		case '-':
			res = goofygoober - goofygoober2;
			std::cout << "Results: " << res << '\n';
			break;

		case '*':
			res = goofygoober * goofygoober2;
			std::cout << "Results: " << res << '\n';
			break;
		case '/':
			res = goofygoober / goofygoober2;
			std::cout << "Results: " << res << '\n';
			break;

		default:
			std::cout << "Invalid option.\n";
			break;
		}

		std::cout << "Would you like to continue using the calculator? [Y/N]: ";
		std::cin >> resp;
	} while (resp == "Y" || resp == "y");
}