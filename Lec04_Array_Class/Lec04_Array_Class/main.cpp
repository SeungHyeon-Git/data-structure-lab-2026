#include <cstdio>
#include <windows.h>     // 콘솔 한글 출력을 위해

#define HEIGHT 8
#define WIDTH  8

int image[HEIGHT][WIDTH] = {
    { 10,  30,  55,  80, 120, 160, 200, 230 },
    { 20,  45,  70, 100, 140, 180, 220, 210 },
    { 35,  60,  90, 130, 170, 210, 240, 190 },
    { 50,  80, 115, 150, 190, 230, 255, 170 },
    { 40,  65, 100, 140, 175, 215, 235, 150 },
    { 25,  50,  80, 115, 155, 195, 210, 130 },
    { 15,  35,  60,  90, 130, 165, 185, 110 },
    {  5,  20,  40,  70, 105, 140, 160,  90 }
};

int findMaxBrightness()
{
    int maxValue = 0;  

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (image[i][j] > maxValue) {
                maxValue = image[i][j];
            }
        }
    }

    return maxValue;
}

int main()
{
    SetConsoleOutputCP(65001);
    int maxBright = findMaxBrightness();

    printf("2차원 이미지에서 최대 밝기값 = %d\n", maxBright);



    return 0;
}
