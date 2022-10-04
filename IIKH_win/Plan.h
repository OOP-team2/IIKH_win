//
// Created by HoJoonEum on 2022/09/27.
//

#ifndef OOP_IIKH_WIN_PLAN_H
#define OOP_IIKH_WIN_PLAN_H

#include "Meal.h"
#include "Date.h"

// class for Plan entity
class Plan {
private:
    // a variable for save a meal
    Meal meal;
    // a variable for saving a meal type
    Meal::MealType meal_type;
    // a variable for saving a date for a plan
    Date date;
public:
    // a constructor for a Plan
    Plan(Meal new_meal, Meal::MealType new_meal_type, Date new_date);
    // a getter returning date
    Date getDate();
    // a setter to set date 
    void setDate(Date new_date);
    // a getter returning meal
    Meal getMeal();
    // a setter to set a meal
    void setMeal(Meal new_meal);
    // a getter returning meal type
    Meal::MealType getMealType();
    // a setter to set meal type
    void setMealType(Meal::MealType new_meal_type);
    // a function to show all plans
    void showPlan();
    // a operator overloaded to compare two plans
    bool operator== (Plan otherPlan);
};


#endif //OOP_IIKH_WIN_PLAN_H
