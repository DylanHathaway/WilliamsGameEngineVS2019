#include "GameScene.h"
#include"ship.h"
#include "meteorspawners.h"

GameScene::GameScene()
{
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);

	MeteorSpawnerPtr MeteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(MeteorSpawner);
}
