// Author:  David Giangrave
// Date:    9/13/17
// Purpose: Header file for the Event class
// File:    Event.h

#ifndef __EVENT_H__
#define __EVENT_H__

#include <string>

namespace df {

	const std::string UNDEFINED_EVENT = "df::undefined";

	class Event {

	private:
		std::string event_type;     // Holds event type

	public:
		// Create base Event
		Event();

		// Destructor
		virtual ~Event();

		// Set event type
		void setType(std::string new_type);

		// Get event type
		std::string getType() const;
	};

}; // End df namespace

#endif // __EVENT_H__