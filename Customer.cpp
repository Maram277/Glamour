#include "Customer.h"
#include <string>

using namespace std;

Customer::Customer(int Id, string name, string email, string number):
	Customer_Id(Id), Name(name), Email(email), Phone_number(number)
{
}

void Customer::showCustomerInfo() const
{
	cout << "Customer informations: " << endl;
	cout << "-----------------------" << endl;
	cout << "Customer ID: " << Customer_Id << endl;
	cout << "Name: " << Name << endl;
	cout << "Phone number: " << Phone_number << endl;
	cout << "-----------------------" << endl;
}

int Customer::getCustomerId() const
{
	return Customer_Id;
}
