#ifndef FLATTEN_NESTED_LIST_ITERATOR_H
#define FLATTEN_NESTED_LIST_ITERATOR_H

#include <stack>
#include <vector>
class NestedIterator {
public:
	NestedIterator(std::vector<NestedInteger> &nestedList) {
		for (int i = nestedList.size( ) - 1; i >= 0; --i)
			s.push(nestedList[i]);
	}

	int next( ) {
		NestedInteger t = s.top( );
		s.pop( );
		return t.getInteger( );
	}

	bool hasNext( ) {
		while (!s.empty( ))
		{
			NestedInteger t = s.top( );
			if (t.isInteger( ))
				return true;
			s.pop( );
			for (int i = t.getList( ).size( ) - 1; i >= 0; i--)
				s.push(t.getList( )[i]);
		}

		return false;
	}

private:
	std::stack<NestedInteger> s;
};
#endif // !FLATTEN_NESTED_LIST_ITERATOR_H
