#include<windows.h>
long _stdcall myfunc(HWND,UINT,UINT,long);
WNDCLASS a;
int _stdcall WinMain(HINSTANCE i,HINSTANCE j,LPSTR k,int l)
{
    HWND h;
    MSG m;
    a.hInstance =i;
    a.lpszClassName="my";
    a.lpfnWndProc=myfunc;
    a.hbrBackground=GetStockObject(WHITE_BRUSH);
    h=CreateWindow("my","title",WS_OVERLAPPEDWINDOW,20,30,300,200,0,0,i,0);
    ShowWindow(h,1);
    while(GetMessage(&m,0,0,0))
        DispatchMessage(&m);
    return 0;
}
long _stdcall myfunc(HWND w, UINT x,UINT y, long z)
{
    switch(x)
    {
        case WM_DESTROY :
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(w,x,y,z);
    }
    return 0L;
}