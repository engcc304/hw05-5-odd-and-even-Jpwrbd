/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่

    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include <stdio.h>
int main()
{
    int N = 0;
    printf("Input : ");
    scanf("%d", &N);
    printf("Output: ");
    if (N % 2 == 0)
    {
        printf("%d is an odd integer", N);
    }
    else
    {
        printf("%d is an odd integer", N);
    }
    return 0;
}