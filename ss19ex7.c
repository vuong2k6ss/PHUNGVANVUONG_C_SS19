#include <stdio.h>

struct sinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void xoaSinhVien(int id, struct sinhVien SV[], int *n){
    int found = 0;
    for(int i = 0; i < *n; i++){
        if (SV[i].id == id) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                SV[j] = SV[j + 1]; 
            }
            (*n)--; 
            break;
        }
    }
    if (found == 0) {
        printf("khong tim thay sinh vien co id: %d\n", id);
    } else {
        printf("sinh vien co id: %d da duoc xoa.\n", id);
    }
}
int main() {
    struct sinhVien SV[50]={
        {1, "phung vuong", 18, "0246892272"},
        {2, "bui vu", 18, "0287267383"},
        {3, "le son", 18, "03827299229"},
        {4, "pham anh", 18, "082624161717"},
        {5, "hoang nhat", 18, "01938363636"}
    };

    int n = 5; 

    int idToDelete;
    printf("nhap id sinh vien can xoa: ");
    scanf("%d", &idToDelete);
    xoaSinhVien(idToDelete, SV, &n);
    printf("\nthong tin sinh vien sau khi xoa:\n");
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

