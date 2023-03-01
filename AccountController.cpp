#include <iostream>
#include <map>
#include <string>
#include "AccountController.h"
using std::cin;
using std::cout;

void AccountController::SignIn() {
	string id, pw;
	cin >> id;
	auto itr = Account.find(id);
	if (itr != Account.end()) {
		cin >> pw;
		auto itr = Account.find(pw);
		if (itr != Account.end()) {
			cout << id << "LogIn Complete";
		}
	}
	else
		cout << id << "is not SignedUp";
}

void AccountController::SignUp() {
	string id, pw;
	cout << "Please enter your new id and new pw" << std::endl;
	cin >> id >> pw;
	Account.insert(std::make_pair(id, pw));
	cout << "SignUp Complete" << std::endl;
}

void AccountController::Edit() {
	string id, pw;
	cout << "Please enter your id and new pw" << std::endl;
	cin >> id >> pw;
	Account[id] = pw;
	cout << "Complete New pw" << std::endl;
}

void AccountController::ViewInfo() {
	string id;
	cout << "Please enter your id" << std::endl;
	cin >> id;
	cout << Account.at(id) << std::endl;
}