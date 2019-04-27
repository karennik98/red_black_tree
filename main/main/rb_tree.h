#pragma once

#include "rb_tree_node.h"
#include "I_rb_tree.h"

template <typename T>
class RB_Tree : public I_RB_Tree<T>
{
public:
	class Iterator
	{
	public:
	private:
		node_ptr_type m_node;
	};
public:
	void insert();
	void erase();
	void search();
	void min_el();
	void max_el();
	void leaf_count();
	void black_height();
private:
	node_ptr_type m_root;
};