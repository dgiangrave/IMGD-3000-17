// Author:  David Giangrave
// Date:    9/28/17
// Purpose: Header file for EventOut class
// File:    EventOut.h

#ifndef __EVENT_OUT_H__
#define __EVENT_OUT_H__

#include "Event.h"

namespace df {

	const std::string OUT_EVENT = "df::out";

	class EventOut : public Event {

	public:
		EventOut();
	};

} // end of namespace df
#endif // __EVENT_OUT_H__
