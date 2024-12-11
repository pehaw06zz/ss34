
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phone[15];
    char email[50];
};

int main() {
    // khai bao danh sach sinh vien
    struct Student students[] = {
        {1, "Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {2, "Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {3, "Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com"},
        {4, "Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com"},
        {5, "Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {6, "Nguyen Van F", 21, "0904488486", "fnv@rikkeiacademy.com"},
        {7, "Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com"},
        {8, "Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {9, "Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {10, "Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"}
    };

    int numStudents = sizeof(students) / sizeof(students[0]);

    //in tieu de bang
    printf("%-5s| %-15s| %-5s| %-15s| %-25s|\n", "STT", "ho va ten", "tuoi", "so dien thoai", "email");
    printf("---------------------------------------------------------------------------------------------\n");

    //in danh sach sinh vien
    for (int i = 0; i < numStudents; i++) {
        printf("%-5d| %-15s| %-5d| %-15s| %-25s|\n", 
               students[i].id, students[i].name, students[i].age, students[i].phone, students[i].email);
    }

    return 0;
}
