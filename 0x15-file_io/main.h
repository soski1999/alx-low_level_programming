#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stas.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <unistd.h>
size_t read_textfile(const char *filename, size_t letters);
#endif
