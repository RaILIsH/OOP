#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include "point.h"
using std::cout, std::endl;

Point::Point(float x, float y)
{
    mx = x;
    my = y;
}

Point::Point()
{
    mx = 0;
    my = 0;
}

float Point::getX() const
{
	return mx;
}

float Point::getY() const
{
	return my;
}

void Point::setX(float x)
{
	mx = x;
}

void Point::setY(float y)
{
	my = y;
}

float Point::norm() const
{
	return std::sqrt(mx * mx + my * my);
}

void Point::normalize()
{
	float pnorm = norm();
	mx /= pnorm;
	my /= pnorm;
}

float Point::distance(const Point& p) const
{
	return std::sqrt((p.mx - mx) * (p.mx - mx) + (p.my - my) * (p.my - my));
}

Point Point::operator+(const Point& right) const
{
	Point result = {mx + right.mx, my + right.my};
	return result;
}

Point Point::operator*(float a) const
{
	Point result = {a * mx, a * my};
	return result;
}

Point operator*(float a, const Point& p)
{
	Point result = {a * p.mx, a * p.my};
	return result;
}

std::ostream& operator<<(std::ostream& left, const Point& right)
{
	left << "(" << right.mx << ", " << right.my << ")";
	return left;
}


class Circle
{
private:
	Point mCenter;
	float mRadius;

public:
    Circle(){
        this->mCenter = {0, 0};
        this->mRadius = 1;
    }
    Circle(const Point& acenter, float aradius){
        this->mCenter = acenter;
        this->mRadius = aradius;
    }
    Circle(const Circle& circle){
        mCenter = circle.mCenter;
        mRadius = circle.mRadius;
    };
    Point getCenter(){
        return this->mCenter;
    }
    float getRadius(){
        return this->mRadius;
    }
    void setCenter(Point& a){
        this->mCenter = a;
    }
    void setRadius(float r){
        if(r<0){
            this->mRadius = 0;
        }
        else{
            this->mRadius = r;
        }
    }
    float getArea() const{
        return 3.14*mRadius*mRadius;
    }
    float getDistance(const Point& p) const{
        return p.distance(mCenter)-mRadius;
    }
    bool isColliding(const Circle& c){
        if(mCenter.distance(c.mCenter)<=mRadius+c.mRadius){
            return true;
        }
        else{
            return false;
        }
    }
    void move(const Point& p){
        this->mCenter = this->mCenter + p;
    }
};

int main()
{
	Point p = {7, -1};
	Point q = {-4, 2};
	cout << "Point p = " << p << endl;
	cout << "Point q = " << q << endl;
	cout << "p + q = " << p + q << endl;
	Circle a {{4, 1}, 3};
	Circle b;

	cout << "Circle a: center: " << a.getCenter() << " radius: " << a.getRadius() << endl;
	cout << "Circle b: center: " << b.getCenter() << " radius: " << b.getRadius() << endl;

	cout << "Area of a = " << a.getArea() << endl;
	cout << "Distance from point p to circle a = " << a.getDistance(p) << endl;



	cout << "Collisions:" << endl;
	if (a.isColliding(b))
		cout << "Yes, a is colliding b" << endl;
	else
		cout << "No, a isn't colliding b" << endl;



	cout << "Moving b by {1, 1}:" << endl;
	b.move({1, 1});
	if (a.isColliding(b))
		cout << "Yes, a is colliding b" << endl;
	else
		cout << "No, a isn't colliding b" << endl;
}
