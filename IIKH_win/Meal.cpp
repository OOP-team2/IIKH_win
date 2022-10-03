//
// Created by HoJoonEum on 2022/09/28.
//

#include "Meal.h"

// implement a default constructor
Meal::Meal() {};
// implement a constructor with int parameter
Meal::Meal(int& new_id) {
    id = id;
    id++;
};

// implement a getter for id
int Meal::getId() {
    return id;
}

// implement a getter for people
int Meal::getPeople() {
    return people;
}
// implement a setter for people
void Meal::setPeople(int new_people) {
    people = new_people;
}

// implement addServing member function
// it pushs back a serving to servings vector
void Meal::addServing(Serving serving) {
    servings.push_back(serving);
}

// implement deleteServing member function 
// it delete a Serving from servings
void Meal::deleteServing(Serving serving_to_delete) {
    // need to implement
    return;
}
// implement getServing member function
// it gets servings
std::vector<Serving> Meal::getServings() {
    return servings;
}
// implement showServing
// it prints out all servings this instance has
void Meal::showServings() {
    return;
}
// implement operator == 
// it returns true if two ids of each meal are same
bool Meal::operator==(Meal otherMeal) {
    if (id == otherMeal.getId()) {
        return true;
    }
    else {
        return false;
    }
}