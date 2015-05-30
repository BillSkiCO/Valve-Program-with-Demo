// FILE: valve.cpp (Implementation File)
// AUTHOR: Bill Golembieski
// DATE: 5/29/2015
// CLASS IMPLEMENTED: valve (see valve.h for documentation)

#include "stdafx.h"
#include <cassert>
#include "valve.h"


namespace golembieski_1
{
	valve::valve()
	{
	// Simple open-close valve
		max_position = 1;
		position = 0;
	}

	valve::valve(int size)
	// Library used cassert
	{
		assert(size > 0);
		max_position = size;
		position = 0;
	}

	void valve::shift(int amount)
	{
		position += amount;
	// Bounding
		if (position < 0)
			position = 0;
		else if (position >= max_position)
			position = max_position;
	}
}
