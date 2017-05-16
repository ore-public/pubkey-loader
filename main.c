#include <stdbool.h>
#include <stdio.h>
#include <syslog.h>

int main(void) {
  openlog("pubkey-loader", LOG_PID, LOG_USER);
  syslog(LOG_NOTICE, "test");
  closelog();

  return 0;
}