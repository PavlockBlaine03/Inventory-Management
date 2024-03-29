#pragma once
#include <iostream>
#include "Product.h"
#include <vector>

class Inventory
{
private:
	vector<Product> m_products;
	
public:
	
	void addProduct(const Product& p);
	void removeProduct(int);
	void displayInventory();
	Product findProductByID(int);

	void saveToFile(const string& filename);
	void addShipmentToProduct(int, int);
};