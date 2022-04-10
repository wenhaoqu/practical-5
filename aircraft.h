#pragma once

#include "person.h"

class aircraft
{
public:
	aircraft(string callsign, person thePilot, person theCoPilot);

	void setPilot(person thePilot);
	person getPilot();
	void setCoPilot(person theCoPilot);
	person getCoPilot();
	void printDetails();

private:
	string m_callsign;
	person m_thePilot;
	person m_theCoPilot;
};

