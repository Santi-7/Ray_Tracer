/* ---------------------------------------------------------------------------
** material.cpp
** TODO: Add doc.
**
** Author: Miguel Jorge Galindo Ramos, NIA: 679954
**         Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#include <material.hpp>
#include <math.h>
#include <mathConstants.hpp>

Material::Material()
: mKd(WHITE), mKs(BLACK), mShininess(20.0f), mKr(BLACK), mKt(BLACK)
{}

Material::Material(const Color diffuse, const Color specular,
                   const float shininess, const Color reflectance,
                   const Color transmittance)
: mKd(diffuse), mKs(specular), mShininess(shininess),
  mKr(reflectance), mKt(transmittance)
{}

Color Material::PhongBRDF(const Vect &seenFrom, const Vect &light,
                          const Vect &normal) const
{
    // TODO: Change to global method.
    Vect reflected = light- normal * light.DotProduct(normal) * 2;
    float cosine = seenFrom.DotProduct(reflected);
    return (mKd / PI) + mKs * (mShininess + 2) / (2 * PI) * pow(cosine, mShininess);
}

Color Material::GetDiffuse() const
{
    return mKd;
}

Color Material::GetReflectance() const
{
    return mKr;
}

Color Material::GetTransmittance() const
{
    return mKt;
}