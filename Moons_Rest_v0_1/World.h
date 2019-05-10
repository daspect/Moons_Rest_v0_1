#pragma once
#include "Identifiers.h"

#include <SFML/Graphics.hpp> //This class uses sf:Time in the header
#include "ResourceHolder.hpp" //This class declares the texture holder in the header

//depricated
//#include "Entity.h"

//forward declarations
class Entity;

class World
{
public:
	World();
	Entity*	getEntity(ObjectIdentifier::ID);
	void	setup();
	void	update(sf::Time);
	void	addEntity(Entity*);

	TextureHolder textures;
	std::vector <Entity*> entities;

private:
	void	sortEntities();
	void	loadTextures();
	void	createEntities();
};
