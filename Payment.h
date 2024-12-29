#pragma once
#include <string>

using namespace std;

class Payment
{
private:
	int paymentID;
	double amount;
	string paymentDate;
	string paymentMethod;

public:
	Payment(int paymentID, double amount, const string paymentDate, const string paymentMethod);

	int getPaymentID() const;
	double getAmount() const;
	string getPaymentMethod() const;
	void showPaymentInfo() const;

};
