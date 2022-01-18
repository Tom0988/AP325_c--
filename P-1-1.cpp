#include<bits/stdc++.h>
using namespace std;
// atoi()
int count(){
    char input[10];
    scanf("%s", input);
    if (input[0] == 'f'){
        int x = count();
        return 2 * x -1;
    }
    else if (input[0] == 'g'){
        int x = count();
        int y = count();
        return x + 2 * y - 3;
    }
    else {
        return atoi(input);
    }
}

int main(){
    printf("%d", count());
    return 0;
}