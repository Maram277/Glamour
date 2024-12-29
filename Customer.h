#pragma once
#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
	int customerID;
	string name;
	string email;
	string phone_number;

public:
	Customer(int Id, const string& name, const string& email, const string& number);
	void showCustomerInfo() const; // visa alla kundens info.
	int getCustomerId() const; // visa kundens id-nummer,ex: om man är medlem eller inte. 

};
