#pragma once

#include "meerkat.h"

const int CatFullCounts = 5;

class cart
{
public:
	cart();

public:
	bool addMeerkat(meerkat cat);
	void emptyCart();
	void printMeerkats();

private:
	meerkat cat[CatFullCounts];
	int m_nCartNum;
};

