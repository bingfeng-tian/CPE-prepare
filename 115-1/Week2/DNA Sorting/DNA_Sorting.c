#include <stdio.h>

typedef struct DNA {
    int original_id; // 記錄原始輸入順序（用於穩定排序）
    char data[50];   // 直接給定足夠的陣列大小 (n <= 50)
    int degree;      // 未排列程度
} DNA;

void sort(DNA *arr,int m){
    DNA tmp;
    for(int i=0;i<m;i++){
        for(int j=i;j<m;j++){
            if(arr[i].degree>arr[j].degree){
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

int main() {
    int n_set;
    scanf("%d", &n_set);

    for (int l = 0; l < n_set; l++) {
        int n, m;
        // 注意順序：n代表長度，m代表數目
        scanf("%d %d", &n, &m);
        
        DNA dna_arr[100]; // 陣列大小開 100 以上 (m <= 100)
        
        for (int i = 0; i < m; i++) {
            scanf("%s", dna_arr[i].data); // 用 %s 讀取字串
            dna_arr[i].original_id = i;   // 記錄這是第幾個輸入的
            dna_arr[i].degree = 0;
            
            // 計算未排序程度 (Inversion Count)
            for (int j = 0; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (dna_arr[i].data[j] > dna_arr[i].data[k]) {
                        dna_arr[i].degree++; // 直接累加
                    }
                }
            }
        }

        sort(dna_arr, m);

        // 輸出格式：測試資料間要有一行空白
        if (l > 0) {
            printf("\n");
        }
        
        // 輸出排序後的字串
        for (int i = 0; i < m; i++) {
            printf("%s\n", dna_arr[i].data);
        }
    }

    return 0;
}