/* 
 * File:   tree.h
 * Author: kostya
 *
 * Created on 7 июня 2017 г., 0:31
 */

#ifndef __TREE__H__
#define __TREE__H__

#include <vector>
#include <stddef.h> //size

namespace tree {
	
class node;
	
typedef std::vector<tree::node*> nodeList;

// узел
class node {
public:
	node* getParent();
	node* getChild();
private:
	node* m_parent;
	nodeList m_childs;
};



// путь
class path {
public:
	path(const nodeList& orderedUnits);
	
	// получить длину пути
	size_t pathLength() { return m_path.size() - 1; };
private:
	nodeList m_path;
};

// получить путь от узла к узлу
tree::path getMinPath(node* u1, node* u2);

// глубина узла
size_t nodeDepth(node* n, node* root){
	return getMinPath(n, root).pathLength();
}




}

#endif /* __TREE__H__ */

