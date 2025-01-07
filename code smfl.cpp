#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;


//opening window 
//initialization

// exercice: draw a rectangle shape


int main() {

	sf::ContextSettings settings;
	settings.antiAliasingLevel = 8;


	sf::RenderWindow window(sf::VideoMode({ 400, 400 }), "CODE SFML", Style::Default);

	sf::CircleShape shape2({ 35.0 });
	shape2.setFillColor(Color::Blue);
	shape2.setPosition({ 50, 50 });
	CircleShape triangle(70, 3);
	triangle.setFillColor(Color::Yellow);

	CircleShape heptagon(70,7);
	RectangleShape shape4({ 50, 15 });
	shape4.setFillColor(Color::Green);
	shape4.setPosition({ 300,300 });




	triangle.setPosition({ 150, 150 });

	sf::RectangleShape shape({ 70, 30 });
	shape.setFillColor(Color::Red);
	shape.setPosition(sf::Vector2f(100, 100));

	shape.setRotation(sf::degrees({ 0 }));
	// good turn of angle, however we wanna set the pivot point to center as of	RN, it is set on the top left
	// center is one half of my width and one half of my height
	// shape.setOrigin({ 35.0,15.0 });**
    // cool but now,want to create a "rule" where no matter my position, get same ANSWER --> BECOMES DYNAMIC.
	shape.setOrigin(shape.getOrigin() / 2.0f);

	window.setVerticalSyncEnabled(true);// call it once after creating the window


	// run program while window is open
	while (window.isOpen()) {

		// check for all eventualities of user's input on window
		while (const optional event = window.pollEvent())
		{

			// now, close window event
			if (event->is<sf::Event::Closed>())
				window.close();

			window.clear(sf::Color::Black);

			window.draw(shape);
			window.draw(shape2);
			window.draw(triangle);
			window.draw(heptagon);
			window.draw(shape4);

			window.display();

		}

	}

	return 0;
}