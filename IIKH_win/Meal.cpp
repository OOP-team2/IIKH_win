//
// Created by HoJoonEum on 2022/09/28.
//
#include "iostream"
#include "Meal.h"

// implement a default constructor
Meal::Meal() {};

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
    servings.insert(std::pair<int, Serving>(serving_id, serving));
}

// implement deleteServing member function 
// it delete a Serving from servings
void Meal::deleteServing(int serving_id) {
    servings.erase(serving_id);
    return;
}
// implement getServing member function
// it gets servings
std::map<int, Serving> Meal::getServings() {
    return servings;
}
// implement showServing
// it prints out all servings this instance has
void Meal::showServings() {
    std::cout << "\nThe servings in this meal are : \n";
    std::cout << "\tId\tServing\n";
    for (auto serving : servings) {
        std::cout << serving.first << '\t' << serving.second.getName() << '\n';
    }
    std::cout << std::endl;
    return;
}
