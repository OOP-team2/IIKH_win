//
// Created by HoJoonEum on 2022/09/28.
//

#ifndef OOP_PROJ1_MEAL_H
#define OOP_PROJ1_MEAL_H

#include <vector>
#include "Serving.h"

// enum for distinguish Meal Type
enum MealType { breakfast, launch, dinner };

// class for Meal
class Meal {
private:
    // member variable for saving Serving as a sequence
    std::vector<Serving> servings;
    // member variable for saving number of people for a meal
    int people = 0;
    // member variable to distinguish each meal created
    int id;
public:
    // default constructor
    Meal();
    // constructor having a parameter for id
    Meal(int& new_id);
    // getter for getting id of a meal
    int getId();
    // setter for setting people
    void setPeople(int new_people);
    // getter for getting people
    int getPeople();
    // function to add a Serving
    void addServing(Serving serving);
    // function to delete a Serving
    void deleteServing(Serving serving_to_delete);
    // function to print out servings
    void showServings();
    // fucntion to get servings
    std::vector<Serving> getServings();
    // operator == overloading to examine equality
    bool operator== (Meal otherMeal);
};


#endif //OOP_PROJ1_MEAL_H
