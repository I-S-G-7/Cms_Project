#include<iostream>
#include"User.h"
void User::setName(string userName)
{
	name = userName;
}
void User::setId(string userId)
{
	id = userId;
}
void User::setPassword(string userPassword)
{
	password = userPassword;
}
string User::getName() const
{
	return name;
}
string User::getId() const
{
	return id;
}
string User::getPassword() const
{
	return password;
}