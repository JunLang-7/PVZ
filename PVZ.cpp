// PVZ.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include <iostream>
#include "scene.h"
#include <time.h>
#include <Windows.h>


int main()
{
    Scene* scene = new Scene;
    scene->Init();

    // 记录开始和结束时间
    clock_t begin_time = clock();
    clock_t end_time = 0;

    // 帧率：游戏帧率60帧
    float fps = 1000.0f / 60;

    while (1) {
        
        end_time = clock();
        if (float(end_time - begin_time) >= fps) {
            scene->DrawTick();
            scene->EventTick(float(end_time - begin_time) / CLOCKS_PER_SEC);
            
            begin_time = end_time;
        }
        // 如果时间间隔小于60帧则需延时
        else {
            Sleep(fps - float(end_time - begin_time));
        }
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
