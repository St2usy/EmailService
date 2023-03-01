#include <iostream>
#include "MainController.h"
#include "AccountController.h"

void MainController::start() 
{
	AccountController A;
	int controll;
	std::cout << "<EmailController>" << std::endl;
	std::cout << "Plz Enter the Key" << std::endl;
	std::cout << "case 1 : Exit" << std::endl;
	std::cout << "case 2 : SignIn" << std::endl;
	std::cout << "case 3 : SignUp" << std::endl;
	std::cout << "case 4 : Edit" << std::endl;
	std::cout << "case 5 : ViewInfo" << std::endl;
	while (1) {
		std::cin >> controll;
		switch (controll)
		{
		case 1:
			break;
		case 2:
			A.SignIn();
			break;
		case 3:
			A.SignUp();
			break;
		case 4:
			A.Edit();
			break;
		case 5:
			A.ViewInfo();
			break;
		}
	}
}