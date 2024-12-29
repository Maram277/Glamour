#pragma once
#include <string>

using namespace std;

class Booking
{
private:
	int BookingID;
	string BookingData;
	string BookingTime;
	int CustomerID;

public:

	Booking(int BooingID, const string data, const string time, int customer);

	int getBookingId() const;
	int getCustomerId() const;
	void showBookingInfo() const;
};
