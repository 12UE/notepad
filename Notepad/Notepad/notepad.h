#pragma once

#define __thiscall __cdecl // Test compile in C mode
#define __usercall

HGLOBAL sub_1001929();
LONG __thiscall sub_100195D(void *self);
BOOL __stdcall sub_10019E0(int nWidth, int a2);
int __stdcall sub_1001A28(HWND hDlg, int, HWND hWnd, int); // idb
LRESULT __stdcall sub_1001B99(int a1);
HWND __stdcall sub_1001C42(int a1);
void __stdcall pfnWinEventProc(HWINEVENTHOOK hWinEventHook, DWORD event, HWND hwnd, LONG idObject, LONG idChild, DWORD idEventThread, DWORD dwmsEventTime); // idb
const WCHAR *__stdcall sub_1001D2B(LPCWSTR lpsz);
DWORD __stdcall sub_1001D73(HWND hWndNewOwner);
int __stdcall sub_1001F02(WCHAR *a1, WCHAR *a2, WCHAR *a3);
int __stdcall sub_1001F70(HWND hWnd, LPCWSTR lpCaption, LPCWSTR lpText, LPCWSTR lpString, UINT uType); // idb
DWORD sub_1001FF0();
void *__stdcall sub_100207F(int a1);
INT_PTR __stdcall DialogFunc(HWND, UINT, WPARAM, LPARAM); // idb
int __stdcall sub_100239D(void *lpv, int iSize); // idb
int __stdcall sub_1002452(HWND hDlg, int, HWND hWnd, int); // idb
BOOL __stdcall sub_100270F(int a1);
BOOL __stdcall sub_1002A55(LPCWSTR lpString1);
int __stdcall sub_1002B87(HWND hWnd, __int16, int); // idb
int sub_100337E();
void __stdcall sub_10033DC(HDROP hDrop, HWND hWnd);
LRESULT __stdcall sub_1003429(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM a4);
LSTATUS __stdcall sub_100393A(HKEY hKey, LPCWSTR lpValueName, BYTE Data);
LSTATUS __stdcall sub_100395E(HKEY hKey, LPCWSTR lpValueName, LPCWSTR lpString);
int __stdcall QueryRegistryIntegerValue(HKEY hKey, LPCWSTR lpValueName, int); // idb
LSTATUS __stdcall sub_10039E2(HKEY hKey, LPCWSTR lpValueName, int a3, LPBYTE lpData, DWORD cbData);
LSTATUS sub_1003A39();
LSTATUS sub_1003C92();
// int __usercall sub_1003F4C@<eax>(unsigned __int16 *a1@<eax>, unsigned __int16 *a2@<ecx>);
LPCWSTR __stdcall sub_1003F99(LPWSTR lpString1, LPCWSTR lpString2);
int __stdcall sub_10040BA(HINSTANCE hInstance); // idb
WCHAR *__stdcall sub_100417A(WCHAR *a1);
int __stdcall sub_100419E(unsigned __int16 *a1);
int __stdcall sub_10042F9(int, int nCmdShow); // idb
int __stdcall sub_1004458(LPWSTR lpString1); // idb
int __stdcall Proc(const LOGFONTW *, const TEXTMETRICW *, DWORD, LPARAM); // idb
// BOOL __usercall sub_10044D7@<eax>(HINSTANCE a1@<esi>);
int __stdcall sub_1004565(HINSTANCE hInstance, int, int, int nCmdShow); // idb
void __stdcall sub_1004B65(WCHAR *a1, _BYTE *a2, int a3);
int __stdcall sub_1004B99(HANDLE hFile, UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar); // idb
LRESULT sub_1004C49();
LRESULT sub_1004CAB();
LRESULT __stdcall sub_1004CFF(int a1);
unsigned int __stdcall sub_1004DCD(LPCWSTR lpString);
int __stdcall sub_1004E20(LPCWSTR lpString); // idb
int __stdcall sub_1004EAE(HWND hWnd, LPCWSTR lpFileName, LPCWCH lpWideCharStr); // idb
int __stdcall sub_1005179(LPCWSTR lpString, int); // idb
const WCHAR *__stdcall sub_100580B(LPCWSTR a1, int a2, LPCWSTR lpString, int a4);
unsigned int __stdcall sub_10058B8(wchar_t *String1, LPCWSTR lpString, int a3);
int __stdcall sub_100594C(LPCWSTR lpString); // idb
int __stdcall sub_1005B41(DWORD dwStyle); // idb
BOOL __stdcall proc(HDC, int); // idb
int __stdcall sub_1005E0C(HDC hdc); // idb
int sub_1005E6D();
BOOL sub_1005F3C();
int __stdcall sub_1005F63(HWND hDlg, int, HWND hWnd, int); // idb
int *__stdcall sub_1006091(wchar_t *a1);
int sub_1006428();
int sub_10064F3();
INT_PTR __stdcall sub_10065CB(HWND, UINT, WPARAM, LPARAM); // idb
int __stdcall sub_1006657(HDC hdc, int y); // idb
int __stdcall sub_1006773(HDC); // idb
int __stdcall sub_1006DF7(int a1);
int __stdcall sub_1006E4B(int a1);
LRESULT __stdcall sub_1006F10(int a1);
int __stdcall sub_1007059(int a1, int a2);
BOOL __stdcall sub_10070B1(void *lpv, int iSize);
int sub_10070D4();
// BOOL __usercall sub_1007147@<eax>(BOOL result@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5@<ebp>, int a6@<edi>, int a7@<esi>);
int __stdcall sub_100725F(LPBYTE lpData); // idb
int __stdcall sub_10072C3(int a1, int a2, int a3, int a4);
unsigned int sub_10075DD();
int __cdecl UserMathErrorFunction();
