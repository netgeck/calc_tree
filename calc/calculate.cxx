/* 
 * File:   calculate.cxx
 * Author: kostya
 * 
 * Created on 23 сентября 2017 г., 23:58
 */

#include <algorithm>
#include "calculate.h"


//int32_t calculate(const binTree<expressionAtom>& expressionTree) {
//	switch(expressionTree.root().data.type) {
//		case expressionAtom::atomType::num_int:
//			return expressionTree.root().data.val.integer;
//
//	}
//
//	return 0;
//}



tree::bin::Node<std::string_view> parse(const std::string_view expression) {
	std::cout << "выражение: " << expression << std::endl;
	
	std::size_t pos = expression.find_first_not_of(" ");
	if (pos == std::string_view::npos) {
		std::cout << "выражение не содержит непробельных символов" << std::endl;
		throw std::runtime_error("выражение не содержит непробельных символов");
	}
	
	
	if (!std::all_of(expression.begin(), expression.end(), [](char c) {return std::isalpha(c); })) {
		std::cout << "Есть буквы" << std::endl;
		throw std::runtime_error("Буквы!");
	}
	
}