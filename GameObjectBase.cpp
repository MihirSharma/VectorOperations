#include "GameObjectBase.h"

float GameObjectBase::GetRad() {
	return radius;
}

void GameObjectBase::SetRad(float rad) {
	radius = rad;
}

void GameObjectBase::AddToCollisionException(std::string x) {
	collisionException.push_back(x);
}