#ifndef BOOK_RESOURCEHOLDER_HPP
#define BOOK_RESOURCEHOLDER_HPP
//Code below taken from SFML Game Dev Book

#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>

//#include "ResourceIdentifiers.hpp" //I added this

//start i added this
namespace sf
{
	class Texture;
}
// Forward declaration and a few type definitions
template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;
//end I added this



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

#endif // BOOK_RESOURCEHOLDER_HPP

