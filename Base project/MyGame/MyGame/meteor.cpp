#include "meteor.h"

sf::FloatRect Meteor::getCollisionRect()
{
	return sprite_.getGlobalBounds();
}

void Meteor::handleCollision(GameObject& otherGameObject)
{
	if (otherGameObject.hasTag("laser"))
	{
		otherGameObject.makeDead();
	}

	makeDead();
}
const float SPEED = 0.25f;

Meteor::Meteor(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/meteor.png"));
	sprite_.setPosition(pos);
	assignTag("meteor");
}

void Meteor::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}

void Meteor::update(sf::Time& elapsed) 
{
	int mselapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();

	if (pos.x < sprite_.getGlobalBounds().width * -1)
	{
		makeDead();
	}
	else
	{
		sprite_.setPosition(sf::Vector2f(pos.x - SPEED *mselapsed, pos.y));
	}

	float laserX = x + bounds.width;
	float laserY = y + (bounds.height / 2.0f);

	LaserPtr laser = std::make_shared<Laser>(sf::Vector2f(laserX, laserY));
	GAME.getCurrentScene().addGameObject(laser);

	float x = pos.x;
	float y = pos.y;

	int mselapsed = elapsed.asMilliseconds();
}


