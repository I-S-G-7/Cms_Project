#ifndef USER_H
#define USER_H
#include<iostream>
#include<cstring>
using namespace std;
class User {
	string name;
	string id;
	string password;
public:
	virtual void displayUser() = 0;
protected:
	void setName(string userName);
	void setId(string userId);
	void setPassword(string userPassword);
	string getName() const;
	string getId() const;
	string getPassword() const;
};
#endif