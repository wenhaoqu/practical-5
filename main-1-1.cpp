
#include <iostream>
#include "meerkat.h"


int main()
{
    meerkat m1;
    meerkat m2;
    meerkat m3;
    meerkat m4;
    meerkat m5;
    m1.setName("Luna");
    m1.setAge(12);
    m2.setName("Mike");
    m2.setAge(13);
    m3.setName("Jessica");
    m3.setAge(14);
    m4.setName("Cindy");
    m4.setAge(15);
    m5.setName("Lucy");
    m5.setAge(16);
    cout << m1.getName() << endl;
    cout << m1.getAge() << endl;
    cout << m2.getName() << endl;
    cout << m2.getAge() << endl;
    cout << m3.getName() << endl;
    cout << m3.getAge() << endl;
    cout << m4.getName() << endl;
    cout << m4.getAge() << endl;
    cout << m5.getName() << endl;
    cout << m5.getAge() << endl;
	
	return 0;
}
