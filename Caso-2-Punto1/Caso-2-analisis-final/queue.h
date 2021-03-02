#ifndef _queue_
#define _queue_

#include "node.h"
#include "list.h"
#include <iostream>

using namespace std;

template <class T>

class Queue : public List<T> {
	public:
		void enqueue(T &pValue){
			this->addToEnd(pValue);
		}

		void dequeue() {
            T removed = this->removeFirstElement();
			cout << removed.getName() << endl;
		}
};

#endif
