
#ifndef YTMYLIB_H
#define YTMYLIB_H

#define LOGGER_IMPLEMENTATION
#include "logging.h"

#define YT_WHILE               while(YT_CheckClosed())
#define YT_LOOP                YT_MainLoop();
#define YT_QUIT                YT_QuitProgram();
#define YT_CREATE_WINDOW(...)  if(YT_CreateWindow(__VA_ARGS__))

int YT_CreateWindow(int w, int h, const char* title);
void YT_MainLoop(void);
void YT_QuitProgram(void);
int YT_CheckClosed(void);

#endif // YTMYLIB_H
