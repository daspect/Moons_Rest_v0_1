#ifndef BOOK_RESOURCEIDENTIFIERS_HPP
#define BOOK_RESOURCEIDENTIFIERS_HPP

//DEPENDENT ON HAVING ACCESS TO "Identifiers.h"

/*Code below taken from SFML Game Dev Book - Modified by me. I moved the textures Enum to identifies.h and changed this file name from 
ResourceIdentifies.cpp to ResourceHolderForwardDef.inl. */

// Forward declaration of SFML classes
namespace sf
{
	class Texture;
}

// Forward declaration and a few type definitions
template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;

#endif // BOOK_RESOURCEIDENTIFIERS_HPP


/*namespace Textures
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