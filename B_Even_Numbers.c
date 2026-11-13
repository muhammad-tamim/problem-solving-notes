#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool isEven = false;

    for(int i = 1; i <=n; i++){
        if(i % 2 == 0){
            isEven = true;
            printf("%d\n", i);
        }
    }
    if(!isEven){
        printf("-1");
    }

    return 0;
}