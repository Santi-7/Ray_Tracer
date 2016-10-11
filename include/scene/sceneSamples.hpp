/* ---------------------------------------------------------------------------
** sceneSamples.hpp
** TODO: Add doc.
**
** Author: Miguel Jorge Galindo Ramos, NIA: 679954
**         Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#include <scene.hpp>
#include <sphere.hpp>

// TODO: Add doc.
/**
 * .
 *
 * @return .
 */
Scene CornellBox()
{
    Scene cornellBox;
    // A pinhole camera with default configuration.
    cornellBox.SetCamera(Pinhole(Vect(0,1,0), Vect(1,0,0), Vect(0,0,1), Point (0,0,-2), (float)3.14159/2, 1.0, 1920, 1080));
    // Five big spheres pretend the box.
    /*cornellBox.AddShape(Sphere(Point(-50004, 0, 2), 50000)); // Left wall.
    cornellBox.AddShape(Sphere(Point(50004, 0, 2), 50000)); // Right wall.
    cornellBox.AddShape(Sphere(Point(0, -50004, 2), 50000)); // Floor.
    cornellBox.AddShape(Sphere(Point(0, 50004, 2), 50000)); // Roof.
    cornellBox.AddShape(Sphere(Point(0, 0, 50004), 50000)); // Back wall.*/
    cornellBox.AddShape(Plane(Point(-4, 0, 0), Vect(1,0,0))); // Left wall.
    cornellBox.AddShape(Plane(Point(4, 0, 0), Vect(-1,0,0))); // Right wall.
    cornellBox.AddShape(Plane(Point(0, 4, 0), Vect(0,-1,0))); // Roof.
    cornellBox.AddShape(Plane(Point(0, -4, 0), Vect(0,1,0))); // Floor.
    cornellBox.AddShape(Plane(Point(0, 0, 5), Vect(0,0,-1))); // Back wall


    // Two spheres inside the box.
    cornellBox.AddShape(Sphere(Point(-2, -1, 4), 1));
    cornellBox.AddShape(Sphere(Point(2, -1, 4), 1));
    cornellBox.AddLightSource(PointLight(Point(0, -1, 4)));

    return cornellBox;
}