#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h> 

using namespace sf;

bool start = false;
bool win = false;
bool lose = false;
int murDroit = 500;
int murGauche = 0;
int murHaut = 500;
int screen_width = 500;
int screen_height = 500;
int pos_bx = 250;
int pos_by = 450;
int rayon_b = 10;
int pos_rx = 210;
int pos_ry = 480;
int Larg_r = 100;
int Haut_r = 10;
int pos_brx = 50;
int pos_bry = 10;
int Larg_br = 50;
int Haut_br = 15;

int main()
{
	sf::RenderWindow window(sf::VideoMode(screen_width, screen_height), "Not Tetris");


	sf::CircleShape cercle(rayon_b);
	cercle.setFillColor(sf::Color::Red); // White Black Red Blue Green Cyan Magenta Yellow
	cercle.setPosition(500/2,350/2);
	cercle.setOrigin(10, 0);

	sf::RectangleShape raquette({100,10});
	raquette.setFillColor(sf::Color::Green); // White Black Red Blue Green Cyan Magenta Yellow
	raquette.setPosition(150,380);

	sf::RectangleShape brique({ 50,15 });
	brique.setFillColor(sf::Color::Green); // White Black Red Blue Green Cyan Magenta Yellow
	brique.setPosition(50, 10);

	Font font;
	if (!font.loadFromFile("Fonts/04B_30__.ttf")) // pour vérifier si y'a bien la police
		std::cout << "COULD NOT LOAD FONT!" ;

	Text text;		// Pour générer un texte
	text.setFont(font);
	text.setCharacterSize(24);
	text.setFillColor(Color::Red);
	text.setStyle(Text::Bold);
	text.setString("Press enter to START"); // chaine de caractere
	text.setPosition(10, 200);

	Text text2;
	text2.setFont(font);
	text2.setCharacterSize(24);
	text2.setFillColor(Color::Red);
	text2.setStyle(Text::Bold);
	text2.setString("Press escape to LEAVE");
	text2.setPosition(10, screen_height/2);
	

	while (1) //win lose
	{
		window.clear();
		while (start == false)	// écran de démarrage
		{

			window.display();
			window.draw(text);
			window.draw(text2);
			if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)))
				start = true;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				break;
			
		}
		
		pos_by = pos_by - 2;
		cercle.setPosition(pos_bx, pos_by);
		raquette.setPosition(pos_rx, pos_ry);
		brique.setPosition(pos_brx, pos_bry);


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			pos_rx = pos_rx - 5;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			pos_rx = pos_rx + 5;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			break;
		if (cercle.getPosition().x >= 490)
		{
			pos_bx = pos_bx - 2;
			pos_by = pos_by - 2;

		}

		if (cercle.getPosition().x <= 10)
		{
			pos_bx = pos_bx + 2;
			pos_by = pos_by - 2;
		}

		if (cercle.getPosition().y <= 0)
		{
			pos_bx = pos_bx + 2;
			pos_by = pos_by + 2;
		}

		//if (pos_by >= 500)
		//	start = false;

		window.draw(cercle);
		window.draw(brique);
		window.draw(raquette);
		window.display();

		Sleep(10);
	}
	return 0;
}