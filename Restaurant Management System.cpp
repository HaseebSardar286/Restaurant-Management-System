#include<iostream>
#include<string>
using namespace std;
class Restaurant
{
public:
	string username;
	string name, code, pass;
	Restaurant()
	{
		name = "";
		code = "";
	}
	void restaurant_menu()
	{
		cout << "--------------------------------------------|" << endl;
		cout << "  Welcome to our Cafe                       |" << endl;
		cout << "  Please choose options from above          |" << endl;
		cout << "--------------------------------------------|" << endl;
		cout << endl;
	}

	virtual void display_menu()
	{
		cout << "--------------------------------------------|" << endl;
		cout << "Press 1 for Admin login.                    |" << endl;
		cout << "Press 2 for writing customer info & order.  |" << endl;
		cout << "Press 3 to view customer info & order.      |" << endl;
		cout << "Press 4 to see food prices.                 |" << endl;
		cout << "Press 5 to update customer order.           |" << endl;
		cout << "Press 6 to logout.                          |" << endl;
		cout << "--------------------------------------------|" << endl;

		cout << endl;
	}
};

class Admin : public Restaurant
{
public:

	Admin()
	{
		username = "admin1";
		pass = "admin123";

	}

	void set_name()
	{
		cout << "Enter name:";
		cin >> name;
	}
	void set_pass()
	{
		cout << "Enter code of admin:";
		cin >> code;
	}
	void admin_info()
	{
		if ((name == username) && (code == pass))
		{
			cout << "Admin verified" << endl;
			cout << endl;
		}
		else
		{
			cout << "Not Verified.Try Again" << endl;
			cout << endl;
		}
	}
};

class customer :public Admin
{
public:
	string phone;
	string address;
	string option;
	int quantity;
	int size1 = 0;
	double bill;
	double Total;
	double pizza = 0;
	double drink = 0;
	double burger = 0;
	double fries = 0;


	customer()
	{
		phone = "";
		address = "";
		option = "";
		quantity = 0;
		bill = 0;
		Total = 0;
		pizza = 650.0;
		drink = 79.99;
		burger = 299.99;
		fries = 100.0;
	}
	void set_phone()
	{
		cout << "Enter phone of customer :";
		cin >> phone;
	}
	void set_address()
	{
		cout << "Enter address of customer :";
		cin >> address;
		cout << endl;
	}
	void set_order()
	{

		cout << "Which item do you want to order :";
		cin >> option;
		cout << "Enter quantity to buy item        :";
		cin >> quantity;
		if ((option == "Pizza") || (option == "pizza"))
		{
			bill = pizza * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Burger       :";
				cin >> quantity;
				int bill1 = burger * quantity;
				cout << "Enter Quantity of Drink       :";
				cin >> quantity;
				int bill2 = drink * quantity;
				cout << "Enter Quantity of Fries       :";
				cin >> quantity;
				int bill3 = fries * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;
				cout << "Your Total bill is           :" << Total << endl;
			}
		}
		else if ((option == "Drink") || (option == "drink"))
		{
			bill = drink * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Burger       :";
				cin >> quantity;
				int bill1 = burger * quantity;
				cout << "Enter Quantity of Pizza        :";
				cin >> quantity;
				int bill2 = pizza * quantity;
				cout << "Enter Quantity of Fries        :";
				cin >> quantity;
				int bill3 = fries * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;

				cout << "Your Total bill is           :" << Total << endl;
			}
		}
		else if ((option == "Burger") || (option == "burger"))
		{
			bill = burger * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Pizza       :";
				cin >> quantity;
				int bill1 = pizza * quantity;
				cout << "Enter Quantity of Drink       :";
				cin >> quantity;
				int bill2 = drink * quantity;
				cout << "Enter Quantity of Fries       :";
				cin >> quantity;
				int bill3 = fries * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;
				cout << "Your Total bill is           :" << Total << endl;
			}
		}
		else if ((option == "Fries") || (option == "fries"))
		{
			bill = fries * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Burger       :";
				cin >> quantity;
				int bill1 = burger * quantity;
				cout << "Enter Quantity of Drink        :";
				cin >> quantity;
				int bill2 = drink * quantity;
				cout << "Enter Quantity of Pizza        :";
				cin >> quantity;
				int bill3 = pizza * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;

				cout << "Your Total bill is           :" << Total << endl;
			}
		}

		else
		{
			Total = 0;
			cout << "This item is not available     :" << Total << endl;
		}
		cout << endl;
	}
	void update_order()
	{

		cout << "Which item do you want to order :";
		cin >> option;
		cout << "Enter quantity to buy item        :";
		cin >> quantity;

		if ((option == "Pizza") || (option == "pizza"))
		{
			bill = pizza * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Burger       :";
				cin >> quantity;
				int bill1 = burger * quantity;
				cout << "Enter Quantity of Drink       :";
				cin >> quantity;
				int bill2 = drink * quantity;
				cout << "Enter Quantity of Fries       :";
				cin >> quantity;
				int bill3 = fries * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;
				cout << "Your Total bill is           :" << Total << endl;
			}
		}
		else if ((option == "Drink") || (option == "drink"))
		{
			bill = drink * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Burger       :";
				cin >> quantity;
				int bill1 = burger * quantity;
				cout << "Enter Quantity of Pizza        :";
				cin >> quantity;
				int bill2 = pizza * quantity;
				cout << "Enter Quantity of Fries        :";
				cin >> quantity;
				int bill3 = fries * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;

				cout << "Your Total bill is           :" << Total << endl;
			}
		}
		else if ((option == "Burger") || (option == "burger"))
		{
			bill = burger * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Pizza       :";
				cin >> quantity;
				int bill1 = pizza * quantity;
				cout << "Enter Quantity of Drink       :";
				cin >> quantity;
				int bill2 = drink * quantity;
				cout << "Enter Quantity of Fries       :";
				cin >> quantity;
				int bill3 = fries * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;
				cout << "Your Total bill is           :" << Total << endl;
			}
		}
		else if ((option == "Fries") || (option == "fries"))
		{
			bill = fries * quantity;
			cout << "Do you want to continue your order (yes/no)  :";
			cin >> option;
			cout << endl;
			if ((option == "yes") || (option == "Yes"))
			{
				cout << "Enter Quantity of Burger       :";
				cin >> quantity;
				int bill1 = burger * quantity;
				cout << "Enter Quantity of Drink        :";
				cin >> quantity;
				int bill2 = drink * quantity;
				cout << "Enter Quantity of Pizza        :";
				cin >> quantity;
				int bill3 = pizza * quantity;
				Total = bill + bill1 + bill2 + bill3;
				cout << "Your Total bill is            :" << Total << endl;
			}
			else if ((option == "no") || (option == "No"))
			{
				Total = bill;

				cout << "Your Total bill is           :" << Total << endl;
			}
		}

		else
		{
			Total = 0;
			cout << "Sorry this item is not available     :" << Total << endl;
		}
		cout << endl;
	}


	void cust_info()
	{
		cout << "Name of Customer is          :" << name << endl;
		cout << "Phone of Customer is         :" << phone << endl;
		cout << "Address of Customer is       :" << address << endl;
		cout << "Total bill of customer is     :" << Total << endl;
		cout << endl;
	}

};

