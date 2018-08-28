/* 
 * File:   tree.h
 * Author: kostya
 *
 * Created on 7 июня 2017 г., 0:31
 */

#ifndef __TREE__H__
#define __TREE__H__

#include <vector>
#include <memory>
#include <stddef.h> //size

//namespace binTree {
	
//class node;
//	
//typedef std::vector<binTree::node*> nodeList; //!< список узлов

// узел
template <typename T>
struct btNode {
	T data;
	btNode<T>* left;
	btNode<T>* right;
};


template <typename T>
class binTree {
public:
	binTree() = default;
	virtual ~binTree() = default;
	
	btNode<T> root() const { return m_root; };
private:
	btNode<T>* m_root;
};

// получить путь от узла к узлу
tree::path getMinPath(node* u1, node* u2);

// глубина узла
size_t nodeDepth(node* n, node* root){
	return getMinPath(n, root).pathLength();
}




//}

#endif /* __TREE__H__ */

