#include <iostream>
#include "Person.hpp"


int main(){
    Person man;
    man.setAge(15);
    std::cout << man.getAge() << std::endl;
    Person man_2(man);
    std::cout << man_2.getAge() << std::endl;
    Person man_3(21,"Albert","hakhverdyan.albert@mail.ru");
    std::cout << man_3.getEmail() << std::endl;
    Person man_4 = man_3;
    std::cout << man_4.getAge() << std::endl;
}