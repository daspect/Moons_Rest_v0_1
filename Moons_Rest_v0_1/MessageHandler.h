#pragma once

#include <queue>

#include "Message.h" //this class works with message objects in the header

//depricated
//#include "MessageIdentifiers.inl"
//#include "Entity.h"
//#include <SFML/Graphics.hpp>
//#include "Identifiers.h"

//forward declarations
class World;

class MessageHandler
{
public:
	MessageHandler(World*);
	void sendMessage(Message msg);
	void publishMessage(Message msg);
	void handleMessages();

private:
	std::queue<Message> directMessageQueue;
	std::queue<Message> publishedMessageQueue;
	World* world;

	void handleDirectMessages();
	void handlePublishedMessages();
};

