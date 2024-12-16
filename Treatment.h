#ifndef TREATMENT_H
#define TREATMENT_H
#include <string>

using namespace std;

//Abstrakt basklass för behandlingar
class Treatment {
public:
	virtual ~Treatment() = default;
	virtual string getDesctription() const = 0;
	virtual double getPrice() const = 0;
};

class Laser : public Treatment {
public:
	string getDesctription() const override;
	double getPrice() const override;
};

class Fillers : public Treatment {
public: 
	string getDesctription() const override;
	double getPrice() const override;
};

class Lashes : public Treatment {
public:
	string getDesctription() const override;
	double getPrice() const override;
};

class Nails : public Treatment {
public:
	string getDesctription() const override;
	double getPrice() const override;
};

#endif