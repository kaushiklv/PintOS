#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"
#include <debug.h>

void
hello (void)
{
  printf("Hello Pintos! :) How are you??\n");
}
