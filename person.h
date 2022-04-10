#pragma once
#include <string>

using namespace std;

class person
{
public:
	person();
	person(string MyName, int MySalary);

public:
	void setName(string MyName);
	string getName();
	void setSalary(int MySalary);
	int getSalary();

private:
	string m_strMyName;
	int m_nMySalary;
};

