#include "GameScene.h"
#include"ship.h"
#include "meteorspawners.h"

int GameScene::getScore()
{
	return score_;
}


GameScene::GameScene()
{
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);

	MeteorSpawnerPtr MeteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(MeteorSpawner);
}
