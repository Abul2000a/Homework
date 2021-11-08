#include <iostream>

struct Person{
    int age;
    std::string name;
    std::string email;
};
void initStruct(Person & str,int m_age,std::string m_name,std::string m_email){
    str.age = m_age;
    str.name = m_name;
    str.email = m_email;
}
Person initStruct(Person &str,Person *th){
    str.age = th->age;
    str.name = th->name;
    str.email = th->email;
    return str;
}
void printAll(Person &str){
    std::cout << str.age << std::endl;
    std::cout << str.name << std::endl;
    std::cout << str.email << std::endl;
}
void setAge(Person &str, int m_age){
    str.age = m_age;
}
void setName(Person &str,std::string m_name){
    str.name = m_name;
}
void setEmail(Person &str,std::string m_email){
    str.email = m_email;
}
int getAge(Person *str){
    return str->age;
}
std::string getName(Person *str){
    return str->name;
}
std::string getEmail(Person *str){
    return str->email;
}

int main(){
    Person obj;
    initStruct(obj,21,"Albert","Hakhverdyan.albert@mail.com");
    printAll(obj);
    Person obj_1;
    initStruct(obj_1,&obj);
    setAge(obj_1,15);
    std::cout << getAge(&obj) << std::endl;
    printAll(obj_1);
    Person obj_2 = obj_1;
    printAll(obj_2);
}