// BaiTapTrongGiaoTrinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <iostream>

int inHoVaTen() {
    char hoVaTen[30];
    printf("Nhap ho va ten cua ban va Enter: ");
    // gets(hoVaTen); Tranh dung gets vi rat nguy hiem se gay loi tran bo nho dem
    getchar(); // Goi getchar() truoc fgets(), gets() vi fgets(), gets() nhan luon phim enter o phan truoc nen ham fgets() se bi bo qua
    fgets(hoVaTen,sizeof(hoVaTen), stdin); // Su dung fgets() de khong bi loi tran bo nho dem
    printf("Xin chao ban %s\n", hoVaTen);
    printf("Chuc ban %s hoc tot!!", hoVaTen);
    return 11; // Thuc hien bai 1 chuong 1 
}

int main()
{
    int phim = 0;
    printf("Chao mung ban da den voi bai tap cua tui\n");
    printf("Vui long nhan phim 1 de nhap vao ho ten\n");
    scanf_s("%i", &phim);
    int trangThaiBai = 0;
    switch (phim)
    {
    case 1:
        trangThaiBai = inHoVaTen();
        break;
    default:
        break;
    }
    return 0;


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu 

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
