#include <iostream>

using namespace std;

class Point
{
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    void setX(int x)
    {
        this->x = x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    int getX() { return x; }
    int getY() { return y; }

    void print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

Point operator+(Point p1, Point p2)
{
    return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
}

bool operator==(Point p1, Point p2)
{
    if (p1.getX() == p2.getX() && p1.getY() == p2.getY())
    {
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, Point p)
{
    return os << p.getX() << ", " << p.getY();
}

int main()
{
    Point p1(10, 20);
    Point p2(30, 40);
    Point p3 = p1 + p2;
    p3.print();

    Point p4(5, 3);
    Point *p5 = &p4;
    cout << "Point 4: " << p4 << std::endl;
    p4.setX(2);
    cout << "Point 5: " << *p5 << std::endl;

    Point *p7 = new Point();
    p7->setX(5);
    p7->setY(6);
    cout << "Point 7: " << *p7 << std::endl;

    return 0;
}