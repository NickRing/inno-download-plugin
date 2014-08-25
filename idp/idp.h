#pragma once

#include <tchar.h>
#include <windows.h>
#include "downloader.h"

extern "C"
{
void idpAddFile(_TCHAR *url, _TCHAR *filename);
void idpAddFileSize(_TCHAR *url, _TCHAR *filename, DWORDLONG size);
void idpAddFileSize32(_TCHAR *url, _TCHAR *filename, DWORD size);
void idpAddFileComp(_TCHAR *url, _TCHAR *filename, _TCHAR *components);
void idpAddFileSizeComp(_TCHAR *url, _TCHAR *filename, DWORDLONG size, _TCHAR *components);
void idpAddFileSizeComp32(_TCHAR *url, _TCHAR *filename, DWORD size, _TCHAR *components);
void idpAddMirror(_TCHAR *url, _TCHAR *mirror);
void idpClearFiles();
int  idpFilesCount();
bool idpFilesDownloaded();
bool idpFileDownloaded(_TCHAR *url);
bool idpGetFileSize(_TCHAR *url, DWORDLONG *size);
bool idpGetFilesSize(DWORDLONG *size);
bool idpGetFileSize32(_TCHAR *url, DWORD *size);
bool idpGetFilesSize32(DWORD *size);
bool idpDownloadFile(_TCHAR *url, _TCHAR *filename);
bool idpDownloadFiles();
bool idpDownloadFilesComp();
bool idpDownloadFilesCompUi();

void idpConnectControl(_TCHAR *name, HWND handle);
void idpAddMessage(_TCHAR *name, _TCHAR *message);
void idpSetInternalOption(_TCHAR *name, _TCHAR *value);
void idpSetComponents(_TCHAR *components);
void idpSetDetailedMode(bool mode);
void idpStartDownload();
void idpStopDownload();
void idpTrace(_TCHAR *text);

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);
}

void downloadFinished(Downloader *d, bool res);
