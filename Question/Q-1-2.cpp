#include<bits/stdc++.h>
using namespace std;

int count(){
    char input[7];
    scanf("%s", input);
    if (input[0] == 'f'){
        int x = count();
        return 2 * x - 3;
    }
    else if (input[0] == 'g'){
        int x = count();
        int y = count();
        return 2 * x + y - 7;
    }
    else if (input[0] == 'h'){
        int x = count();
        int y = count();
        int z = count();
        return 3 * x - 2 * y + z;
    }
    else {
        return atoi(input);
    }
}

int main(){
    printf("%d", count());
    return 0;
}