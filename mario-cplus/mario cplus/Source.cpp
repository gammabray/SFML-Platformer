#include <SFML\Graphics.hpp>
#include <vector>
#include <string>
#include "DisplayObject.hpp"
int main() {
	sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML :O ");
	sf::Event event;
	sf::RectangleShape rectangle(sf::Vector2f(360,260));
	rectangle.setSize(sf::Vector2f(200, 200));
	rectangle.setFillColor(sf::Color::Blue);
	DisplayObject d;
	while (window.isOpen()) {
		
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			window.clear();
			window.draw(rectangle);
			window.display();
		}
	}
}