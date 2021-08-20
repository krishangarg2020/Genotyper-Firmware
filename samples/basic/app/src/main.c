/* Copyright (C) 2021 by Technoculture Research */

#include <device.h>
#include <sys/__assert.h>
#include <sys/printk.h>
#include <zephyr.h>

int main() {
  static int16_t i = 0;
  printk("%d\n", i);

  /* const device *dev = DEVICE_DT_GET(0); */
  return 0;
}
