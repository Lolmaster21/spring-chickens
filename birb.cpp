#include"birb.h"
#include <cstdlib>
#include<iostream>
using namespace std;
//function definition for constructor
birb::birb(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}

//function definition for draw
void birb::draw(sf::RenderWindow& window) {

	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);
	
	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0,0,0))); //black
	body.setPosition(xpos+15, ypos+10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(200, 150, 0))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);
	//------------------------------------------------------------------------------------------------------

}

void birb::fly(sf::RenderWindow& window) {

	int random = rand()%100;

	cout << random << endl;
	if (random <= 3) {
		ypos -= 1;
	}
	else if (random <= 6) {
		ypos += 1;
	}
	else
		ypos += 0;

}

flower::flower(int x, int y, int s) {
	xpos = x;
	ypos = y;
	size = s;

}

void flower::draw(sf::RenderWindow& window) {
	int blue = rand() % 200;
	int green = rand() % 200;
	int red = rand() % 255;
	//stem--------------------------------------------------------------
	rect.setPosition(420, 500);
	rect.setFillColor(sf::Color(0, 200, 0));
	rect.setSize(sf::Vector2f(20, 100));

	rect2.setPosition(620, 500);
	rect2.setFillColor(sf::Color(0, 200, 0));
	rect2.setSize(sf::Vector2f(20, 100));
	//buds--------------------------------------------------------------
	circle.setRadius(size);
	circle.setFillColor((sf::Color(red, green, blue)));
	circle.setPosition(xpos, ypos);
	
	window.draw(circle);
	window.draw(rect);
	window.draw(rect2);

}
