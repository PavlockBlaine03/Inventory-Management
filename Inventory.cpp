#include "Inventory.h"

void Inventory::addProduct(const Product& p)
{
	m_products.push_back(p);
}
void Inventory::removeProduct(int productID)
{
	for (auto it = m_products.begin(); it != m_products.end(); it++)
	{
		if (it->getProductID() == productID)
		{
			m_products.erase(it);
			break;
		}
	}
}

void Inventory::displayInventory()
{
	cout << "Inventory:\n";
	for (auto& product : m_products)
	{
		cout << "ID: " << product.getProductID() << ", Name:" << product.getProductName()
			<< ", Price: $" << product.getPrice() << ", Quantity: " << product.getQuanity() << "\n";
	}
}

Product Inventory::findProductByID(int id)
{
	for (auto& product : m_products)
	{
		if (product.getProductID() == id)
		{
			return product;
		}
	}
	return Product(-1, "", 0.0, 0);
}

void Inventory::saveToFile(const string& filename)
{
	ofstream outFile(filename);
	if (outFile.is_open()) 
	{
		for (auto& product : m_products) 
		{
			outFile << product.serialize() << "\n";
		}
		outFile.close();
		std::cout << "Inventory saved to file: " << filename << "\n";
	}
	else 
	{
		std::cerr << "Unable to open file for writing: " << filename << "\n";
	}
}

void Inventory::addShipmentToProduct(int productID, int quantityReceived)
{
	for (auto& product : m_products) 
	{
		if (productID == product.getProductID()) 
		{
			product.addShipment(quantityReceived);
			break;
		}
	}
}
