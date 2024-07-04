#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int *itemA = (int *)a;
    int *itemB = (int *)b;
    int profitA = itemA[1] - itemA[0];
    int profitB = itemB[1] - itemB[0];
    return profitB - profitA;
}
long long solution(int N, int K, int* cost, int* sell) {
    int items[N][2];
    for (int i = 0; i < N; i++) {
        items[i][0] = cost[i];
        items[i][1] = sell[i];
    }

    qsort(items, N, sizeof(items[0]), compare);

    long long total_profit = 0;
    long long current_money = K;

    for (int i = 0; i < N; i++) {
        int item_cost = items[i][0];
        int item_sell = items[i][1];
        
        if (current_money >= item_cost) {
            current_money -= item_cost;
            current_money += item_sell;
            total_profit += (item_sell - item_cost);
        }
    }

    return total_profit;
}

int main() {
    int N;
    scanf("%d", &N);

    int K;
    scanf("%d", &K);

    int* cost = (int*)malloc(sizeof(int) * N);
    for (int i_cost = 0; i_cost < N; i_cost++) {
        scanf("%d", &cost[i_cost]);
    }

    int* sell = (int*)malloc(sizeof(int) * N);
    for (int i_sell = 0; i_sell < N; i_sell++) {
        scanf("%d", &sell[i_sell]);
    }

    long long out = solution(N, K, cost, sell);
    printf("%lld", out);

    free(cost);
    free(sell);
    return 0;
}
