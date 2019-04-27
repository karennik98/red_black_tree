#pragma once

template<typename T>
class I_RB_Tree
{
public:
	void insert() = 0;
	void erase() = 0;
	void search() = 0;
	void min_el() = 0;
	void max_el() = 0;
	void leaf_count() = 0;
	void black_height() =0;
};