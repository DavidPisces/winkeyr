#include <Windows.h>
#include <WinUser.h>
/* 
    WinKey demo for Mydockfinder
    Open Start menu
    Made by Lingluo
    Follow GNU General Public License v3.0
*/
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

int main()
{
    INPUT inputs[4] = {};
    Sleep(100);
    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_CONTROL;
    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = VK_CONTROL;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_ESCAPE;
    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_ESCAPE;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    exit(0);
    return 0;
}