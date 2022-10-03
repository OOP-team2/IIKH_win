//
// Created by HoJoonEum on 2022/09/28.
//

#ifndef OOP_IIKH_WIN_MEAL_H
#define OOP_IIKH_WIN_MEAL_H

#include "map"
#include "Serving.h"

// class for Meal
class Meal {
private:
    // member variable for saving Serving as a sequence
    std::map<int, Serving> servings;
    // member variable for saving number of people for a meal
    int people = 0;
    // member variable to distinguish each meal created
    int serving_id = 0;
public:
    // enum for distinguish Meal Type
    enum MealType { breakfast, launch, dinner };
    // default constructor
    Meal();
    // setter for setting people
    void setPeople(int new_people);
    // getter for getting people
    int getPeople();
    // function to add a Serving
    void addServing(Serving serving);
    // function to delete a Serving
    void deleteServing(int serving_id);
    // function to print out servings
    void showServings();
    // fucntion to get servings
    std::map<int, Serving> getServings();

};


#endif //OOP_IIKH_WIN_MEAL_H
