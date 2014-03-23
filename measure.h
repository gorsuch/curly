#ifndef MEASURE_H
#define MEASURE_H

struct measurement {
  unsigned int t;
  char * check_id;
  char * url;
  int exit_status;
  long http_status;
  double namelookup_time;
  double total_time;
  double connect_time;
  double starttransfer_time;
};

struct measurement * measure(char *check_id, char *url);
void free_measurement(struct measurement ** m);
#endif