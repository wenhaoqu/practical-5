#include "person.h"


person::person()
{
}

person::person(string MyName, int MySalary)
{
	this->m_strMyName = MyName;
	this->m_nMySalary = MySalary;
}

void person::setName(string MyName)
{
	this->m_strMyName = MyName;
}

string person::getName()
{
	return this->m_strMyName;
}

void person::setSalary(int MySalary)
{
	this->m_nMySalary = MySalary;
}

int person::getSalary()
{
	return this->m_nMySalary;
}
