#pragma once
#include "memz.h"

#define PAYLOADHOST(name) DWORD (WINAPI name)(LPVOID parameter)

#define PAYLOADFUNCTIONDEFAULT(name) int name (int times, int runtime)
#define PAYLOADFUNCTIONVISUAL(name) int name (int times, int runtime, HWND hwnd, HDC hdc, LPRECT rekt, int w, int h)
#define PAYLOADHEAD

typedef struct {
	LPTHREAD_START_ROUTINE payloadHost;
	LPVOID payloadFunction;
	int startDelay;
	int delaytime, delay, runtime, times;
} PAYLOAD;

extern PAYLOAD payloads[];
extern const size_t nPayloads;