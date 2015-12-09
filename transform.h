#ifndef TRANSFORM
#define TRANSFORM

#include <QVector3D>


struct Transform
{
    QVector3D mPosition;
    QVector3D mRotation;
    QVector3D mScale;

    Transform(){};
};


#endif // TRANSFORM

