#ifndef PEEKING_ITERATOR_H
#define PEEKING_ITERATOR_H

#include <vector>
class Iterator {
	struct Data;
	Data* data;
public:
	Iterator(const std::vector<int>& nums);
	Iterator(const Iterator& iter);
	virtual ~Iterator( );
	// Returns the next element in the iteration.
	int next( );
	// Returns true if the iteration has more elements.
	bool hasNext( ) const;
};


class PeekingIterator : public Iterator {
public:
	PeekingIterator(const std::vector<int>& nums) : Iterator(nums) {
		// Initialize any member here.
		// **DO NOT** save a copy of nums and manipulate it directly.
		// You should only use the Iterator interface methods.
		isSaved = false;
	}

	// Returns the next element in the iteration without advancing the iterator.
	int peek( ) {
		if (isSaved)
			return val;
		else
		{
			val = Iterator::next();
			isSaved = true;
			return val;
		}
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next( ) {
		if (isSaved)
		{
			isSaved = false;
			return val;
		}
		isSaved = false;
		return Iterator::next( );
	}

	bool hasNext( ) const {
		return isSaved || Iterator::hasNext( );
	}

private:
	bool isSaved;
	int val;
};
#endif // !PEEKING_ITERATOR_H
