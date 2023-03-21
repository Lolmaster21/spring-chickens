#include<SFML/Graphics.hpp>
#include "birb.h"

int main() {

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int birbColor2[] = { 176,224,230 }; //set up an array of colors to make your birb BLUE!
	int birbColor3[] = { 75,0,130 }; //set up an array of colors to make your birb INDIGO!
	int birbColor4[] = { 255, 0, 0 }; //set up an array of colors to make your birb PINK!
	int birbColor5[] = { 242, 245, 66 }; //set up an array of colors to make your birb BLUE!
	int birbColor6[] = { 255, 0, 0 }; //set up an array of colors to make your birb INDIGO!


	birb Alex(200, 200, birbColor); //instantiate 1 birb

	birb chewy(400, 200, birbColor2); //instantiate 2 birb

	birb lol(600, 200, birbColor3); //instantiate 3 birb

	birb keven(200, 400, birbColor4); //instantiate 1 birb

	birb ricardo(400, 400, birbColor5); //instantiate 2 birb

	birb jesse(600, 300, birbColor6); //instantiate 3 birb

//first flower-----------------------------------------------------------------------------
	flower s1(600, 485, 30); //bottom bud
	flower s2(550, 440, 30); //left bud
	flower s3(650, 440, 30); //right bud
	flower s4(600, 400, 30); //top bud
	flower s5(600, 440, 30); //middle bud
//second flower-----------------------------------------------------------------------------
	flower s6(400, 485, 30); //bottom bud
	flower s7(450, 440, 30); //right bud
	flower s8(350, 440, 30); //left bud
	flower s9(400, 400, 30); //top bud
	flower s10(400, 440, 30); //middle bud

//third flower----------------------------------------------------------------------------

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window
	
	srand(time(NULL));

	while (1) {//GAME LOOP OMG

		Alex.draw(window);
		chewy.draw(window);
		lol.draw(window);
		keven.draw(window);
		ricardo.draw(window);
		jesse.draw(window);


		Alex.fly(window);
		chewy.fly(window);
		lol.fly(window);
		keven.fly(window);
		ricardo.fly(window);
		jesse.fly(window);


		s1.draw(window);
		s2.draw(window);
		s3.draw(window);
		s4.draw(window);
		s5.draw(window);

		s6.draw(window);
		s7.draw(window);
		s8.draw(window);
		s9.draw(window);
		s10.draw(window);

		window.display();
		window.clear(); //wipes screen, without this things smear

	}
}


