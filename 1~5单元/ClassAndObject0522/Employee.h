#pragma once
//����2������Genderö������
// ����3������Employee��

#include<iostream>
#include<string>
#include"Date.h"

enum class Gender {
    male,
    female,
};
class Employee
{
private:
    std::string name;
    Gender gender;
    Date* birthday;
    static int numberObjects;

public:
    std::string getName() { return name; }
    void setName(std::string name) { this->name = name; }

    Gender getGender() { return gender; }
    void setGender(Gender gender) { this->gender = gender; }

    Date getBirthday() { return *birthday; }
    void setBirthday(Date birthday) { *(this->birthday) = birthday; }

    std::string toString() {
        return name + (gender == Gender::male ? std::string("male") : std::string("female")) + birthday->toString();
    }

    Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }
    {
        numberObjects++;
        this->birthday=new Date(birthday);
        std::cout << "Now there are:" << numberObjects << " employee" << std::endl;
    }
    Employee() :Employee("Alan", Gender('male'), Date(2000, 6, 1)) {}

    ~Employee() {
        numberObjects--;
    }
};
