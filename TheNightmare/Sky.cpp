#include "Sky.h"

Sky::Sky():SkyModel("../resources/objects/Sky/Sky.obj")
{
	MinVertex = SkyModel.MinVertex;
	MaxVertex = SkyModel.MaxVertex;
	ObjectCenter = (MinVertex + MaxVertex) / 2.0f;
	GameObject::Translate(-ObjectCenter);
}

void Sky::Draw(Shader*ourShader)
{
	ourShader->setMat4("model", ModelMatrix);
	SkyModel.Draw(*ourShader);
}


Sky::~Sky()
{
}