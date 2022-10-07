#include <iostream>
#include <string>

int main() {
	std::string name = "Vlad";
	std::string surname = "Churakov";
	std::string patronymic = "Ivanovich";

	std::string phoneNumber = "+380 000 000 00 01";
	std::string email = "vadim@gmail.com";

	std::string productName = "football club";
	int productPrice = 1670000000;
	int productAmount = 1;


	std::cout << name << ' ' << surname << ' ' << patronymic << std::endl;
	std::cout << phoneNumber << std::endl << email << std::endl;
	std::cout << productName << std::endl << '$' << productPrice << std::endl << productAmount;

	return 0;
}
