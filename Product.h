#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Product
{
private:
	int mProductID;
	string mProductName;
	float mPrice;
	int mQuantity;
	bool gotShipment = false;

public:
	Product();
	Product(int, string, float, int);

	void setProductID(int);
	void setProductName(string);
	void setPrice(float);
	void setQuanity(int);
	void addShipment(int);

	int getProductID();
	string getProductName();
	float getPrice();
	int getQuanity();

	Product& operator=(const Product& other) {
		if (this != &other) {
			mProductID = other.mProductID;
			mProductName = other.mProductName;
			mPrice = other.mPrice;
			mQuantity = other.mQuantity;
		}
		return *this;
	}

	string serialize();
};