// Author:  David Giangrave
// Date:    9/13/17
// Purpose: Header file for the Object list iterator class
// File:    ObjectListIterator.h

#ifndef __OBJECT_LIST_ITERATOR_H__
#define __OBJECT_LIST_ITERATOR_H__

#include "Object.h"
#include "ObjectList.h"

namespace df {

	class ObjectList;

	class ObjectListIterator {

	private:
		ObjectListIterator();     // Must be given list when created
		int index;                // index into the list
		const ObjectList *p_list; // list iterating over

	public:
		// Create iterator over indicated list
		ObjectListIterator(const ObjectList *p_l);

		void first();         // Set iterator to first item in list
		void next();          // Set iterator to next item in list
		bool isDone() const;  // Return true if at end of list

							  // return pointer to current Object, NULL if done/empty
		Object *currentObject() const;
	};

} // End df namespace

#endif // __OBJECT_LIST_ITERATOR_H__