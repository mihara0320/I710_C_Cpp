// CppAssignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "json.hpp"

#include <iostream>
#include <fstream>


using namespace std;
using json = nlohmann::json;

int main()
{
	cout << "Hello World" << endl;

	
	ifstream pricesRaw("prices.json");
	json prices;
	pricesRaw >> prices;
	
	cout << prices;
    return 0;
}

