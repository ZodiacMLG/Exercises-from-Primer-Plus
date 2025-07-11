#include <iostream>


//	Chapter7_Ex3

//	Here is a structure declaration:
//
//	struct box {
//		char maker[40];
//		float height;
//		float width;
//		float length;
//		float volume;
//	}
// 
//	a. Write a function that passes a box structure by value and that displays the value of each member. //DONE
//	b. Write a function that passes the address of a box structure and that sets the volume member to the product of the other three dimensions.
//	c. Write a simple program that uses these two functions.

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showStruct(box);
void dimensions(box*);

int main() {
	box kvadrat = { "cola", 10, 20, 30, 40 };
	box second = { "second", 25, 20, 30 };
	
	showStruct(kvadrat);

	dimensions(&second);
	showStruct(second);

	return 0;
}

void showStruct(box b) {
	std::cout << "Name: " << b.maker << std::endl
		<< "Height: " << b.height << std::endl
		<< "Width: " << b.width << std::endl
		<< "Length: " << b.length << std::endl
		<< "Volume: " << b.volume << std::endl;
}

void dimensions(box * b) {
	b->volume = b->height * b->length * b->width;
}