#pragma once

#include <memory>

enum class Color : size_t
{
	red = 0,
	black = 1
};

template<typename T>
class Node;

template<typename T>
using node_ptr_type = std::unique_ptr<Node<T>>;

template<typename T>
using node_type = Node<T>;