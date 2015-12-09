#ifndef CAMERA_H
#define CAMERA_H
#include <QVector4D>
#include <QMatrix4x4>
#include "transform.h"


class Camera
{
public:

    QVector4D mBackgroundColor ;

    float mNearPlane;
    float mFarPlane;
    float mFieldOfView;
    int mHeight;
    int mWidth;
    float mAspectRatio;

    Transform mTransform;
    QMatrix4x4 mPerspective;
    QMatrix4x4 mViewMatrix;

    //sets standard values for the camera
    /**

       @param height - Height plane of the camera
       @param width - Width plane for the camera
       @param nearPlane - How near the camera objects will be rendered
       @param farPlane - How far the camera will render objects
       @param fov - the field of view of the camera.
     */
    Camera(int height = 600, int width = 800, float nearPlane = 0.2f, float farPlane = 2000.0f, float fov = 45.0f);
    ~Camera();



//Function that allows the camera to be rotated
void rotate(float angle, const QVector3D &axis);
/**

   @param x - Move the camera in the X direction
   @param y - Move the camera in the Y direction
   @param z - Move the camera in the Z direction
 */
//function to change the position of the camera
void translate(float x, float y, float z);
void setAspectRatio(int w, int h);

void setBackgroundColor(float r, float g, float b, float a);

};

#endif // CAMERA_H
