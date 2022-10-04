

#include <iostream>
#include "Ingredient.h"

Ingredient::Ingredient() {
	name = "";
	quantity = "";
}
Ingredient::Ingredient(std::string new_name, std::string new_quantity) {
	name = new_name;
	quantity = new_quantity;
}

std::string Ingredient::getName() {
	return name;
}

void Ingredient::setName(std::string new_name) {
	name = new_name;
}

std::string Ingredient::getQuantity() {
	return quantity;
}

void Ingredient::setQuantity(std::string new_quantity) {
	quantity = new_quantity;
}