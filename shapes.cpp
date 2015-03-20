#include <iostream>
#include <cassert>
#include "shapes.h"
#include <cmath>
using namespace std;

bool compare(double a, double b) {
    const double EPS = 0.00001;
    return (fabs(a - b) < EPS); 
}

int main() {
    Shape *t = new Triangle(Point(0, 0), Point(0, 1), Point(1, 0));
    assert(compare(t->perimeter(), 2 + sqrt(2)));
    assert(compare(t->area() == 0.5));
    Shape *r = new Rectangle(Point(0, 0), 1, 2);
    assert(compare(r->area(), 2.0));
    assert(compare(r->perimeter(), 6.0)); 
    Shape *s = new Square(Point(0, 0), 1);
    assert(compare(s->area(), 1));
    assert(compare(s->perimeter(), 4));
    return 0;
}
