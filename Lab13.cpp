1.	#include <iostream>
2.	#include <iomanip>
3.	#include <vector>
4.	#include <string>

5.	using namespace std;

6.	//struct for menuItemType
a.	struct menuItemType
b.	{
	i.string menuItem;
	ii.	double menuPrice;
	c.	};
d.	void getData(menuItemType menuList[]);
e.	void showMenu(menuItemType menuList[], int x);
f.	void printCheck(menuItemType menuList[], int menuOrder[], int x);

g.	int main()
h.	{

	i.	// Declare functions and variables
		ii.	const int menuItems = 8;
	iii.menuItemType menuList[menuItems];
	iv.	int menuOrder[menuItems] = { 0 };
	v.	int orderChoice = 0;
	vi.	bool ordering = true;
	vii.	int count = 0;
	viii.	// Set the menu
		ix.getData(menuList);
	x.	// Order
		xi.showMenu(menuList, menuItems);
	xii.	while (ordering)
		xiii.	{
		xiv.cout << "Please enter the number for the item you would\n"
			1. << "like to order, or enter [0] to complete your order."
			2. << endl;
		xv.cin >> orderChoice;
		xvi.	if (orderChoice > 0 && orderChoice <= menuItems)
			xvii.	{
			1.	menuOrder[orderChoice - 1] += 1;
			xviii.	}
		xix.	else
			1.	ordering = false;
		xx.	}
	xxi.printCheck(menuList, menuOrder, menuItems);
	xxii.cin.ignore(2);
	xxiii.	return 0;
	i.	}

j.	void getData(menuItemType menuList[])
k.	{
	i.	// Declare menuItemTypes
		ii.menuItemType plainEgg;
	iii.menuItemType baconEgg;
	iv.menuItemType muffin;
	v.menuItemType frenchToast;
	vi.menuItemType fruitBasket;
	vii.menuItemType cereal;
	viii.menuItemType coffee;
	ix.menuItemType tea;

	x.	// Initialize menuItemTypes variables
		xi.plainEgg.menuItem = "Plain Egg";
	xii.plainEgg.menuPrice = 1.45;
	xiii.baconEgg.menuItem = "Bacon and Egg";
	xiv.baconEgg.menuPrice = 2.45;
	xv.muffin.menuItem = "Muffin";
	xvi.muffin.menuPrice = 0.99;
	xvii.frenchToast.menuItem = "French Toast";
	xviii.frenchToast.menuPrice = 1.99;
	xix.fruitBasket.menuItem = "Fruit Basket";
	xx.fruitBasket.menuPrice = 2.49;
	xxi.cereal.menuItem = "Cereal";
	xxii.cereal.menuPrice = 0.69;
	xxiii.coffee.menuItem = "Coffee";
	xxiv.coffee.menuPrice = 0.50;
	xxv.tea.menuItem = "Tea";
	xxvi.tea.menuPrice = 0.75;

	xxvii.menuList[0] = plainEgg;
	xxviii.menuList[1] = baconEgg;
	xxix.menuList[2] = muffin;
	xxx.menuList[3] = frenchToast;
	xxxi.menuList[4] = fruitBasket;
	xxxii.menuList[5] = cereal;
	xxxiii.menuList[6] = coffee;
	xxxiv.menuList[7] = tea;
	l.	}

m.	void showMenu(menuItemType menuList[], int x)
n.	{
	i.	// Function variables
		ii.	int count;

	iii.cout << "Welcome to Bob Evans!" << endl;
	iv.cout << "What would you to order?" << endl;
	v.	for (count = 0; count < x; count++)
		vi.	{
		vii.cout << setw(2) << left << "[" << count + 1 << "]"
			1. << menuList[count].menuItem << '$'
			2. << menuList[count].menuPrice << endl;
		viii.	}
	o.	}

p.	void printCheck(menuItemType menuList[], int menuOrder[], int menuItems)
q.	{
	i.	double checkTotal = 0;
	ii.	double checkTax = 0;
	iii.	const double TAX = .05;
	iv.cout << "Thanks for eating at Bob Evans!"
		1. << "Customer check: " << endl;
	v.	for (int i = 0; i < menuItems; i++)
		vi.	{
		a.	if (menuOrder[i] > 0) {
			i.cout << setprecision(3) << setw(10) << left << menuList[i].menuItem
				a. << '$' << (menuList[i].menuPrice * menuOrder[i]) << endl;
			ii.checkTotal += (menuList[i].menuPrice * menuOrder[i]);
			b.
		}
		vii.	}
	viii.checkTax = checkTotal * TAX;
	ix.checkTotal += checkTax;
	x.cout << setw(14) << left << "Tax" << checkTax << endl
		1. << setw(14) << left << "Total" << checkTotal << endl;
	r.	}

