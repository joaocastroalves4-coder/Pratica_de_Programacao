#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"
#include "shapeFunctions.hpp"

int main() {
    std::cout << std::fixed << std::setprecision(2);
    std::vector<Shape*> shapes;
    std::string cmd;
    while (std::cin >> cmd) {
        if (cmd == "CIRCLE") {
            double r; std::cin >> r;
            shapes.push_back(new Circle(r));
        } else if (cmd == "RECT") {
            double w, h; std::cin >> w >> h;
            shapes.push_back(new Rectangle(w, h));
        } else if (cmd == "TRIANGLE") {
            double a, b, c; std::cin >> a >> b >> c;
            shapes.push_back(new Triangle(a, b, c));
        } else if (cmd == "LIST") {
            ShapeFunctions::printShapes(shapes);
        } else if (cmd == "TOTAL") {
            std::cout << "Total: " << ShapeFunctions::totalArea(shapes) << "\n";
        } else if (cmd == "SORT") {
            ShapeFunctions::sortShapesByArea(shapes);
            ShapeFunctions::printShapes(shapes);
        } else if (cmd == "FILTER") {
            double m; std::cin >> m;
            auto f = ShapeFunctions::getShapesWithAreaGreaterThan(shapes, m);
            ShapeFunctions::printShapes(f);
        } else if (cmd == "COUNT") {
            auto c = ShapeFunctions::countShapesByName(shapes);
            for (auto& p : c) std::cout << p.first << ": " << p.second << "\n";
        } else if (cmd == "UNIQUE") {
            auto u = ShapeFunctions::uniqueAreas(shapes);
            for (double a : u) std::cout << a << " ";
            std::cout << "\n";
        } else if (cmd == "CLEAR") {
            for (Shape* s : shapes) delete s;
            shapes.clear();
        } else if (cmd == "TRAVERSABLE") {
            double a, t; std::cin >> a >> t;
            ShapeFunctions::checkTraversable(shapes, a, t);
        }
    }
    for (Shape* s : shapes) delete s;
    return 0;
}