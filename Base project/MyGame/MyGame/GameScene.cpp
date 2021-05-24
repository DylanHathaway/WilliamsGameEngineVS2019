#include "GameScene.h"
#include"ship.h"
#include "meteorspawners.h"
#include "score.h"

int GameScene::getScore()
{
	return score_;
}

void GameScene::increasesScore()
{
	++score_;
}


GameScene::GameScene()
{
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);

	MeteorSpawnerPtr MeteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(MeteorSpawner);

	ScorePtr score = std::make_shared<Score>(sf::Vector2f(10.0f, 10.0f));
	addGameObject(score);
}
