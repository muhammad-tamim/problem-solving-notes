#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int evenCount = 0;
    int oddCount = 0;
    int PositiveCount = 0;
    int NegativeCount = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        if(arr[i] % 2 != 0){
            oddCount++;
        }
        if(arr[i] > 0){
            PositiveCount++;
        }
        if(arr[i] < 0){
            NegativeCount++;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", PositiveCount);
    printf("Negative: %d", NegativeCount);

    return 0;
}