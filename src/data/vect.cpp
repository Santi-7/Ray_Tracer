/* ---------------------------------------------------------------------------
** vect.cpp
** TODO: Add doc.
**
** Author: Miguel Jorge Galindo Ramos, NIA: 679954
**         Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#include <cmath>
#include "vect.hpp"

// TODO: Add doc.
/* */
static const float H = 0;

Vect::Vect(const float x, const float y, const float z)
{
    mX = x;
    mY = y;
    mZ = z;
}

float Vect::GetX() const
{
    return mX;
}

float Vect::GetY() const
{
    return mY;
}

float Vect::GetZ() const
{
    return mZ;
}

float Vect::Abs() const
{
    return (const float) sqrt(pow(mX, 2) + pow(mY, 2) + pow(mZ, 2));
}

Vect Vect::operator+(const Vect& v) const
{
    const float x = mX + v.mX;
    const float y = mY + v.mY;
    const float z = mZ + v.mZ;
    return Vect(x, y, z);
}

Vect Vect::operator-(const Vect& v) const
{
    const float x = mX - v.mX;
    const float y = mY - v.mY;
    const float z = mZ - v.mZ;
    return Vect(x, y, z);
}

Vect Vect::operator*(const float k) const
{
    const float x = mX * k;
    const float y = mY * k;
    const float z = mZ * k;
    return Vect(x, y, z);
}

Vect Vect::DotProduct(const Vect& v) const
{
    const float x = mX * v.mX;
    const float y = mY * v.mY;
    const float z = mZ * v.mZ;
    return Vect(x, y, z);
}

Vect Vect::CrossProduct(const Vect& v) const
{
    const float x = mY * v.mZ - mZ * v.mY;
    const float y = mX * v.mZ - mZ * v.mX;
    const float z = mX * v.mY - mY * v.mX;
    return Vect(x, -y, z);
}