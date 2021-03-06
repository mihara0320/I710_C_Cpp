// CppAssignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Kitchen.h"
#include "Counter.h"


json prices;
json recipes;
json ingredients;

vector<string> menu;

void init() {
	ifstream pricesRaw("prices.json");
	pricesRaw >> prices;

	ifstream recipesRaw("recipes.json");
	recipesRaw >> recipes;

	ifstream ingredientsRaw("ingredients.json");
	ingredientsRaw >> ingredients;
}

int main() {
	init();
	Kitchen kitchen = Kitchen(ingredients, recipes);
	Counter counter = Counter(prices);

	while (true) {
		string order = counter.askOrder();
		bool pizzaIsDone = kitchen.cook(order);
		if (pizzaIsDone) {
			cout << endl << "Your tatal is " << counter.getPrice(kitchen.getItemsUsed()) << " EUR" << endl << endl;
		}

	}

	return 0;
}



