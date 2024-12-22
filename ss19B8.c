#include <stdio.h>
#include <string.h>
struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void showSinhVien(struct sinhVien sv[], int count){
    printf("\nDanh sach cac sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", 
               sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
    }
}
int main(){
    struct sinhVien sv[] ={
        {1, "Le Van A", 20, "0123456789"},
        {2, "Le Van B", 21, "0987654321"},
        {3, "Le Van C", 22, "0112233445"},
        {4, "Le Van D", 23, "0223344556"},
        {5, "Le Van E", 24, "0334455667"}
    };
    int count = 5;
    struct sinhVien newSv;
    int index;
    printf("Nhap ID sinh vien: ");
    scanf("%d", &newSv.id);
    printf("Nhap ten sinh vien: ");
    scanf(" %s", newSv.name);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newSv.age);
    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", newSv.phoneNumber);
    printf("Nhap vi tri can chen (0 den %d): ", count);
    scanf("%d", &index);
    if (index < 0 || index > count){
        printf("Vi tri khong hop le!\n");
        return ;
    }
    for (int i = count; i > index; i--) {
        sv[i] = sv[i - 1];
    }
    sv[index] = newSv;
    count++;
    showSinhVien(sv, count);

    return 0;
}
