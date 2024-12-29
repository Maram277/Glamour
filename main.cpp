#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Customer.h"
#include "Booking.h"
#include "Payment.h"
#include "Treatment.h"

using namespace std;

int main() {
  
	cout << "<><><><><><>< WelCome to Glamour <><><><><><" << endl;
	cout << "\nWelcome to Glamour! Book your appointment and" << endl;
	cout << "experience the finset beauty service." << endl << endl;

	int customerID, bookingID, paymentID;
	string customerName, customerEmail, phoneNumber, bookingDate, bookingTime, paymentDate, paymentMethod;
	double amount;

	cout << "Enter customer ID: ";
	cin >> customerID;
	cin.ignore(); 

	cout << "Enter customer name: ";
	getline(cin, customerName);

	cout << "Enter customer phone-number: ";
	getline(cin, phoneNumber);

	cout << "Enter E-post: ";
	getline(cin, customerEmail);

	Customer* customer1 = new Customer(customerID, customerName, customerEmail, phoneNumber);

	cout << "\nEnter the bookings's ID: ";
	cin >> bookingID;

	cout << "Enter booking's date (YYYY-MM-DD): ";
	cin >> bookingDate;

	cout << "Enter booking's time (HH:MM): ";
	cin >> bookingTime;

	Booking* booking1 = new Booking(bookingID, bookingDate, bookingTime, customer1->getCustomerId());

	cout << "\nEnter payment ID: ";
	cin >> paymentID;

	cout << "Enter payment amount SEK: ";
	cin >> amount;

	cout << "Enter paymnet date (YYYY-MM-DD): ";
	cin >> paymentDate;

	cout << "Enter payment method: ";
	cin >> paymentMethod;

	Payment* payment1 = new Payment(paymentID, amount, paymentDate, paymentMethod);

	cout << "\n<><><><> Customer information <><><><>" << endl;
	customer1->showCustomerInfo();

	cout << "\n<><><><> Booking information <><><><>" << endl;
	booking1->showBookingInfo();

	cout << "\n<><><><> Payment information <><><><>" << endl;
	payment1->showPaymentInfo();


	delete customer1;
	delete booking1;
	delete payment1;

	vector<shared_ptr<Treatment>> treatments;
	int choice;

	cout << "\nVälj vilka behandlingar du vill lägga till:\n";
	cout << "1. Laser (500 kr)\n";
	cout << "2. Fillers (600 kr)\n";
	cout << "3. Lashes (400 kr)\n";
	cout << "4. Nails (300 kr)\n";
	cout << "0. Avsluta och visa listan\n";

	while (true) {
		cout << "Ange ditt val (0-4): ";
		cin >> choice;

		if (choice == 0) {
			break;
		}

		switch (choice) {
		case 1:
			treatments.push_back(make_shared<Laser>());
			cout << "Laser har lagts till.\n";
			break;
		case 2:
			treatments.push_back(make_shared<Fillers>());
			cout << "Fillers har lagts till.\n";
			break;
		case 3:
			treatments.push_back(make_shared<Lashes>());
			cout << "Lashes har lagts till.\n";
			break;
		case 4:
			treatments.push_back(make_shared<Nails>());
			cout << "Nails har lagts till.\n";
			break;
		default:
			cout << "Ogiltigt val. Försök igen.\n";
			break;
		}
	}


	cout << "\nThanks for you useing Glamour clinic! Have a nice day!" << endl;
	

	return 0;
}
