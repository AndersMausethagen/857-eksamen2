#ifndef GROUNDOBJECT_H
#define GROUNDOBJECT_H


#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include "transform.h"

struct VertexData
{
    QVector3D position;
    QVector2D texCoord;
    QVector3D normal;
};
class GroundObject : protected QOpenGLFunctions
{
public:
    GroundObject();
    ~GroundObject();

    void initGeometry();


    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;

     VertexData *vertices[];
};

#endif // GROUNDOBJECT_H
