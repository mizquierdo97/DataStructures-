#include "List.h"
#include "DynArray.h"
#include <stdio.h>
int main() {
	List<int> a;
	a.Push_Back(5);
	a.Push_Front(4);
	a.Push_Front(4);
	a.Push_Front(4);
	a.Pop_Back();
	a.Pop_Front();

	DynArray <int> b;
	b.push_back(2);
	b.push_back(3);
	b.pop_back();
	getchar();
	return 0;
}