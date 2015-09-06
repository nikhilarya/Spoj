#include<bits/stdc++.h>
using namespace std;
const int MAX = 100009;

int long long getmaxarea(int *ht, int n) {
	int long long ret = 0;
	int top = 1, st[MAX], i;
	ht[0] = st[0] = ht[++n] = 0;
	for(i = 1; i <= n; i++) {
		while(top > 1 && ht[st[top-1]] >= ht[i]) {
			ret = max(ret, (int long long)ht[st[top-1]]*(int long long)(i - st[top-2]-1));
			top--;
		}
		st[top++] = i;
	}
	return ret;
}

int main() {
	
	int n, i, ht[MAX];
	while(scanf("%d", &n)==1 && n) {
		for(i = 1; i <= n; i++) scanf("%d", &ht[i]);
		printf("%lld\n", getmaxarea(ht, n));
	}
	return 0;
}
