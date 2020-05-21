#pragma once

struct IUnknown;
#define NOMINMAX
#include <Windows.h>

//Function Pointer Typedefs
typedef BOOL(WINAPI* ClientToScreen_FUNC)(HWND hWnd, LPPOINT lpPoint);
typedef BOOL(WINAPI* ScreenToClient_FUNC)(HWND hWnd, LPPOINT lpPoint);
typedef int(WINAPI* MapWindowPoints_FUNC)(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints);
typedef HWND(WINAPI* CreateWindowExA_FUNC)(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
typedef HWND(WINAPI* CreateWindowExW_FUNC)(DWORD, LPCWSTR, LPCWSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
typedef BOOL(WINAPI* ShowWindow_FUNC)(HWND hWnd, int nCmdShow);
typedef BOOL(WINAPI* GetClientRect_FUNC)(HWND, LPRECT);
typedef BOOL(WINAPI* GetWindowPlacement_FUNC)(HWND, WINDOWPLACEMENT*);
typedef BOOL(WINAPI* GetWindowRect_FUNC)(HWND, LPRECT);
typedef BOOL(WINAPI* MoveWindow_FUNC)(HWND, int, int, int, int, BOOL);
typedef ATOM(WINAPI* RegisterClassA_FUNC)(CONST WNDCLASSA* lpWndClass);
typedef ATOM(WINAPI* RegisterClassW_FUNC)(CONST WNDCLASSW* lpWndClass);
typedef ATOM(WINAPI* RegisterClassExA_FUNC)(CONST WNDCLASSEXA* _arg1);
typedef ATOM(WINAPI* RegisterClassExW_FUNC)(CONST WNDCLASSEXW* _arg1);
typedef BOOL(WINAPI* UnregisterClassA_FUNC)(LPCSTR lpClassName, HINSTANCE hInstance);
typedef BOOL(WINAPI* UnregisterClassW_FUNC)(LPCWSTR lpClassName, HINSTANCE hInstance); 
typedef DWORD(WINAPI* GetClassLongA_FUNC)(HWND hWnd, int nIndex);
typedef DWORD(WINAPI* GetClassLongW_FUNC)(HWND hWnd, int nIndex);
typedef DWORD(WINAPI* SetClassLongA_FUNC)(HWND hWnd, int nIndex, LONG dwNewLong);
typedef DWORD(WINAPI* SetClassLongW_FUNC)(HWND hWnd, int nIndex, LONG dwNewLong);
typedef ULONG_PTR(WINAPI* GetClassLongPtrA_FUNC)(HWND hWnd, int nIndex);
typedef ULONG_PTR(WINAPI* GetClassLongPtrW_FUNC)(HWND hWnd, int nIndex);
typedef ULONG_PTR(WINAPI* SetClassLongPtrA_FUNC)(HWND hWnd, int nIndex, LONG_PTR dwNewLong);
typedef ULONG_PTR(WINAPI* SetClassLongPtrW_FUNC)(HWND hWnd, int nIndex, LONG_PTR dwNewLong);
typedef LONG(WINAPI* GetWindowLongA_FUNC)(HWND hWnd, int nIndex);
typedef LONG(WINAPI* GetWindowLongW_FUNC)(HWND hWnd, int nIndex);
typedef LONG_PTR(WINAPI* GetWindowLongPtrA_FUNC)(HWND hWnd, int nIndex);
typedef LONG_PTR(WINAPI* GetWindowLongPtrW_FUNC)(HWND hWnd, int nIndex);
typedef LONG(WINAPI* SetWindowLongA_FUNC)(HWND, int, LONG);
typedef LONG(WINAPI* SetWindowLongW_FUNC)(HWND, int, LONG);
typedef LONG_PTR(WINAPI* SetWindowLongPtrA_FUNC)(HWND, int, LONG_PTR);
typedef LONG_PTR(WINAPI* SetWindowLongPtrW_FUNC)(HWND, int, LONG_PTR);
typedef BOOL(WINAPI* SetWindowPlacement_FUNC)(HWND hWnd, const WINDOWPLACEMENT*);
typedef BOOL(WINAPI* SetWindowPos_FUNC)(HWND, HWND, int, int, int, int, UINT);
typedef BOOL(WINAPI* GetCursorPos_FUNC)(LPPOINT);
typedef BOOL(WINAPI* SetCursorPos_FUNC)(int, int);
typedef HDC(WINAPI* BeginPaint_FUNC)(HWND, LPPAINTSTRUCT);
typedef BOOL(WINAPI* EndPaint_FUNC)(HWND, const PAINTSTRUCT*);
typedef HDC(WINAPI* GetDC_FUNC)(HWND);
typedef BOOL(WINAPI* InvalidateRect_FUNC)(HWND, LPCRECT, BOOL);
typedef int(WINAPI* ReleaseDC_FUNC)(HWND, HDC);
typedef BOOL(WINAPI* ValidateRect_FUNC)(HWND, LPCRECT);
typedef HHOOK(WINAPI* SetWindowsHookA_FUNC)(int nFilterType, HOOKPROC pfnFilterProc);
typedef HHOOK(WINAPI* SetWindowsHookW_FUNC)(int nFilterType, HOOKPROC pfnFilterProc);
typedef BOOL(WINAPI* UnhookWindowsHook_FUNC)(int nCode, HOOKPROC pfnFilterProc);
typedef HHOOK(WINAPI* SetWindowsHookExA_FUNC)(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId);
typedef HHOOK(WINAPI* SetWindowsHookExW_FUNC)(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId);
typedef BOOL(WINAPI* UnhookWindowsHookEx_FUNC)(HHOOK hhk);
typedef LRESULT(WINAPI* CallNextHookEx_FUNC)(HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam);
typedef HWINEVENTHOOK(WINAPI* SetWinEventHook_FUNC)(DWORD eventMin, DWORD eventMax, HMODULE hmodWinEventProc, WINEVENTPROC pfnWinEventProc, DWORD idProcess, DWORD idThread, DWORD dwFlags);
typedef BOOL(WINAPI* IsWinEventHookInstalled_FUNC)(DWORD event);
typedef BOOL(WINAPI* UnhookWinEvent_FUNC)(HWINEVENTHOOK hWinEventHook);

/*
typedef BOOL(WINAPI* BitBlt_FUNC)(HDC, int, int, int, int, HDC, int, int, DWORD);
typedef int(WINAPI* StretchDIBits_FUNC)(HDC hdc, int xDest, int yDest, int DestWidth, int DestHeight, int xSrc, int ySrc, int SrcWidth, int SrcHeight, const void* lpBits, const BITMAPINFO* lpbmi, UINT iUsage, DWORD rop);
typedef int(WINAPI* SetDIBits_FUNC)(HDC hdc, HBITMAP hbm, UINT start, UINT cLines, CONST VOID* lpBits, CONST BITMAPINFO *bitmapInfo, UINT ColorUse);
typedef BOOL(WINAPI* StretchBlt_FUNC)(HDC hdcDest, int xDest, int yDest, int wDest, int hDest, HDC hdcSrc, int xSrc, int ySrc, int wSrc, int hSrc, DWORD rop);
typedef BOOL(WINAPI* TextOutA_FUNC)(HDC hdc, int x, int y, LPCSTR lpString, int c);
typedef BOOL(WINAPI* TextOutW_FUNC)(HDC hdc, int x, int y, LPCWSTR lpString, int c);
typedef int(WINAPI* GetClipBox_FUNC)(HDC, LPRECT);
typedef BOOL(WINAPI* Rectangle_FUNC)(HDC, int, int, int, int);
typedef BOOL(WINAPI* RoundRect_FUNC)(HDC, int, int, int, int, int, int);
*/

//Import Backups (Declarations)
extern ClientToScreen_FUNC ClientToScreen_OLD;
extern ScreenToClient_FUNC ScreenToClient_OLD;
extern MapWindowPoints_FUNC MapWindowPoints_OLD;
extern CreateWindowExA_FUNC CreateWindowExA_OLD;
extern CreateWindowExW_FUNC CreateWindowExW_OLD;
extern ShowWindow_FUNC ShowWindow_OLD;
extern GetClientRect_FUNC GetClientRect_OLD;
extern GetWindowPlacement_FUNC GetWindowPlacement_OLD;
extern GetWindowRect_FUNC GetWindowRect_OLD;
extern MoveWindow_FUNC MoveWindow_OLD;
extern RegisterClassA_FUNC RegisterClassA_OLD;
extern RegisterClassW_FUNC RegisterClassW_OLD;
extern RegisterClassExA_FUNC RegisterClassExA_OLD;
extern RegisterClassExW_FUNC RegisterClassExW_OLD;
extern UnregisterClassA_FUNC UnregisterClassA_OLD;
extern UnregisterClassW_FUNC UnregisterClassW_OLD;
extern GetClassLongA_FUNC GetClassLongA_OLD;
extern GetClassLongW_FUNC GetClassLongW_OLD;
extern SetClassLongA_FUNC SetClassLongA_OLD;
extern SetClassLongW_FUNC SetClassLongW_OLD;
extern GetClassLongPtrA_FUNC GetClassLongPtrA_OLD;
extern GetClassLongPtrW_FUNC GetClassLongPtrW_OLD;
extern SetClassLongPtrA_FUNC SetClassLongPtrA_OLD;
extern SetClassLongPtrW_FUNC SetClassLongPtrW_OLD;
extern GetWindowLongA_FUNC GetWindowLongA_OLD;
extern GetWindowLongW_FUNC GetWindowLongW_OLD;
extern GetWindowLongPtrA_FUNC GetWindowLongPtrA_OLD;
extern GetWindowLongPtrW_FUNC GetWindowLongPtrW_OLD;
extern SetWindowLongA_FUNC SetWindowLongA_OLD;
extern SetWindowLongW_FUNC SetWindowLongW_OLD;
extern SetWindowLongPtrA_FUNC SetWindowLongPtrA_OLD;
extern SetWindowLongPtrW_FUNC SetWindowLongPtrW_OLD;
extern SetWindowPlacement_FUNC SetWindowPlacement_OLD;
extern SetWindowPos_FUNC SetWindowPos_OLD;
extern GetCursorPos_FUNC GetCursorPos_OLD;
extern SetCursorPos_FUNC SetCursorPos_OLD;
extern BeginPaint_FUNC BeginPaint_OLD;
extern EndPaint_FUNC EndPaint_OLD;
extern GetDC_FUNC GetDC_OLD;
extern InvalidateRect_FUNC InvalidateRect_OLD;
extern ReleaseDC_FUNC ReleaseDC_OLD;
extern ValidateRect_FUNC ValidateRect_OLD;
extern SetWindowsHookA_FUNC SetWindowsHookA_OLD;
extern SetWindowsHookW_FUNC SetWindowsHookW_OLD;
extern UnhookWindowsHook_FUNC UnhookWindowsHook_OLD;
extern SetWindowsHookExA_FUNC SetWindowsHookExA_OLD;
extern SetWindowsHookExW_FUNC SetWindowsHookExW_OLD;
extern UnhookWindowsHookEx_FUNC UnhookWindowsHookEx_OLD;
extern CallNextHookEx_FUNC CallNextHookEx_OLD;
extern SetWinEventHook_FUNC SetWinEventHook_OLD;
extern IsWinEventHookInstalled_FUNC IsWinEventHookInstalled_OLD;
extern UnhookWinEvent_FUNC UnhookWinEvent_OLD;

/*
extern BitBlt_FUNC BitBlt_OLD;
extern StretchDIBits_FUNC StretchDIBits_OLD;
extern SetDIBits_FUNC SetDIBits_OLD;
extern StretchBlt_FUNC StretchBlt_OLD; 
extern TextOutA_FUNC TextOutA_OLD;
extern TextOutW_FUNC TextOutW_OLD;
extern GetClipBox_FUNC GetClipBox_OLD;
extern Rectangle_FUNC Rectangle_OLD;
extern RoundRect_FUNC RoundRect_OLD;
*/

//Replacement Functions (Declarations)
BOOL WINAPI ClientToScreen_Replacement(HWND hWnd, LPPOINT lpPoint);
BOOL WINAPI ScreenToClient_Replacement(HWND hWnd, LPPOINT lpPoint);
int WINAPI MapWindowPoints_Replacement(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints);
HWND WINAPI CreateWindowExA_Replacement(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
HWND WINAPI CreateWindowExW_Replacement(DWORD, LPCWSTR, LPCWSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
BOOL WINAPI ShowWindow_Replacement(HWND hWnd, int nCmdShow);
BOOL WINAPI GetClientRect_Replacement(HWND, LPRECT);
BOOL WINAPI GetWindowPlacement_Replacement(HWND, WINDOWPLACEMENT*);
BOOL WINAPI GetWindowRect_Replacement(HWND, LPRECT);
BOOL WINAPI MoveWindow_Replacement(HWND, int, int, int, int, BOOL);
ATOM WINAPI RegisterClassA_Replacement(CONST WNDCLASSA* lpWndClass);
ATOM WINAPI RegisterClassW_Replacement(CONST WNDCLASSW* lpWndClass); 
ATOM WINAPI RegisterClassExA_Replacement(CONST WNDCLASSEXA* _arg1);
ATOM WINAPI RegisterClassExW_Replacement(CONST WNDCLASSEXW* _arg1);
BOOL WINAPI UnregisterClassA_Replacement(LPCSTR lpClassName, HINSTANCE hInstance);
BOOL WINAPI UnregisterClassW_Replacement(LPCWSTR lpClassName, HINSTANCE hInstance);
DWORD WINAPI GetClassLongA_Replacement(HWND hWnd, int nIndex);
DWORD WINAPI GetClassLongW_Replacement(HWND hWnd, int nIndex);
DWORD WINAPI SetClassLongA_Replacement(HWND hWnd, int nIndex, LONG dwNewLong);
DWORD WINAPI SetClassLongW_Replacement(HWND hWnd, int nIndex, LONG dwNewLong);
ULONG_PTR WINAPI GetClassLongPtrA_Replacement(HWND hWnd, int nIndex);
ULONG_PTR WINAPI GetClassLongPtrW_Replacement(HWND hWnd, int nIndex);
ULONG_PTR WINAPI SetClassLongPtrA_Replacement(HWND hWnd, int nIndex, LONG_PTR dwNewLong);
ULONG_PTR WINAPI SetClassLongPtrW_Replacement(HWND hWnd, int nIndex, LONG_PTR dwNewLong);
LONG WINAPI GetWindowLongA_Replacement(HWND hWnd, int nIndex);
LONG WINAPI GetWindowLongW_Replacement(HWND hWnd, int nIndex);
LONG_PTR WINAPI GetWindowLongPtrA_Replacement(HWND hWnd, int nIndex);
LONG_PTR WINAPI GetWindowLongPtrW_Replacement(HWND hWnd, int nIndex);
LONG WINAPI SetWindowLongA_Replacement(HWND, int, LONG);
LONG WINAPI SetWindowLongW_Replacement(HWND, int, LONG);
LONG_PTR WINAPI SetWindowLongPtrA_Replacement(HWND, int, LONG_PTR);
LONG_PTR WINAPI SetWindowLongPtrW_Replacement(HWND, int, LONG_PTR);
BOOL WINAPI SetWindowPlacement_Replacement(HWND hWnd, const WINDOWPLACEMENT*);
BOOL WINAPI SetWindowPos_Replacement(HWND, HWND, int, int, int, int, UINT);
BOOL WINAPI GetCursorPos_Replacement(LPPOINT);
BOOL WINAPI SetCursorPos_Replacement(int, int);
HDC WINAPI BeginPaint_Replacement(HWND, LPPAINTSTRUCT);
BOOL WINAPI EndPaint_Replacement(HWND, const PAINTSTRUCT*);
HDC WINAPI GetDC_Replacement(HWND);
BOOL WINAPI InvalidateRect_Replacement(HWND, LPCRECT, BOOL);
int WINAPI ReleaseDC_Replacement(HWND, HDC);
BOOL WINAPI ValidateRect_Replacement(HWND, LPCRECT);
HHOOK WINAPI SetWindowsHookA_Replacement(int nFilterType, HOOKPROC pfnFilterProc);
HHOOK WINAPI SetWindowsHookW_Replacement(int nFilterType, HOOKPROC pfnFilterProc);
BOOL WINAPI UnhookWindowsHook_Replacement(int nCode, HOOKPROC pfnFilterProc);
HHOOK WINAPI SetWindowsHookExA_Replacement(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId);
HHOOK WINAPI SetWindowsHookExW_Replacement(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId);
BOOL WINAPI UnhookWindowsHookEx_Replacement(HHOOK hhk);
LRESULT WINAPI CallNextHookEx_Replacement(HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam);
HWINEVENTHOOK WINAPI SetWinEventHook_Replacement(DWORD eventMin, DWORD eventMax, HMODULE hmodWinEventProc, WINEVENTPROC pfnWinEventProc, DWORD idProcess, DWORD idThread, DWORD dwFlags);
BOOL WINAPI IsWinEventHookInstalled_Replacement(DWORD event);
BOOL WINAPI UnhookWinEvent_Replacement(HWINEVENTHOOK hWinEventHook);

/*
BOOL WINAPI BitBlt_Replacement(HDC, int, int, int, int, HDC, int, int, DWORD);
int WINAPI StretchDIBits_Replacement(HDC hdc, int xDest, int yDest, int DestWidth, int DestHeight, int xSrc, int ySrc, int SrcWidth, int SrcHeight, const void* lpBits, const BITMAPINFO* lpbmi, UINT iUsage, DWORD rop);
int WINAPI SetDIBits_Replacement(HDC hdc, HBITMAP hbm, UINT start, UINT cLines, CONST VOID* lpBits, CONST BITMAPINFO* bitmapInfo, UINT ColorUse);
BOOL WINAPI StretchBlt_Replacement(HDC hdcDest, int xDest, int yDest, int wDest, int hDest, HDC hdcSrc, int xSrc, int ySrc, int wSrc, int hSrc, DWORD rop);
BOOL WINAPI TextOutA_Replacement(HDC hdc, int x, int y, LPCSTR lpString, int c);
BOOL WINAPI TextOutW_Replacement(HDC hdc, int x, int y, LPCWSTR lpString, int c);
int WINAPI GetClipBox_Replacement(HDC, LPRECT);
BOOL WINAPI Rectangle_Replacement(HDC, int, int, int, int);
BOOL WINAPI RoundRect_Replacement(HDC, int, int, int, int, int, int);
*/

void ReplaceImports();
