//
// Created by HoJoonEum on 2022/09/26.
//

#ifndef OOP_IIKH_WIN_PLANMANAGER_H
#define OOP_IIKH_WIN_PLANMANAGER_H

#include "vector"
#include "Plan.h"
#include "Date.h"
#include "Meal.h"

// class for Plan Manager or Planner
class PlanManager {
private:
    // variable for saving Plans
    std::vector<Plan> plans;
public:
    // default constructor
    PlanManager();

    PlanManager(std::vector<Plan> newPlans);
    void addPlan(Plan plan);
    void deletePlan(Plan plan);
    void reviseMeal(Plan plan, Meal meal);
    void reviseMealType(Plan plan, Meal::MealType meal_type) {
        return;
    }
    void reviseDate(Plan plan, Date date);
    void showAllPlan();
};


#endif //OOP_IIKH_WIN_PLANMANAGER_H
