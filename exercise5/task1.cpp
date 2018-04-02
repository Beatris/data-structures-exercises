#include <iostream>

using namespace std;

class Rectangle {
    int width, height;
    public:
        void setWidth(int);
        void setHeight(int);
        int getWidth() const;
        int getHeight() const;
        Rectangle();
        Rectangle(int, int);
        int area() const;
        bool operator==(const Rectangle&) const;
        bool operator<(const Rectangle&) const;
        bool operator>(const Rectangle&) const;
};

Rectangle::Rectangle() {
    width = 0; height = 0;
}

Rectangle::Rectangle (int x, int y) {
    setWidth(x);
    setHeight(y);
}

void Rectangle::setWidth(int x) {
    if(x < 0) {
        cout << "Invalid width" << endl;
    }
    width = x;
}

void Rectangle::setHeight(int y) {
    if(y < 0) {
        cout << "Invalid height" << endl;
    }
    height = y;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

int Rectangle::area() const {
    return (width * height);
}

bool Rectangle::operator==(const Rectangle& other) const {
    return this->area() == other.area();
}

bool Rectangle::operator<(const Rectangle& other) const {
    return this->area() < other.area();
}

bool Rectangle::operator>(const Rectangle& other) const {
    return this->area() > other.area();
}

int main() {
    Rectangle rect1;
    Rectangle rect2(2, 5);
    const Rectangle rect3(3, 6);
    cout << "rect1 area: " << rect1.area() << endl;
    cout << "rect2 area: " << rect2.area() << endl;
    cout << "rect3 area: " << rect3.area() << endl;
    cout << (rect1 < rect2) << endl; // 1 (true)
    cout << (rect3 > rect2) << endl; // 1 (true)
    cout << (rect3 == rect2) << endl; // 0 (false)
    return 0;
}