#include<bits/stdc++.h>
 
using namespace std;

int ok;

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

typedef node NODE;

void noi_node (NODE* &t, int b, int c) {
	if (c == 'L') t->l = new NODE(b);
	if (c == 'R') t->r = new NODE(b);
}

void tao_tree (NODE *t, int a, int b, char c) {
	if (t == NULL) return;
	if (t -> data == a) noi_node(t, b, c);
	tao_tree (t->l, a, b, c);
	tao_tree (t->r, a, b, c);
}

void NLR (NODE* t) { // duyet truoc
	if (t != NULL) {
		cout << t->data << " ";
		NLR (t->l);
		NLR (t->r);
	}
}

void LNR (NODE* t) {
	if (t != NULL) {
		LNR (t->l);
		cout << t->data << " ";
		LNR (t->r);
	}
} 

void LRN (NODE* t) {
	if (t != NULL) {
		LRN (t->l);
		LRN (t->r);
		cout << t->data << " ";
	}
}

void check (NODE* t) {
	if (ok == 0 || t == NULL) return;
	if (t->l == NULL && t->r != NULL || t->l != NULL && t -> r == NULL) {
		ok = 0;
		return;
	} 
	check (t->l);
	check (t->r);
}

void TC(){
	int n;
	cin >> n;
	NODE* t = NULL;
	ok = 1;
	while (n--) {
		int a, b;
		char c;
		cin >> a >> b >> c;
		if (t == NULL) {
			t = new NODE(a);
			noi_node(t, b, c);
		}
		else tao_tree(t, a, b, c);
	}
	check(t);
	cout << ok << endl;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
