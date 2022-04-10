#include "aircraft.h"

aircraft::aircraft(string callsign, person thePilot, person theCoPilot)
{
	this->m_callsign = callsign;
	this->m_thePilot.setName(thePilot.getName());
	this->m_thePilot.setSalary(thePilot.getSalary());
	this->m_theCoPilot.setName(theCoPilot.getName());
	this->m_theCoPilot.setSalary(theCoPilot.getSalary());
}

void aircraft::setPilot(person thePilot)
{
	this->m_thePilot.setName(thePilot.getName());
	this->m_thePilot.setSalary(thePilot.getSalary());
}

person aircraft::getPilot()
{
	return this->m_thePilot;
}

void aircraft::setCoPilot(person theCoPilot)
{
	this->m_theCoPilot.setName(theCoPilot.getName());
	this->m_theCoPilot.setSalary(theCoPilot.getSalary());
}

person aircraft::getCoPilot()
{
	return this->m_theCoPilot;
}

void aircraft::printDetails()
{
	printf("%s\n%s\n%s\n", this->m_callsign.c_str(), this->m_thePilot.getName().c_str(), this->m_theCoPilot.getName().c_str());
}