class food : public customer
{
public:
	
	food()
	{
		pizza = 650.0;
		drink = 79.99;
		burger = 299.99;
		fries = 100.0;
	}
	void display_menu()
	{
		cout << "--------------------------------------------|" << endl;
		cout << "Press 1 for Admin login.                    |" << endl;
		cout << "Press 2 for writing customer info & order.  |" << endl;
		cout << "Press 3 to view customer info & order.      |" << endl;
		cout << "Press 4 to see food prices.                 |" << endl;
		cout << "Press 5 to update customer order.           |" << endl;
		cout << "Press 6 to logout.                          |" << endl;
		cout << "--------------------------------------------|" << endl;

		cout << endl;
	}

	void food_prices()
	{
		cout << "Following foods are available :" << endl;
		cout << endl;
		cout << "Price of Pizza is             : " << pizza << endl;
		cout << "Price of Drink is             : " << drink << endl;
		cout << "Price of Burger is            : " << burger << endl;
		cout << "Price of Fries is             : " << fries << endl;
		cout << endl;
	}

};

int
main()
{
	string choice;
	int size = 0;

	food f1[10], f2;

	f2.restaurant_menu();
	Restaurant* r1;
	r1 = &f2;
	r1->display_menu();


	for (int i = 0; i < 100; i++)
	{
		cout << "Enter your choice :";
		cin >> choice;
		cout << endl;
		if (choice == "1")
		{
			system("cls");
			cout << "Admin name and code is Required" << endl;
			cout << endl;
			f2.set_name();
			f2.set_pass();
			f2.admin_info();
			f2.display_menu();
			continue;
		}
		if ((choice == "2") && (f2.code == f2.pass) && (f2.name == f2.username))
		{
			system("cls");
			cout << "How many customer are there :";
			cin >> size;
			cout << endl;
			for (int i = 0; i < size; i++)
			{
				f1[i].set_name();
				f1[i].set_phone();
				f1[i].set_address();
				f1[i].set_order();
			}
			f2.display_menu();
		}


		if ((choice == "3") && (f2.code == f2.pass) && (f2.name == f2.username))
		{
			for (int i = 0; i < size; i++)
			{
				f1[i].cust_info();
				continue;

			}
			f2.display_menu();

		}
		if ((choice == "4") && (f2.code == f2.pass) && (f2.name == f2.username))
		{
			system("cls");
			f2.food_prices();
			f2.display_menu();
		}
		if ((choice == "5") && (f2.code == f2.pass) && (f2.name == f2.username))
		{
			system("cls");
			cout << "Enter no. of customers to modify order :";
			cin >> size;
			cout << endl;
			for (int i = 0; i < size; i++)
			{
				f1[i].update_order();
			}
			f2.display_menu();
		}

		if (choice == "6")
		{
			cout << "Thank you";
			exit(0);
		}
		else if ((choice == "") || (choice > "6") || (choice < "1"))
		{
			cout << "Invalid choice" << endl;
			cout << endl;
		}
	}


	system("pause");
	return 0;
}