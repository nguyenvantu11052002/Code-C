#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *l;
	node *r;
	node (int x) {
		data = x;
		l = NULL;
		r = NULL;
	}
};

void themnot (node* &t, int x) {
	if (t == NULL) t = new node(x);
	else {
		if (x < t -> data ) themnot(t -> l, x);
		else themnot(t -> r, x);
	}
}

void LRN (node* t) {
	if (t != NULL) {
		LRN (t -> l);
		LRN (t -> r);
		cout << t->data << " ";
	}
}

void TC () {
	int n;
	cin >> n;
	node* t = NULL;
	int x;
	while (n--) {
		cin >> x;
		themnot(t, x);
	}
	LRN(t);
	cout << endl;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T; 
	cin >> T;
	while (T--) {
		TC();
	}
	return 0;
}
