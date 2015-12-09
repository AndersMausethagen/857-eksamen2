#include "groundobject.h"

GroundObject::GroundObject()
{

    arrayBuf.create();
    indexBuf.create();

    // Initializes cube geometry and transfers it to VBOs
    initGeometry();

}

GroundObject::~GroundObject()
{

}

void GroundObject::initGeometry()
{

    VertexData *vertices = new VertexData;
    //lager 3 punkter til en trekant
  QVector3D punkt1(1.0f,0.0f,0.0f);
  QVector3D punkt2(1.0f,0.0f,1.0f);
  QVector3D punkt3(0.0f,0.0f,1.0f);

 //lager 3 nye punkter til en trekant til, så vi får en firkant

  QVector3D punkt4(-1.0f,0.0f,0.0f);
  QVector3D punkt5(-1.0f,0.0f,-1.0f);
  QVector3D punkt6(0.0f,0.0f,-1.0f);


}



