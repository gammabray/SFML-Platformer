#pragma once


#ifndef DISPLAYOBJECT_HPP
#define DISPLAYOBJECT_HPP


#include <SFML\Graphics.hpp>
using sf::Vector2f;

///Base Class for all drawable objects in the game.
class DisplayObject {
	
protected:
	Vector2f*      _position;
	Vector2f*      _size;
	Vector2f*      _scaleFactor;
	sf::Texture*   _texture;
	sf::Sprite*    _sprite;
	sf::FloatRect* _collisionBox;
public:
	Vector2f getPosition() { return *_position; }
	void setPosition(const Vector2f& value) { *_position = value; }
	Vector2f getSize() { return *_size; }
	void setSize(const Vector2f& value) { *_size = value; }
	
	virtual void Draw() = 0;
	DisplayObject(const Vector2f& startPos, const Vector2f& startSize, const sf::Texture& spritesheet);
	~DisplayObject();

	

};

#endif
