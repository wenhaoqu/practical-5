#include "cart.h"

cart::cart()
{
	this->m_nCartNum = 0;
}

bool cart::addMeerkat(meerkat cat)
{
	if (this->m_nCartNum == CatFullCounts)
	{
		printf("cart is full\n");
		return false;
	}
	
	this->cat[this->m_nCartNum].setName(cat.getName());
	this->cat[this->m_nCartNum].setAge(cat.getAge());
	this->m_nCartNum++;

	return true;
}

void cart::emptyCart()
{
	for (int i = 0; i < CatFullCounts; i++)
	{
		this->cat[i].setName("");
		this->cat[i].setAge(0);
		this->m_nCartNum = 0;
	}
}

void cart::printMeerkats()
{
	for (int i = 0; i < CatFullCounts; i++)
	{
		printf("%s %d\n", this->cat[i].getName().c_str(), this->cat[i].getAge());
	}
}
