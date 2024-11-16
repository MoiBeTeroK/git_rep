#include <iostream>
int main() {
	// Переменная для имени пользователя
    std::string name;
    std::cout << "Enter your name: ";
	
	// Ввод имени
    std::cin >> name;
	
	// Вывод приветствия и имени
    std::cout << "Hello world from " << name << "!" << std::endl;
    return 0;
}