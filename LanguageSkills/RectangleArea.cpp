#include <iostream>

using namespace std;

class Rectangle {
    
    public:
        int width;
        int height;
    
        void display(){
            cout<< width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle{
    
    public:
        int area;
        
        void read_input(){
            cin>> width;
            cin>> height;
        }
        
        int getArea(){
            area = width * height;
            return area;
        }
        
        void display(){
            cout<< getArea();
        }
    
};

int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    
    return 0;
}