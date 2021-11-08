class Point2D{
    private:
    int x;
    int y;
    public:
    Point2D(){};
    Point2D(int m_x,int m_y){x = m_x;y = m_y;}
     Point2D operator +(const Point2D& obj){
        Point2D obj_1;
        obj_1.x = x + obj.x;
        obj_1.y = y + obj.y;
        return obj_1;
    }
     Point2D operator -(const Point2D& obj){
        Point2D obj_1; 
        obj_1.x = x - obj.x;
        obj_1.y = y - obj.y;
        return obj_1;
}    
     Point2D operator *(const Point2D& obj){
        Point2D obj_1;
        obj_1.x = x * obj.x;
        obj_1.y = y * obj.y;
        return obj_1;
}    
    Point2D operator /(const Point2D& obj){
        Point2D obj_1;
        obj_1.x = x / obj.x;
        obj_1.y = y / obj.y;
        return obj_1;
}    
    void printAll();
};

