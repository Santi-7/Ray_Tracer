/* ---------------------------------------------------------------------------
** pointLight.cpp
** TODO: Add doc.
**
** Author: Miguel Jorge Galindo Ramos, NIA: 679954
**         Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#include <pointLight.hpp>

PointLight::PointLight()
: LightSource(), mPosition(Point(0,0,0))
{}

PointLight::PointLight(const Point &position)
: LightSource(), mPosition(position)
{}

PointLight::PointLight(const Point &position, const float radiance,
                       const Color &baseColor)
: LightSource(radiance, baseColor), mPosition(position)
{}

unique_ptr<vector<Point>> PointLight::GetLights() const
{
    return make_unique<vector<Point>> (vector<Point>{mPosition});
}