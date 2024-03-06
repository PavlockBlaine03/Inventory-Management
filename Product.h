#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
	string mProductID;
	string mProductName;
	float mPrice;
	int mQuantity;
	bool gotShipment = false;
	
	const int SHIPMENTSIZE = 25;

public:
	Product();
	Product(string, string, float, int);

	void setProductID(string);
	void setProductName(string);
	void setPrice(float);
	void setQuanity(int);
	void shipment(bool);

	string getProductID();
	string getProductName();
	float getPrice();
	int getQuanity();
};