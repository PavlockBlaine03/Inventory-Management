#include "Product.h"

Product::Product(string id, string name, float price, int quantity)
{
	mProductID = id;
	mProductName = name;
	mPrice = price;
	mQuantity = quantity;
}
Product::Product() {}

void Product::setProductID(string id)
{
	mProductID = id;
}
void Product::setProductName(string name)
{
	mProductName = name;
}
void Product::setPrice(float price)
{
	mPrice = price;
}
void Product::setQuanity(int quantity)
{
	mQuantity = quantity;
}
void Product::shipment(bool status)
{
	if (status)
	{
		mQuantity += SHIPMENTSIZE;
	}

}
string Product::getProductID()
{
	return mProductID;
}
string Product::getProductName()
{
	return mProductName;
}
float Product::getPrice()
{
	return mPrice;
}
int Product::getQuanity()
{
	return mQuantity;
}
