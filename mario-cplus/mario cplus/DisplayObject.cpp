#include <SFML\Graphics.hpp>
#include "DisplayObject.hpp"
DisplayObject::DisplayObject(const Vector2f& startSize, const Vector2f& startPosition, const sf::Texture& spritesheet) {
	_position = new Vector2f(startPosition);
	_size = new Vector2f(startSize);
	_scaleFactor = new Vector2f(1, 1);
	_texture = new sf::Texture(spritesheet);
	_sprite = new sf::Sprite(*_texture);
	_collisionBox = new sf::FloatRect();
}

DisplayObject::~DisplayObject()
{
	delete _position;
	delete _size;
	delete _scaleFactor;
	delete _sprite;
	delete _texture;
	delete _collisionBox;
}
