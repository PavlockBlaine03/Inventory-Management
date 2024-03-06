#include "Product.h"

Product::Product(int id, string name, float price, int quantity)
{
	mProductID = id;
	mProductName = name;
	mPrice = price;
	mQuantity = quantity;
}
Product::Product() {}

void Product::setProductID(int id)
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
void Product::addShipment(int shipmentSize)
{
	if (shipmentSize > 0)
	{
		mQuantity += shipmentSize;
		cout << "Shipment added. New quantity: " << mQuantity << "\n";
	}
	else
		cerr << "Error: Quantity received in shipment must be greater than 0.\n";

}
int Product::getProductID()
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
string Product::serialize()
{
	return to_string(mProductID) + "," + mProductName + "," + to_string(mPrice) + "," + to_string(mQuantity);
}
