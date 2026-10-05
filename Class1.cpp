#pragma warning(disable : 4996)
#include <cstdio>
#include <iostream>
#include <io.h>
#include <format>
#include <stack>
#include <exception>
#include <string>

class Password {
public:
	void setLocation(std::string a) {
		Location = a;
	}
	std::string getLocation() {
		return Location;
	}

	void setClientPassword(int c){
		clientPassword = c;
	}
	int getClientPassword() {
		return clientPassword;
	}

	void setClientAge(int A) {
		clientAge = A;
	}
	int getClientAge() {
		return clientAge;
	}

	void setName(std::string n) {
		clientName = n; 
	}
	std::string getName() {
		return clientName;
	}


private:
	std::string Location;
	std::string clientName;
	int clientPassword = 0;
	int clientAge = 0;

};

int main(void) {

	Password list[100];
	int amount = 0;

	while (true) {
		int select;
		std::cout << "안내에 따라서 입력해주세요\n 1번은 등록, 2번은 조회, 3번은 시스템 종료\n";
		std::cout << "원하시는 기능을 선택하시오 : ";
		std::cin >> select;

		if (select == 3) {
			break;                              
		}
		else if (select == 1) {
			if (amount == 100) {                  
				std::cout << "Out of Memory" << std::endl;
				continue;                          
			}
			std::string name, loc;
			int age, pw;
			std::cout << "이름을 입력하시오 : ";
			std::cin >> name;
			std::cout << "사는 지역을 입력하시오 : ";
			std::cin >> loc;
			std::cout << "귀하의 나이를 입력하시오 : ";
			std::cin >> age;
			std::cout << "비밀번호를 설정하시오 : ";
			std::cin >> pw;

			list[amount].setName(name);
			list[amount].setLocation(loc);
			list[amount].setClientAge(age);
			list[amount].setClientPassword(pw);
			amount++;
		}
		else if (select == 2) {
			std::string find;
			std::cout << "조회할 이름 : ";
			std::cin >> find;

			bool found = false;
			for (int k = 0; k < amount; k++)ㄴ {
				if (list[k].getName() == find) {
					std::cout << list[k].getLocation() << " "
						<< list[k].getClientAge() << std::endl;
					found = true;
					break;
				}
			}
			if (!found) std::cout << "존재하지 않는 고객입니다" << std::endl;
		}
		else {
			std::cout << "예기치 못한 오류가 발생되었습니다.";
			break;
		}
	}
	return 0;
}