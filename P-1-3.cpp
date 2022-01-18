#include<bits/stdc++.h>
using namespace std;

int point[50010];
int L = 0;

int cut(int left, int right){
    if (right - left <= 1) return 0;  // end condition
    int len = point[right] - point[left];
    int     

}

int main(){
    int N;
    scanf("%d %d", &N, &L);
    point[0] = 0, point[N+1] = L; //此行值得再三思考
    for (int i = 1; i <= N; i++){
        scanf("%d", point[i]);
    }
    int ans = cut(0, N+1);
    printf("%d", ans);
    return 0;
}