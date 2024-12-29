#include <iostream>
#include <string>
#include "Payment.h"

using namespace std;

Payment::Payment(int paymentID, double amount, const string Date, const string Method)
	:paymentID(paymentID), amount(amount), paymentDate(Date), paymentMethod(Method)
{
}

int Payment::getPaymentID() const
{
	return this->paymentID;
}

double Payment::getAmount() const
{
	return amount;
}

string Payment::getPaymentMethod() const
{
	return paymentMethod;
}

void Payment::showPaymentInfo() const
{
	cout << "Payment information:" << endl;
	cout << "¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨" << endl;
	cout << "Payment ID: " << paymentID << endl;
	cout << "Amount: " << amount << "SEK." << endl;
	cout << "Paymnet date: " << paymentDate << endl;
	cout << "Payment method: " << paymentMethod << endl;
	cout << "¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨" << endl;
}
