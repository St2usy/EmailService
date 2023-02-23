#include <iostream>
#include <vector>
#include <map>
#include <string>
using std::map;
using std::string;
using std::vector;
using std::cout;
using std::cin;

class MainController {
private:
public:
	void start() {
		int controll;
		while (1) {
			cin >> controll;
			switch (controll)
			{
			case 1 :
				break;
			case 2 :
				SignIn();
				break;
			case 3 :
				SingUp();
				break;
			}
		}
	}
};

class AccountController {
private:
	map<string, string> Account;
public:
	void SignIn() {
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
	void SignUp() {
		string id, pw;
		cout << "Please enter your new id and new pw" << std::endl;
		cin >> id >> pw;
		Account.insert(std::make_pair(id, pw));
		cout << "SignUp Complete" << std::endl;
	}
	void Edit() {
		string id,pw;
		cout << "Please enter your id and new pw" << std::endl;
		cin >> id >> pw;
		Account[id] = pw;
		cout << "Complete New pw" << std::endl;
	}
	void ViewInfo() {
		string id;
		cout << "Please enter your id" << std::endl;
		cin >> id;
		cout << Account.at(id) << std::endl;
	}
};

class EmailController {
private:
public:
	
	void SendEmail() {

	}
	void RecivedEmail() {

	}
	void SentEmail() {

	}
};

int main()
{
	MainController MAcc;
	MAcc.start();
	return 0;
}