#include"laser.h"

const float SPEED = 1.2f;

Laser::Laser(sf::Vector2f pos)
{
	Sprite_.setTexture(GAME.getTexture("Resources/laser.png"));
	Sprite_.setPosition(pos);
	assignTag("laser");
}

void Laser::draw()
{
	GAME.getRenderWindow().draw(Sprite_);
}

void Laser::update(sf::Time& elapsed) {
	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = Sprite_.getPosition();

	if (pos.x > GAME.getRenderWindow().getSize().x)
	{
		makeDead();
	}







}