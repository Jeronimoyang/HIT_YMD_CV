#pragma once
#include <iostream>

class vector {
   public:
    vector(double a, double b) : x(a), y(b) {}
    friend vector operator+(const vector& p1, const vector& p2) {
        return vector(p1.x + p2.x, p1.y + p2.y);
    }
    friend vector operator-(const vector& p1, const vector& p2) {
        return vector(p1.x - p2.x, p1.y - p2.y);
    }
    friend double operator*(const vector& p1, const vector& p2) {
        return p1.x * p2.x + p1.y * p2.y;
    }
    friend std::ostream& operator<<(std::ostream& out, const vector& p) {
        out << "(" << p.x << "," << p.y << ")" << std::endl;
        return out;
    }

   private:
    double x;
    double y;
};