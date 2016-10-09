/* ---------------------------------------------------------------------------
** lightSource.hpp
** TODO: Add doc.
**
** Author: Miguel Jorge Galindo Ramos, NIA: 679954
**         Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#ifndef RAY_TRACER_LIGHT_SOURCE_HPP
#define RAY_TRACER_LIGHT_SOURCE_HPP

#include <color.hpp>

class LightSource {

protected:

    // TODO: Add doc.
    /* . */
    float mRadiance;

    // TODO: Add doc.
    /* . */
    Color mBaseColor;

    // TODO: Add doc.
    /**
     * .
     *
     * @return .
     */
    LightSource() :
    mRadiance(1.0), mBaseColor(WHITE)
    {}

    // TODO: Add doc.
    /**
     * .
     *
     * @param radiance .
     * @param baseColor .
     * @return
     */
    LightSource(const float radiance, const Color &baseColor)
    : mRadiance(radiance), mBaseColor(baseColor)
    {}
};

#endif // RAY_TRACER_LIGHT_SOURCE_HPP