#pragma once

#include "MessageIdentifiers.inl"
#include "Identifiers.h"

//depricated
//#include <SFML/Graphics.hpp>



class Message
{
public:
	Message(MessageType::ID);
	Message(MessageType::ID, ObjectIdentifier::ID to);
	Message(MessageType::ID, ObjectIdentifier::ID to, ObjectIdentifier::ID from);
	MessageType::ID messageType;
	ObjectIdentifier::ID to;
	ObjectIdentifier::ID from;



	MovementDirection::ID movementDir;
	void setMovementDir(MovementDirection::ID dir);
};

