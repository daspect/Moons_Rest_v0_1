#pragma once

#include <thread>
#include <chrono>
#include <iostream>

#include <SFML/Graphics.hpp>	//This class creates and owns the window in the header
#include "MessageHandler.h"		//This class creates and owns the message handler in the header
#include "World.h"				//This class creates and owns the world in the header

//Depricated
//#include "ResourceIdentifiers.hpp"
//#include "World.h"
//#include "Entity.h"
//#include "ResourceHolder.hpp"


class Game
{
	public:
				Game();
		void	run();
		void	render();
		void	processInput();

		World world;
		MessageHandler messenger;
		

	private:
		static const sf::Time TimePerFrame;
		const int frameSize;
		sf::RenderWindow window;
		sf::Clock mClock;
		sf::View view;
		
};
