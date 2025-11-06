#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
using namespace std;

const int N = 5050;
int val[N];
int n;
vector<int> res;

inline int lc(int x){ return 2 * x + 1;}
inline int rc(int x){ return 2 * x + 2;}

void printpreorder(int x){
    if (x >= n) return;
    cout << val[x] << " ";
    printpreorder(lc(x));
    printpreorder(rc(x));
}

void printinorder(int x){
    if (x >= n) return;
    printinorder(lc(x));
    cout << val[x] << " ";
    printinorder(rc(x));
}

void printpostorder(int x){
    if (x >= n) return;
    printpostorder(lc(x));
    printpostorder(rc(x));
    cout << val[x] << " ";
}

void printbyheight(int x){
    do{
        int lend = pow(2, x - 1) - 1;
        int rend = pow(2, x) - 1;
        for (int i = lend; i < rend && i < n; i++) cout << val[i] << " ";
        x++;
    } while (pow(2, x - 1) <= n + 1);
}

void preorder(int x){
    stack<int> st;
    st.push(x);
    cout << val[x] << " ";
    while (!st.empty()){
	int u = lc(st.top());
	cout << val[u] << " ";
	st.push(u);
	if (u >= n) st.pop();
	u = rc(t.top());
	cout << val[u] << " ";
	st.push(u);
	

    
int main(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> val[i];
    getinorder(0);
    int tar;
    cin >> tar;
    for (int j = 0; j < n; j++){
	if (res[j] == tar){
	    cout << res[j - 1] << " ";
	    cout << res[j + 1];
	}
    }
    return 0;
}
