#ifndef BOOK_RESOURCEIDENTIFIERS_HPP
#define BOOK_RESOURCEIDENTIFIERS_HPP
#include "Identifiers.h"

//Code below taken from SFML Game Dev Book

// Forward declaration of SFML classes
namespace sf
{
	class Texture;
}

/*
moved to Identifiers
namespace Textures
{
	enum ID
	{
		Landscape,
		PlayerUp,
		PlayerDown,
		PlayerLeft,
		PlayerRight,
		Tree,
	};
}*/

// Forward declaration and a few type definitions
template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;

#endif // BOOK_RESOURCEIDENTIFIERS_HPP
