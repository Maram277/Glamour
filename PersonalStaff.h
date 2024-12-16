#ifndef PERSONALSTAFF_H
#define PERSONALSTAFF_H
#include <string>
#include <vector>
#include <memory>
#include "Treatment.h"

using namespace std;

class PesonalStaff {
public:
	virtual ~PersonalStaff() = default;
	virtual bool canPerformTreatment(const Treatment& treatment) const = 0;
	virtual void addTreatment(shared_ptr<Treatment> treatment) = 0;
	virtual void listTreatments() const = 0;
};

class Nurse : public PersonalStaff {
private:
	vector<shared_ptr<Treatment>> treatments;
public:
	bool canPerformTreatment(const Treatment& treatment) const override;
	void addTreatment(shared_ptr<Treatment> treatment) override;
	void listTreatments() const override;
};

class Specialist : public PersonalStaff {
private:
	vector<shared_ptr<Treatment>> treatment;
public:
	bool canPerformTreatment(const Treatment& treatment) const override;
	void addTreatment(shared_ptr<Treatment> treatment) override;
	void listTreatments() const override;
};

#endif