#include "vector.h"
#define BTNodePosi(T) BTNode<T>*//B���ڵ�λ��

template<typename T>
struct BTNode {
	BTNodePosi(T) parent;
	Vector<T> key;//�ؼ�������
	Vector<BTNodePosi(T)> child;//�������� �����ܱ�key��һ
	//constructor ֻ�ṩ��Ϊ���ڵ㴴����constructor
	BTNode() { parent = NULL; child.insert(0, NULL); }
	BTNode(T e, BTNodePosi(T) lc = NULL, BTNodePosi(T) rc = NULL) {
		parent = NULL;
		key.insert(0, e);
		child.insert(0, lc); child.insert(1, rc);
		if (lc)lc->parent = this;
		if (rc)rc->parent = this;
	}
};