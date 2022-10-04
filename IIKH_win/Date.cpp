//
// Created by HoJoonEum on 2022/09/27.
//
#include "iostream"
#include "Date.h"

// a default contructor for Date
Date::Date() {
    year = "2022";
    month = "10";
    day = "1";
}

// constructor with parameters for Date
Date::Date(std::string new_year, std::string new_month, std::string new_day) {
    year = new_year;
    month = new_month;
    day = new_day;
}

// a getter for year
std::string Date::getYear() {
    return year;
}

// a setter for year
void Date::setYear(std::string new_year) {
    year = new_year;
}

// a getter for month
std::string Date::getMonth() {
    return month;
}

// a setter for month
void Date::setMonth(std::string new_month) {
    month = new_month;
}


// a getter for day
std::string Date::getDay() {
    return day;
}

// a setter for day
void Date::setDay(std::string new_day) {
    day = new_day;
}

// a function for displaying and editing date information
void Date::displayAndEdit() {
    // need exception handling
    std::cout << "year: " << year << "month: " << month << "day: " << day << "\n";
    std::cout << "enter year: ";
    std::cin >> year;
    std::cout << "enter month: ";
    std::cin >> month;
    std::cout << "enter day: ";
    std::cin >> day;
    std::cout << "new date is saved" << "\n";
}

// a function for building grocery list
void Date::buildGroceryList() {

}

// a overloded operator == for comparison
bool Date::operator==(Date otherDate) {
    if (year == otherDate.getYear() && month == otherDate.getMonth() && day == otherDate.getDay()) {
        return true;
    }
    else {
        return false;
    }
}