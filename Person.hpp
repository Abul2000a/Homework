#include "Person.h"
Person::Person(const Person & obj){
        this->age = obj.age;
        this->name = obj.name;
        this->email = obj.email;
    }
Person::Person(int m_age,std::string m_name,std::string m_email){
        age = m_age;
        name = m_name;
        email = m_email;
    }
Person Person::operator =(const Person& obj){
        Person obj_2;
        obj_2.age = obj.age;
        obj_2.name = obj.name;
        obj_2.email = obj.email;
        return obj_2;
    }
void Person::setAge(int m_Age){
    age = m_Age;
}
void Person::setName(std::string m_Name){
    name = m_Name;
}
void Person::setEmail(std::string m_Email){
    email = m_Email;
}
int Person::getAge(){
    return age;
}
std::string Person::getName(){
    return name;
}
std::string Person::getEmail(){
    return email;
}