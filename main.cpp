#include <iostream>
#include "Inventory.h"

using namespace std;

int main()
{
	Product iphone(64835, "Iphone 14", 999.99, 3);
	Product laptop(56464, "Laptop", 799.98, 10);
	Product printer(85385, "Printer", 349.99, 12);

	Inventory inventory;

	inventory.addProduct(iphone);
	inventory.addShipmentToProduct(iphone.getProductID(), 4);

	inventory.addProduct(laptop);
	inventory.addProduct(printer);
	
	inventory.saveToFile("inventory.txt");
	inventory.displayInventory();

	return 0;
}