#include "shapeFunctions.hpp"
#include <iostream>
#include <algorithm>

void ShapeFunctions::printShapes(const std::vector<Shape*>& shapes) {
    for (const Shape* s : shapes) std::cout << *s << "\n";
}

double ShapeFunctions::totalArea(const std::vector<Shape*>& shapes) {
    double total = 0;
    for (const Shape* s : shapes) total += s->area();
    return total;
}

std::vector<Shape*> ShapeFunctions::getShapesWithAreaGreaterThan(
    const std::vector<Shape*>& shapes, double minArea) {
    std::vector<Shape*> result;
    for (Shape* s : shapes)
        if (s->area() > minArea) result.push_back(s);
    return result;
}

void ShapeFunctions::sortShapesByArea(std::vector<Shape*>& shapes) {
    std::sort(shapes.begin(), shapes.end(), [](Shape* a, Shape* b) {
        return a->area() < b->area();
    });
}

std::map<std::string, int> ShapeFunctions::countShapesByName(const std::vector<Shape*>& shapes) {
    std::map<std::string, int> counts;
    for (const Shape* s : shapes) counts[s->name()]++;
    return counts;
}

std::set<double> ShapeFunctions::uniqueAreas(const std::vector<Shape*>& shapes) {
    std::set<double> areas;
    for (const Shape* s : shapes) areas.insert(s->area());
    return areas;
}

void ShapeFunctions::checkTraversable(const std::vector<Shape*>& shapes, double area_ambiente, double tolerancia) {
    double area_livre = area_ambiente - totalArea(shapes);
    if (area_livre > tolerancia)
        std::cout << "Ambiente trafegavel. Area livre: " << area_livre << "\n";
    else
        std::cout << "Ambiente nao trafegavel. Area livre insuficiente: " << area_livre << "\n";
}