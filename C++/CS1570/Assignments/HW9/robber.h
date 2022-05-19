#ifndef ROBBER_H
#define ROBBER_H

#include "police.h"

const int MAX_BAG_SIZE = 17;

template <class T>
class robber
{
	public:
		//Desc: is a default constructor. Does nothing.
		//Pre: none
		//Post: none
		robber();

		//Desc: constructor that initializes ALL of the robber attributes
		//Pre: coords need to be in a valid range and all robbers need to be active
		//Post: the values of the robber will be updated
		robber(int newID, int y_pos, int x_pos, bool active, bool greedy);

		//Desc: Set if the robber is active
		//Pre: none
		//Post: function will be called if the robber is to be arrested
		void setActive(bool active);

		//Desc: Put loot into the bag.
		//Pre: Loot can only be put in if bag isn't full
		//Post: the bag list will be updated.
		void pickUpLoot(int index, T item);

		//Desc: Move the robber one step in a random direction (selected by number between 0-7)
		//Pre: New coord needs to be within borders of the array.
		/*Post: the coordinates of the robber will be updated.*/
		void move();

	private:
		int ID;
		int x_coord;
		int y_coord;

		T bag[MAX_BAG_SIZE];
		static int totalWorth;
		bool isActive;
		bool isGreedy;
};

#include "robber.hpp"
#endif