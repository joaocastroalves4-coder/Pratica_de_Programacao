#ifndef SHAPEFUNCTIONS_HPP
#define SHAPEFUNCTIONS_HPP
#include "shape.hpp"
#include <vector>
#include <map>
#include <set>
#include <string>

class ShapeFunctions {
public:
    static void printShapes(const std::vector<Shape*>& shapes);
    static double totalArea(const std::vector<Shape*>& shapes);
    static std::vector<Shape*> getShapesWithAreaGreaterThan(const std::vector<Shape*>& shapes, double minArea);
    static void sortShapesByArea(std::vector<Shape*>& shapes);
    static std::map<std::string, int> countShapesByName(const std::vector<Shape*>& shapes);
    static std::set<double> uniqueAreas(const std::vector<Shape*>& shapes);
    static void checkTraversable(const std::vector<Shape*>& shapes, double area_ambiente, double tolerancia);
};

#endif