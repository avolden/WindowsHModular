/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Copyright (c) Arvid Gerstmann. All rights reserved.
 */
#ifndef _WINDOWS_
#ifndef WINDOWS_SHELL_H
#define WINDOWS_SHELL_H

/* Disable all warnings */
#if defined(_MSC_VER)
    #pragma warning(push, 0)
#endif

#ifndef WINDOWS_BASE_H
#include "windows_base.h"
#endif
#if defined(__cplusplus)
extern "C" {
#endif

HINSTANCE ShellExecuteA(
        HWND hwnd,
        LPCSTR lpOperation,
        LPCSTR lpFile,
        LPCSTR lpParameters,
        LPCSTR lpDirectory,
        INT nShowCmd);

HINSTANCE ShellExecuteW(
        HWND hwnd,
        LPCWSTR lpOperation,
        LPCWSTR lpFile,
        LPCWSTR lpParameters,
        LPCWSTR lpDirectory,
        INT nShowCmd);
#if defined(__cplusplus)
}
#endif

/* Enable all warnings */
#if defined(_MSC_VER)
    #pragma warning(pop)
#endif

#endif /* WINDOWS_SHELL_H */
#endif /* _WINDOWS_ */