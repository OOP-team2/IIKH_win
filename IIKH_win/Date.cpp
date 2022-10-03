//
// Created by HoJoonEum on 2022/09/27.
//

#include "Date.h"

Date::Date() {
    year = 0;
    month = 0;
    day = 0;
}
Date::Date(int new_year, int new_month, int new_day) {
    year = new_year;
    month = new_month;
    day = new_day;
}

int Date::getYear() {
    return year;
}

void Date::setYear(int new_year) {
    year = new_year;
}

int Date::getMonth() {
    return month;
}

void Date::setMonth(int new_month) {
    month = new_month;
}

int Date::getDay() {
    return day;
}

void Date::setDay(int new_day) {
    day = new_day;
}

bool Date::operator==(Date otherDate) {
    if (year == otherDate.getYear() && month == otherDate.getMonth() && day == otherDate.getDay()) {
        return true;
    }
    else {
        return false;
    }
}