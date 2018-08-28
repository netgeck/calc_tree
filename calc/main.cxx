/* 
 * File:   main.cpp
 * Author: kostya
 *
 * Created on 6 июня 2017 г., 0:46
 */

#include <cstdlib>
#include <iostream>

#include "calculate.h"



/*
 * 
 */
int main(int argc, char** argv) {
	std::string expression;
	if (argc > 2) {
		std::cout << "Слишком много аргументов командной строки" << std::endl;
		return EXIT_SUCCESS;
	} else if (argc == 2) { // Получаем выражение из аргумента
		expression = argv[1];
	} else { // Если выражение не задано в командной строке получаем из стандартного ввода
		std::cin >> expression;
	}
	
	std::cout << "Выражение: \"" << expression << "\"" << std::endl;
	
	try {
		//std::cout << calculate(expression) << std::endl;
	} catch (std::runtime_error& e) {
		std::cout << "Не удалось вычислить выражение: " << e.what() << std::endl;
	}
	
	return EXIT_SUCCESS;
}

