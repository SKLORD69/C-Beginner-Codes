#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
private:
    int a, b, c;

public:
    void getData()
    {
        cout << "Enter the first side of the triangle: ";
        cin >> a;

        cout << "Enter the second side of the triangle: ";
        cin >> b;

        cout << "Enter the third side of the triangle: ";
        cin >> c;
        cout << "Sides of the triangle are: " << "\n a = " << a << "\n b = " << b << "\n c = " << c << endl;
    }
    void calculatePerimeter()
    {
        double perimeter = a + b + c;
        cout << "Perimeter of the triangle is: " << perimeter << endl;
    }
    void calculateArea()
    {
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of the triangle is: " << area << endl;
    }
};
int main()
{
    Triangle obj1;
    obj1.getData();
    obj1.calculatePerimeter();
    obj1.calculateArea();
    return 0;
}
