#include "Customer.h"
#include <string>

using namespace std;

Customer::Customer(int Id, const string& name, const string& email, const string& number):
	customerID(Id), name(name), email(email), phone_number(number)
{
}

void Customer::showCustomerInfo() const
{
	cout << "Customer informations: " << endl;
	cout << "-----------------------" << endl;
	cout << "Customer ID: " << customerID << endl;
	cout << "Name: " << name << endl;
	cout << "Email: " << email << endl;
	cout << "Phone number: " << phone_number << endl;
	cout << "-----------------------" << endl;
}

int Customer::getCustomerId() const
{
	return this->customerID;
}
