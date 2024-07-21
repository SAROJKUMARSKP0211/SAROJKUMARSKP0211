#include<iostream>

// Base class 'Shapes'
class Shapes{
public:
    double area;
    double volume;
};

// Derived class 'cube' inheriting from 'Shapes'
class cube : public Shapes{
public:
    double side;
    // Constructor for cube
    cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

// Derived class 'sphere' inheriting from 'Shapes'
class sphere : public Shapes{
public:
    double radius;
    // Constructor for sphere
    sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4.0 / 3.0) * 3.14159 * (radius * radius * radius); // Corrected calculation
    }
};

int main(){
    // Creating objects of cube and sphere classes
    cube c(10);
    sphere s(5);

    // Outputting the area and volume of cube and sphere
    std::cout << "Cube Area: " << c.area << " cm\n";
    std::cout << "Cube Volume: " << c.volume << " cm\n";
    std::cout << "Sphere Area: " << s.area << " cm\n";
    std::cout << "Sphere Volume: " << s.volume << " cm\n";

    return 0;
}
