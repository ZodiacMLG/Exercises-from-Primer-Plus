#include <iostream>
#include "golf.h"

//	Chapter9_Ex1

//	Note that setgolf () is overloaded.
//  Using the first version of setgolf () would look like this:
//	golf ann;
//	setgolf(ann, "Ann Birdfree", 24);
//	
//	The function call provides the information that's stored in the ann structure.
//  Using the second version of setgolf () would look like this:
//	golf andy;
//	setgolf(andy);
//
//	The function would prompt the user to enter the name and handicap and store them in the andy structure.
//  This function could (but doesn't need to) use the first version internally.
//  Put together a multifile program based on this header.
//  One file, named golf.cpp. should provide suitable function definitions to match the prototypes in the header file.
//  A second file should contain main () and demonstrate all the features of the prototyped functions.
//  For example, a loop should solicit input for an array of golf structures
//  and terminate when the array is full or the user enters an empty string for the golfer's name.
//  The main () function should use only the prototyped functions to access the golfstructures.

int main() {
	golf ann;
	setgolf(ann, "Ann birdfree", 24);

	golf andy;
	setgolf(andy);

	showgolf(ann);
	showgolf(andy);

	const int max_golfists = 5;
	int count{};
	golf golfers[max_golfists];
	std::cout << "Enter golf information (empty name to stop): " << std::endl;
	for (; count < max_golfists; count++) {
		if (setgolf(golfers[count]) == 0) {
			break;
		}
	}

	handicap(golfers[1], 25);

	std::cout << "\nAll golfers:\n";
	for (int i = 0; i < count; i++) {
		showgolf(golfers[i]);
		std::cout << std::endl;
	}

	return 0;
}
