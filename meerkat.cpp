#include "meerkat.h"

meerkat::meerkat()
{

}

void meerkat::setName(string MeerName)
{
	this->m_strMeerName = MeerName;
}

string meerkat::getName()
{
	return this->m_strMeerName;
}

void meerkat::setAge(int MeerAge)
{
	this->m_nMeerAge = MeerAge;
}

int meerkat::getAge()
{
	return this->m_nMeerAge;
}
