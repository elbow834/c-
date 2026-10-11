#include <iostream>
using namespace std;

class Point3D {
public:
    Point3D(float x, float y, float z);
    void print();
private:
    float x;
    float y;
    float z;
};

Point3D::Point3D(float x, float y, float z) : x(x), y(y), z(z) {}

void Point3D::print() {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

int main() {
    Point3D a(1, 2, 3);
    a.print();
    return 0;
}