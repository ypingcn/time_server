#ifndef TSP_UTILITY
#define TSP_UTILITY

#include <fcntl.h>
#include <string>
#include <sys/stat.h>
#include <unistd.h>

using std::string;

// remove in the future,attention please!

int tsp_util_file_exist(const char *path);
off_t tsp_util_file_size(const char *path);
int tsp_util_file_last_modify(const char *path, string &res);
int tsp_util_gmt(string &res);
void *tsp_util_malloc(size_t size);
void tsp_util_free(void *p);

// recommand!

class TSPUtilTime {
public:
  static int tostring(time_t t, string &res);
  static int now(string &res);
};

class TSPUtilFile {
public:
  static int exist(const char *path);
  static int size(const char *path, int &size);
  static int last_modify(const char *path, string &res);
  static int last_access(const char *path, string &res);
  static int last_change(const char *path, string &res);
};

class TSPUtilMemory {
public:
  static void free(void *p);
  static void *malloc(size_t size);
};

#endif
