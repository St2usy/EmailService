#pragma once
#include <map>
#include <string>
using std::map;
using std::string;

class AccountController {
private:
	map<string, string> Account;
public:
	void SignIn();
	void SignUp();
	void Edit();
	void ViewInfo();
};