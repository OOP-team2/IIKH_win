
#ifndef OOP_IIKH_WIN_INGREDIENT_H
#define OOP_IIKH_WIN_INGREDIENT_H

#include "string"
using namespace std;

class Ingredient {
private:
	string name;
	string quantity;
public:
	Ingredient();
	Ingredient(string new_name, string new_weight);
	void setName(string new_name);
	string getName();
	void setQuantity(string new_quantity);
	string getQuantity();
};

#endif //OOP_IIKH_WIN_INGREDIENT_H