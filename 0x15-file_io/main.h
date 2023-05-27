#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fctnl.h>
#include <unistd.h>

ssize_t r_text_file(const char file_N, size_t letter);
int creat_file(const char *file_N, char *t_content);
int app_text_to_file(const char *file_N, char *t_content);

#endif
