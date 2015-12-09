#include "camera.h"


Camera::Camera(int height, int width, float nearPlane, float farPlane, float fov)
    : mHeight(height), mWidth(width), mNearPlane(nearPlane), mFarPlane(farPlane), mFieldOfView(fov)
{
    mAspectRatio = float(mWidth)/float(mHeight ? mHeight : 1);
    mBackgroundColor = QVector4D(0.3f, 0.3f, 0.3f, 1.0f);
    mPerspective.setToIdentity();
    mPerspective.perspective(mFieldOfView, mAspectRatio, mNearPlane, mFarPlane);
    mViewMatrix.translate(0.0, 0.0, 0.0f);
}

Camera::~Camera()
{

}

void Camera::rotate(float angle, const QVector3D &axis)
{
    mViewMatrix.rotate(angle, axis);
}

void Camera::translate(float x, float y, float z)
{
    mViewMatrix.translate(x, y, z);

}

void Camera::setAspectRatio(int w, int h)
{
    mAspectRatio = float(w)/float(h ? h : 1);
    mPerspective.setToIdentity();
    mPerspective.perspective(mFieldOfView, mAspectRatio, mNearPlane, mFarPlane);
}

void Camera::setBackgroundColor(float r, float g, float b, float a)
{
    mBackgroundColor = QVector4D(r, g, b, a);
}

