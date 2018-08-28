/* 
 * File:   calculate.h
 * Author: kostya
 *
 * Created on 23 сентября 2017 г., 23:58
 */

#ifndef CALCULATE_H
#define CALCULATE_H


#include <stdint.h>
#include <string>

#include <tree.h>

class expressionAtom {
public:
	enum atomType { expression, num_int/*, num_float */};
	enum expressions { Addition, Subtraction, Multiplication, Division };
	union value {
		expressions	exprType;
		uint64_t	integer;
//		double		floatVal;
	};
	atomType type;
	value val;
};



int32_t calculate(const binTree<expressionAtom>& expressionTree);


#endif /* CALCULATE_H */


