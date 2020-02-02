//#pragma once					// This is a header gaurd and is the new standard for preventing multiple of the same .h file

// This is the old way.
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include<iostream>

struct Sales_data
{
	std::string bookNo;
	unsigned int unitsSold = 0;
	double revenue = 0.0;
};

#endif