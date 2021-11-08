    #include "Point2D.h"

    Point2D(){};
    Point2D(int m_x,int m_y){x = m_x;y = m_y;}
     Point2D Point2D::operator +(const Point2D& obj){
        Point2D obj_1;
        obj_1.x = x + obj.x;
        obj_1.y = y + obj.y;
        return obj_1;
    }
     Point2D Point2D::operator -(const Point2D& obj){
        Point2D obj_1; 
        obj_1.x = x - obj.x;
        obj_1.y = y - obj.y;
        return obj_1;
}    
     Point2D Point2D::operator *(const Point2D& obj){
        Point2D obj_1;
        obj_1.x = x * obj.x;
        obj_1.y = y * obj.y;
        return obj_1;
}    
    Point2D Point2D::operator /(const Point2D& obj){
        Point2D obj_1;
        obj_1.x = x / obj.x;
        obj_1.y = y / obj.y;
        return obj_1;
}    
    void Point2D::printAll(){
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    };