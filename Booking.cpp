#include <iostream>
#include <string>
#include "booking.h"

using namespace std;

Booking::Booking(int BooingID, const string data, const string time, int customer) :
	BookingID(BooingID), BookingData(data), BookingTime(time), CustomerID(customer)
{
}

int Booking::getBookingId() const
{
	return this->BookingID;
}

int Booking::getCustomerId() const
{
	return this->CustomerID;
}

void Booking::showBookingInfo() const
{
	cout << "Booking information:" << endl;
	cout << "¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨" << endl;
	cout << "Booking ID: " << BookingID << endl;
	cout << "Booking data: " << BookingData << endl;
	cout << "Booking time: " << BookingTime << endl;
	cout << "Customer ID: " << CustomerID << endl;
	cout << "¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n" << endl;

}
