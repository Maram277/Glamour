#include "Treatment.h"

using namespace std;

string Laser::getDesctription() const
{
	return "Laser";
}

double Laser::getPrice() const
{
	return 500.0;
}

string Fillers::getDesctription() const
{
	return "Fillers";
}

double Fillers::getPrice() const
{
	return 600.0;
}

string Lashes::getDesctription() const
{
	return "Lashes";
}

double Lashes::getPrice() const
{
	return 400.0;
}

string Nails::getDesctription() const
{
	return "Nails";
}

double Nails::getPrice() const
{
	return 300.0;
}


