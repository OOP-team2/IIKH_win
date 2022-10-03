//
// Created by HoJoonEum on 2022/09/27.
//

#include "Plan.h"
#include "Date.h"
#include "Meal.h"
#include <iostream>
using namespace std;

Plan::Plan(Meal new_meal, MealType new_meal_type, Date new_date) {
    meal = new_meal;
    meal_type = new_meal_type;
    date = new_date;
}

Date Plan::getDate() {
    return date;
}

Meal Plan::getMeal() {

    return  meal;
}

MealType Plan::getMealType() {

    return meal_type;
}

void Plan::setDate(Date new_date) {
    date = new_date;
}

void Plan::setMealType(MealType new_meal_type) {
    meal_type = new_meal_type;
}

void Plan::setMeal(Meal new_meal) {
    meal = new_meal;
}

void Plan::showPlan() {
    int year, month, day;
    string comment;

    year = date.getYear();
    month = date.getMonth();
    day = date.getDay();

    cout << "------------------------------------------------"<< endl;
	cout <<  year << " / " << month << " / " << day << " / " << meal_type << endl;

	cout << endl << "-meal-" <<  endl;

	vector<Serving> servings = meal.getServings();
	for (int i = 0; i < servings.size(); i++) {
		std::cout << "meal Name:	" << servings[i].getName() << endl;
		std::cout << "Num of People:	" << servings[i].getId() << endl;
	}
	cout << endl;
	return;
}

bool Plan::operator==(Plan otherPlan) {
    if (meal == otherPlan.getMeal() && meal_type == otherPlan.getMealType() && date == otherPlan.getDate()) {
        return true;
    }
    else {
        return false;
    }
}
