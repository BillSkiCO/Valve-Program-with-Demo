/*
 File Valve.h
 Author: Bill Golembieski
 Date: 5/28/2015
 Class Provided: valve (part of golembieski_1 namespace)

 Constructors
   valve()
    Postcondition: The valve has one position above the closed position, and it is currently closed.

   valve(int size)
    Precondition: size > 0
    Postcondition: The valve has positions above closed, and it is currently closed.

 Modification Member Functions
   void close()
    Postcondition: The valve is closed.

   void shift(int amount)
   Postcondition: The valve's position has been moved by amount (not below 0 or above top position).

 Constant Member Functions
   double flow() const
    Postcondition: The value returned is the current flow as a proportion of maximum flow.

  bool is_open()
   Postcondition: If the valve's flow is above 0, then the function returns true; otherwise it returns false.
*/

#ifndef GOLEMBIESKI_VALVE
#define GOLEMBIESKI_VALVE

namespace golembieski_1
{
	class valve
	{
	public:
		//Constructors
		valve();
		valve(int size);

		//Modification Member Functions
		void close() { position = 0; }
		void shift(int amount);

		//Constant Member Functions
		double flow() const { return position / double(max_position); }
		bool is_open() const { return (position > 0); }
	private:
		int position;
		int max_position;
	};
}

#endif