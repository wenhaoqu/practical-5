
#include <iostream>
#include "aircraft.h"


int main()
{
    person p1("Luna", 10);
    person p2("Mike", 20);
    person p3("Jessica", 30);
    person p4("Cindy", 40);
    cout << p1.getName() << endl << p1.getSalary() << endl;
    cout << p2.getName() << endl << p2.getSalary() << endl;
    cout << p3.getName() << endl << p3.getSalary() << endl;
    cout << p4.getName() << endl << p4.getSalary() << endl;
    cout << "*****************************************************" << endl;
    aircraft a("CHINA", p1, p2);
    a.printDetails();
    cout << "!!!!!!!!!!!!!" << endl;
    a.setPilot(p3);
    a.printDetails();
	
	return 0;
}
