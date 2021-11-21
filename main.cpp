#include "Point.h"
#include "Retangle.h"
#include "Triangle.h"
#include "Object.h"
#include "Circle.h"
#include <iostream>
#include <vector>
using namespace std;

void readObject(vector<Object*>& Ptemp, int n)
{
    for (int i = 0; i < n; i++) {
        cout << Ptemp[i]->toString() << endl;
    }
}

int Point::InstanceCount = 0;
int Retangle::InstanceCount = 0;
int Triangle::InstanceCount = 0;
int Circle::InstanceCount = 0;

int main()
{
    Point* topLeft = new Point{2, 4};
    Point* bottomRight = new Point{0, 1};
    Retangle* Rt = new Retangle{*topLeft, *bottomRight};

    Point* A = new Point{4, 5};
    Point* B = new Point{3, 5};
    Point* C = new Point{2, 6};
    Triangle* Tg = new Triangle{*A, *B, *C};

    Point* Center = new Point{2, 3};
    Circle* Cr = new Circle {*Center, 2.3};

    vector<Object*> Ptemp(3);
    Ptemp[0] = Rt;
    Ptemp[1] = Tg;
    Ptemp[2] = Cr;

    readObject(Ptemp, 3);

    // Object** Ptemp = new Object*[4];
    // Ptemp[1] = Rt;
    // Ptemp[2] = Tg;

    // readObject(Ptemp, 2);

    delete topLeft, bottomRight, Rt, A, B, C, Tg, Center, Cr;
    //delete[] Ptemp;

    return 1;
}