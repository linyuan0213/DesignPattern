#ifndef __CONCRETE_PRODUCT_H
#define __CONCRETE_PRODUCT_H

#include "abstract_product.h"

//ACar 具体实现
class ACar : public Car 
{
	std::string name() override;
};

class BCar : public Car
{
	std::string name() override;
};

class ABike : public Bike
{
	std::string name() override;
};

class BBike : public Bike
{
	std::string name() override;
};

#endif 
