#pragma warning(disable : 4996)
#include <cstdio>
#include <iostream>
#include <io.h>
#include <format>
#include <stack>
#include <exception>
#include <string>

class Human {
public:
	std::string owner;
	int age = 0;
	int weight = 0;

	void speak() {
		std::cout << owner << ": µµ¹Ì »ç¶ûÇØ" << std::endl;
	}

	void angry() {
		std::cout << owner << "(ÀÌ)°¡ »Ô³µ½À´Ï´Ù" << std::endl;
	}
};

int main(void) {
	Human Domi;
	Human Bob;

	Domi.age = 20;
	Bob.age = 23;

	Domi.weight = 40;
	Bob.weight = 180;

	Domi.owner = "µµ¹Ì";
	Bob.owner = "¹ä";

	printf("%d %d\n", Domi.age, Bob.age);
	Bob.speak();
	Domi.angry();

	return 0;
}