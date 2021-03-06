#pragma once
#include "Environment.h"
#define PI 3.141592653589793
#define G 9.8
class Rocks : public Environment
{
	static Model*RocksModel;
	glm::vec3 intialPos = GetCenter();
	float Vo;
	float theta;
	bool inAir = false;
	void move();
public:
	Rocks();
	void throwRock(glm::vec3 campos);
	static void LoadRocksModel();
	void Draw(Shader*ourShader);
	float GetRadius();
	bool CheckForHit(glm::vec3 campos);
	void computeIntialVilocity(glm::vec3 campos);
	~Rocks();
};

