#include "header.h"

int main()
{
    printf("===========================================\n");
    printf("\t\t Tugas 1 \n");
    printf("===========================================\n");

    printf("Angka 1 : %d \n",5);
    printf("Angka 2 : %d \n",7);
    printf("Yg terkecil adalah %d\n",min2(5,7));
    printf("Angka 1 : %d \n",12);
    printf("Angka 2 : %d \n",3);
    printf("Yg terkecil adalah %d\n",min2(12,3));
    printf("Angka 1 : %d \n",4);
    printf("Angka 2 : %d \n",9);
    printf("Yg terkecil adalah %d\n",min2(4,9));

    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 2 \n");
    printf("===========================================\n");

    printf("Angka 1 : %d \n",5);
    printf("Angka 2 : %d \n",7);
    printf("Yg terbesar adalah %d\n",max2(5,7));
    printf("Angka 1 : %d \n",12);
    printf("Angka 2 : %d \n",3);
    printf("Yg terbesar adalah %d\n",max2(12,3));
    printf("Angka 1 : %d \n",4);
    printf("Angka 2 : %d \n",9);
    printf("Yg terbesar adalah %d\n",max2(4,9));

    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 3 \n");
    printf("===========================================\n");

    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 14, 6, 5, 22};
    cetakArr(data1,7);
    printf("\nYg Terbesar : %d \n",rec_max(data1,0,7));

    cetakArr(data2,7);
    printf("\nYg Terbesar : %d \n",rec_max(data2,0,7));

    cetakArr(data3,7);
    printf("\nYg Terbesar : %d \n",rec_max(data3,0,7));
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 4 \n");
    printf("===========================================\n");

    cetakArr(data1,7);
    printf("\nYg Terkecil : %d \n",rec_min(data1,0,7));

    cetakArr(data2,7);
    printf("\nYg Terkecil : %d \n",rec_min(data2,0,7));

    cetakArr(data3,7);
    printf("\nYg Terkecil : %d \n",rec_min(data3,0,7));
    puts("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 5 \n");
    printf("===========================================\n");

    rec_print_all(data1,0,7);
    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 6 \n");
    printf("===========================================\n");

    cetakArr(data1,7);
    hasil=rec_mean(data1,0,7);
    printf("\nNilai rata rata nya : %.3f \n",hasil);

    printf("===========================================\n");
    printf("\t\t Tugas 7 \n");
    printf("===========================================\n");
    printf("sebelum sorting : \n");
    cetakArr(data1,7);
    printf("\n");
    rec_selection_sort(data1,7);
    printf("\n");
    printf("sesudah sorting : \n");
    cetakArr(data1,7);

    return 0;
}
