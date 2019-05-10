#ifndef BOOK_RESOURCEHOLDER_HPP
#define BOOK_RESOURCEHOLDER_HPP
//DEPENDENT ON HAVING ACCESS TO "Identifiers.h"

/*Code below taken from SFML Game Dev Book - Modified by me. I moved the textures Enum from ResourceIdentifies.cpp to identifies.h
I also moved the typedef of texture holder here from ResourceIdentifies.cpp
I deleted ResourceIdentifies.cpp as it was no longer needed */

#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>





template <typename Resource, typename Identifier>
class ResourceHolder
{
	public:
		void						load(Identifier id, const std::string& filename);

		template <typename Parameter>
		void						load(Identifier id, const std::string& filename, const Parameter& secondParam);

		Resource&					get(Identifier id);
		const Resource&				get(Identifier id) const;


	private:
		void						insertResource(Identifier id, std::unique_ptr<Resource> resource);


	private:
		std::map<Identifier, std::unique_ptr<Resource>>	mResourceMap;
};

#include "ResourceHolder.inl"


//Start of code moved from ResourceIdentifies.cpp
namespace sf
{
	class Texture;
}
// Forward declaration and a few type definitions
//template <typename Resource, typename Identifier>
//class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;
//end of code moved from ResourceIdentifies.cpp

#endif // BOOK_RESOURCEHOLDER_HPP

