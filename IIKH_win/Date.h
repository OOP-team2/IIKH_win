//
// Created by HoJoonEum on 2022/09/27.
//

#pragma once
#include "string"

// a class for date
class Date {
private:
    // a string variable for a year
    std::string year;
    // a string variable for a month
    std::string month;
    // a string variable for a day
    std::string day;
public:
    // a default confructor for Date
    Date();
    // a constructor with parameter
    Date(std::string new_year, std::string new_month, std::string new_day);
    // a getter for year
    std::string getYear();
    // a setter for year
    void setYear(std::string new_year);
    // a getter for month
    std::string getMonth();
    // a setter for month
    void setMonth(std::string new_month);
    // a getter for day
    std::string getDay();
    // a setter fot day
    void setDay(std::string new_day);
    // a function for displaying date information and editing date information
    void displayAndEdit();
    // a function for building grocery list
    void buildGroceryList();

    bool operator== (Date otherDate);
};
