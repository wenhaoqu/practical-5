#pragma once
#include <string>

using namespace std;

class meerkat
{
public:
	meerkat();

public:
	void setName(string MeerName);
	string getName();
	void setAge(int MeerAge);
	int getAge();

private:
	string m_strMeerName;
	int m_nMeerAge;
};

