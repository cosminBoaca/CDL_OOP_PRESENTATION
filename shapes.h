struct Point {
    float x, y;
    /*
       Todo adaugati 2 constructori. Unul implicit care initializeaza punctul
       cu (0, 0) si unul care primeste cele 2 valori pentru x si y
    */
};

class Shape {
protected:
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual vector<Point> getPoints() = 0;
};

class Triangle : public Shape {
    vector<Point> points;
public:
    Triangle(const Point& p1, const Point& p2, const Point& p3) {
        // TODO populati vectorul de puncte
    }
    // TODO suprascrieti cele 3 metode din clasa shape
};

class Rectangle : public Shape {
public:
    Rectangle(const Point& leftCorner, double width, double height) {
        /*
           Alegeti un mod de reprezentare al dreptunghiului care sa fie
           eficient din punct de vedere al memoriei ocupate
        */
    }
};

/*
   TODO
   Implementati clasa Square care sa reprezinte un patrat.
   Folositi-va de legatura dintre patrat si dreptunghi
*/
