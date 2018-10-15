#include <iostream>
#include "bst.h"
using namespace std;


int main() {
	int x;
	int nleaves;
	int h;

	bst<int> *t = new bst<int>();

	/*while ((std::cin >> x))
		t->insert(x);   */

	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		t->insert(x);
	} 

	if (t->size() <= 20) 
	{
		t->inorder();
		t->preorder();
		t->postorder();
	}

	h = t->height();
	std::cout << "\n#### Reported height of tree:   " << h << "\n";

	nleaves = t->num_leaves();
	std::cout << "\n#### Reported number of leaves:   " << nleaves << "\n";

	delete t;

	

	system("pause");

	return 0;
}
