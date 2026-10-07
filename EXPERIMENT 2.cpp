#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Member function defined inside the class
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // Member functions declared inside the class
    float area();
    float perimeter();

    void display();
};

// Member function defined outside the class
float Rectangle::area()
{
    return length * breadth;
}

float Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

void Rectangle::display()
{
    cout << "Area = " << area() << endl;
    cout << "Perimeter = " << perimeter() << endl;
}

int main()
{
    Rectangle r;

    r.getData();
    r.display();

    return 0;
}