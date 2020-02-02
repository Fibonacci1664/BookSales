#include<iostream>
#include<string>
#include"Sales_item.h"
#include"Sales_data.h"


int main()
{
	//Sales_item book;							// Create a book object.

	//std::cin >> book;							// Read from cin, ISBN: Number of copies sold: Sale price.

	//std::cout << book << '\n';					// Write to cout, ISBN: Number of copies sold: Total revenue: Avg price.

	Sales_data data1, data2;
	// Code to read into data 1 and data2
	// Code to check whether data1 and data2 have the same ISBN
	// If so print the sum of data1 and data2.

	// Read the first transaction.
	double price = 0;											// price per book, used to calculate total revenue.
	std::cin >> data1.bookNo >> data1.unitsSold >> price;		// read the first transactions: ISBN, num of books sold, price per book.
	data1.revenue = data1.unitsSold * price;

	// Read the second transaction.
	std::cin >> data2.bookNo >> data2.unitsSold >> price;		// read the second transactions: ISBN, num of books sold, price per book.
	data2.revenue = data2.unitsSold * price;

	// Check they are the same book using the ISBN
	if (data1.bookNo == data2.bookNo)
	{
		unsigned int totalBooks = data1.unitsSold + data2.unitsSold;
		double totalRev = data1.revenue + data2.revenue;

		// Print: ISBN, total sold, total revenue and avg price per boook.
		std::cout << data1.bookNo << " " << totalBooks << " " << totalRev << " ";

		if (totalBooks != 0)
		{
			std::cout << totalRev / totalBooks << '\n';
		}
		else
		{
			std::cout << "(No sales)\n"; 
		}

		return 0;		// ZERO ALWAYS INDICATES SUCCESS.
	}
	else
	{
		// If we reached here then the transactions were not for the same book.
		std::cerr << "Data must refer to the same ISBN!\n";

		return -1;		// ANY OTHER NUMBER THAN ZERO ALWAYS INDICATES FAILURE.
	}


	/*Sales_item item;
	Sales_item nextItem;
	Sales_item total;

	if (std::cin >> item)
	{
		total = item;

		while (std::cin >> nextItem)
		{
			if (item.isbn() == nextItem.isbn())
			{
				total += nextItem;
			}
			else
			{
				std::cout << "Total: " << total << "\n";
				item = nextItem;
				total = nextItem;
			}
		}

		std::cout << "Total: " << total << "\n";
	}
	else
	{
		std::cerr << "Error, incorrect input!\n";
		return -1;
	}*/

	return 0;
}