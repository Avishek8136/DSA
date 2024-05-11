#include<windows.h>
int _stdcall WinMain(HINSTANCE i,HINSTANCE j, LPSTR k, int l)
{
    HWND h;
    h=CreateWindow("BUTTON","PRESS ME TO GET YOUR COMPUTER HACKED",WS_OVERLAPPEDWINDOW,10,10,150,100,0,0,i,0);
    ShowWindow(h,l);
    MessageBox(0,"HI I am Avishek Rauniyar","My first visual  c++ code",0);
    return 0;
}