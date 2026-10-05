#define errorA -1
#pragma warning(disable : 4996)
#include <cstdio>
#include <iostream>
#include <io.h>
#include <format>
#include <stack>
#include <exception>
#include <cstring>

int room[5];
int topRoom = 0;

void push(int i) {
	if (topRoom == 5) {
		std::cout << "full" << std::endl;
		return;
	}
	room[topRoom] = i;
	topRoom++;
}

int pop(void) {
	if (topRoom == 0) {
		std::cout << "empty" << std::endl;
		return errorA;
	}
	topRoom--;
	return room[topRoom];
}

int main(void) {
	int select;
	std::cout << "Started" << std::endl;
	std::cout << "select push or pop\n push : 1\n pop : 2\n" << std::endl;
	while(true){
		std::cin >> select;
		if (select == 1) {
			int value;
			std::cout << "type value" << std::endl;
			std::cin >> value;
			push(value);
			std::cout << room[0] << " ";
			std::cout << room[1] << " ";
			std::cout << room[2] << " ";
			std::cout << room[3] << " ";
			std::cout << room[4] << std::endl;
			std::cout << topRoom << std::endl;
			std::cout << "value updated\nselect push or pop\n push : 1\n pop : 2\n" << std::endl;
			std::cout << std::endl;
		}
		else if (select == 2) {
			pop();
			std::cout << room[0] << " ";
			std::cout << room[1] << " ";
			std::cout << room[2] << " ";
			std::cout << room[3] << " ";
			std::cout << room[4] << std::endl;
			std::cout << topRoom << std::endl;
			std::cout << "value updated\nselect push or pop\n push : 1\n pop : 2\n" << std::endl;
			std::cout << std::endl;
		}
		else {
			std::terminate();
		}
	}

	return 0;
}