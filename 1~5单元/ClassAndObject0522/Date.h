#pragma once
#pragma once
//任务一：定义Date类

#include<iostream>
#include<string>

class Date {
private:
    int year = 2019, month = 1, day = 1;
public:

public:
    int getYear() const { return year; }
    void setYear(int year) { this->year = year; }

    int getMonth() const { return month; }
    void setMonth(int month) { this->month = month; }

    int getDay() const { return day; }
    void setDay(int day) { this->day = day; }
    Date() = default;
    Date(int y, int m, int d) :year{ y }, month{ m }, day{ d }{
        std::cout << "Date:  " << toString() << std::endl;
    }
    std::string toString() {
        return (std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day));
    }//2019-1-1

};