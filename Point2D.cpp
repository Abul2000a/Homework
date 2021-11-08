#include <iostream>
#include "Point.hpp"
int main(){
    Point2D obj(6,8);
    Point2D obj_1(3,4);
    Point2D obj_2 = obj + obj_1;
    obj_2.printAll();
    Point2D obj_3 = obj - obj_1;
    obj_3.printAll();
    Point2D obj_4 = obj * obj_1;
    obj_4.printAll();
    Point2D obj_5 = obj / obj_1;
    obj_5.printAll();
}