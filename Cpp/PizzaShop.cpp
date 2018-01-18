// CppAssignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Kitchen.h"
#include "Counter.h"


json prices;
json recipes;
json ingredients;

vector<string> menu;

int main()
{
	
	/*Loading json files*/
	ifstream pricesRaw("prices.json");
	pricesRaw >> prices;

	ifstream recipesRaw("recipes.json");
	recipesRaw >> recipes;

	ifstream ingredientsRaw("ingredients.json");
	ingredientsRaw >> ingredients;

	for (size_t i = 0; i < recipes.size(); i++)
	{
		cout << recipes[i]["name"] << endl;

	}
	
	Kitchen kitchen = Kitchen();
	Counter counter = Counter();

	
	string pizza = counter.askOrder();
	cout << pizza << endl;

    return 0;
}



