#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
	int mProductID;
	string mProductName;
	float mPrice;
	int mQuantity;
	bool gotShipment = false;
	
	const int SHIPMENTSIZE = 10;

public:
	Product();
	Product(int, string, float, int);

	void setProductID(int);
	void setProductName(string);
	void setPrice(float);
	void setQuanity(int);
	void shipment(bool);

	int getProductID();
	string getProductName();
	float getPrice();
	int getQuanity();
};