#include <iostream>
#include <math.h>

struct point {
    double x;
    double y;
};

double distance(point p1, point p2) {
    return sqrt(pow(p1.x - p2.x, 2.0) + pow(p1.y - p2.y, 2.0));
}

point findClosest(point p, point* points, int pointsCount) {
    double minDistance = distance(p, points[0]);
    point closest = points[0];
    for(int i = 1; i < pointsCount; i++) {
        double currentDistance = distance(p, points[i]);
        if(currentDistance < minDistance) {
            minDistance = currentDistance;
            closest = points[i];
        }
    }
    return closest;
}

int main() {
    point p1, p2;
    p1.x = -2.0; p1.y = 1.0;
    p2.x = 1.0; p2.y = 5.0;
    std::cout << "The distance is " << distance(p1, p2) << std::endl;

    point p3; p3.x = 0; p3.y = 2;
    point* points = new point[2];
    points[0] = p2; points[1] = p3;

    point closest = findClosest(p1, points, 2);
    std::cout << "point(" << closest.x << ", " << closest.y << ") is closest" << std::endl;
    delete[] points;
    return 0;
}