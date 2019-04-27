#pragma once

#include "decl.h"

template<typename T>
struct Node
{

	Node() = default;
	Node(T key, Color color, node_ptr_type left, node_ptr_type right, node_ptr_type parent)
		: key(key)
		, color(color)
		, left(left)
		, right(right)
		, parent(parent)
	{

	}

	T key;
	Color color;
	node_ptr_type left;
	node_ptr_type right;
	node_ptr_type parent;
};
