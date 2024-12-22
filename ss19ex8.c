#include <stdio.h>

struct sinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void sapXepSinhVien(struct sinhVien SV[], int n){
    struct sinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(SV[i].name, SV[j].name) > 0) {
                temp = SV[i];
                SV[i] = SV[j];
                SV[j] = temp;
            }
        }
    }
}

int main() {
    struct sinhVien SV[5] = {
        {1, "phung vuong", 18, "0246892272"},
        {2, "bui vu", 18, "0287267383"},
        {3, "le son", 18, "03827299229"},
        {4, "pham anh", 18, "082624161717"},
        {5, "hoang nhat", 18, "01938363636"}
    };
    
    int n = 5;
    sapXepSinhVien(SV, n);
    printf("\nthong tin sinh vien sau khi sap xep theo ten:\n");
    for(int i = 0; i < n; i++){
        printf("sinh vien %d:\n", SV[i].id);
        printf("id: %d\n", SV[i].id);
        printf("ten: %s\n", SV[i].name);
        printf("tuoi: %d\n", SV[i].age);
        printf("so dien thoai: %s\n", SV[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

