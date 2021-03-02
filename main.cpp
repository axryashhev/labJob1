#include <windows.h>
#include "CWnd.h"
#include "Models/Triangle.h"
#include <cmath>
#include <memory>
#define pi 3.14

namespace SignsOfVisible {
    boolean V = true, V_1 = false, V_2 = false;
    boolean m = true;
}

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
//====================================================================
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int
nCmdShow)
{
    MSG msg;
    CWnd mainWnd("Laboratory work 1", hInstance, nCmdShow, WndProc);
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;
}
//====================================================================
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    auto triangle = std::make_unique<Triangle>(100, 100, 50);
    HPEN hP1, hP2;
    HDC hDC;   //Переменная для работы с контекстом вывода окна
    //Вспомогательные переменные для создания и обновления окна
    PAINTSTRUCT ps;
    RECT rect;
    int userReply;
    switch (uMsg)
    {
        case WM_PAINT:
            hDC = BeginPaint(hWnd, &ps);
            hP1 = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));
            hP2 = CreatePen(PS_SOLID, 5, RGB(255, 0, 0));

            if (SignsOfVisible::V == true) {

                if (SignsOfVisible::m == true)
                    SelectObject(hDC, hP2);
                else
                    SelectObject(hDC, hP1);
                MoveToEx(hDC, triangle->getX(), triangle->getY() - triangle->getR(), NULL);
                LineTo(hDC, triangle->getX() - triangle->getR() * cos(pi / 6), triangle->getY() + triangle->getR() * sin(pi / 6));
                LineTo(hDC, triangle->getX() + triangle->getR() * cos(pi / 12), triangle->getY() + triangle->getR() * sin(pi / 12));
                LineTo(hDC, triangle->getX() , triangle->getY() - triangle->getR() );
            }

            EndPaint(hWnd, &ps);
            break;
        case WM_CLOSE:
            userReply = MessageBox(hWnd, "Are you sure you want to get out?",
                                   "", MB_YESNO | MB_ICONQUESTION);
            if (IDYES == userReply)
                DestroyWindow(hWnd);
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }
    return 0;
}
//////////////////////////////////////////////////////////////////////