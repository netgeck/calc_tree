/* 
 * File:   calculate.cxx
 * Author: kostya
 * 
 * Created on 23 сентября 2017 г., 23:58
 */


#include "calculate.h"


int32_t calculate(const binTree<expressionAtom>& expressionTree) {
	switch(expressionTree.root().data.type) {
		case expressionAtom::atomType::num_int:
			return expressionTree.root().data.val.integer;
			
	}
	
	return 0;
}


