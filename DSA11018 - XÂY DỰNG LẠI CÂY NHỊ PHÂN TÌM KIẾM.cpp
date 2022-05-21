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

void NLR (NODE* t) { // duyet truoc
	if (t != NULL) {
		cout << t->data << " ";
		NLR (t->l);
		NLR (t->r);
	}
}

void themnot (NODE* &t, int x) {
	if (t == NULL) {
		t = new NODE(x);
	}
	else{
		if (x < t->data ) themnot(t -> l, x);
		else themnot(t -> r, x);
	}
}

void TC(){
	int n;
	cin >> n;
	NODE* t = NULL;
	while (n--) {
		int x; cin >> x;
		themnot(t, x);
	}
	NLR(t);
	cout << endl;
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
