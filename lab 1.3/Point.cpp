#include "Point.h"
#include "string"

double Point::Polar()
{
    double Pi = 4. * atan(1);
    if ((x == 0) && (y == 0))
        return -1;
    if (x == 0)
        return ((y > 0) ? 90 : 270);
    double theta = atan(y / x);
    theta *= 360 / (2 * Pi);
    if (x > 0)
    {
        return ((y >= 0) ? theta : 360 + theta);
    }
    else
    {
        return (180 + theta);
    }
}


void Point::Init(double x, double y)
{   
    this->x = x;
    this->y = y;
}

void Point::read()
{
    double x, y;
    cout << " ¬вед≥ть x -> "; cin >> x;
    cout << " ¬вед≥ть y -> "; cin >> y;
    Init(x, y);
}

double Point::Origin()
{
    double z;
    z = sqrt((x * x) + (y * y));
    return z;
}

bool Point::equal()
{
    return x == y;
}

bool Point::noEqual()
{
    return x !=y;
}