//
// Created by altai on 02.03.2021.
//

#ifndef LABJOB1_CWND_H
#define LABJOB1_CWND_H

#include <windows.h>
#define boolean bool

class CWnd {
public:
    CWnd(LPCTSTR windowName, HINSTANCE hInst, int cmdShow,
         LRESULT (WINAPI *pWndProc)(HWND,UINT,WPARAM,LPARAM),
         LPCTSTR menuName = NULL,
         int x = CW_USEDEFAULT, int y = 0,
         int width = CW_USEDEFAULT, int height = 0,
         UINT classStyle = CS_HREDRAW | CS_VREDRAW,
         DWORD windowStyle = WS_OVERLAPPEDWINDOW,
         HWND hParent = NULL);
    HWND GetHWnd() { return hWnd; }
protected:
    HWND hWnd;
    WNDCLASSEX wc;
};

#endif //LABJOB1_CWND_H
