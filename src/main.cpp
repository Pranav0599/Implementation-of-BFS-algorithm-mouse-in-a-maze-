#include <iostream>
#include <cstdlib>
#include "../include/mouse/mouse.h"
#include "../include/api/api.h"


int main(int argc, char *argv[])
{	
	std::pair<int,int> goal_pos{7,7};                        //setting goal
	std::pair<int,int> current{0,0};
	bool search_complete{false};

	rwa2::Mouse my_mouse;

	while (!search_complete) {                          //checks if the mouse has reached the goal and search is complete.
        my_mouse.reveal_walls();
		search_complete = my_mouse.search_maze(goal_pos);  
    }

	my_mouse.display_final_path();                      //Displays final path when the search is complete and mouse has reached goal.

	
}