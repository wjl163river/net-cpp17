#pragma once
#include <inttypes.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <vector>
#include <list>
#include <map>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <assert.h>
#include <signal.h>
#include <string.h>
#include <errno.h>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <functional>
#include <algorithm>
#include <memory>
#include <condition_variable>
#include <thread>
#include <sys/syscall.h>
#include <sys/types.h>
#include <signal.h>
#include <string>
#include <iosfwd>    // for ostream forward-declaration
#include <string>
#include <sys/socket.h>
#include <set>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/uio.h>
#include <array>
#include <utility>
#include <limits.h>
#include <stdint.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <stdio.h>
#include <atomic>
#include <stdarg.h>
#include <sys/resource.h>
#include <limits.h>
#include <poll.h>
#include <netdb.h>
#include <sys/wait.h>
#include <any>
#include <arpa/inet.h>
#include <netinet/in.h>

#ifdef __APPLE__
#include <sys/event.h>
#include <sys/un.h>
#endif

#ifdef __linux__
#include <sys/sendfile.h>
#include <sys/epoll.h>
#include <linux/tcp.h>
#include <sys/timerfd.h>
#include <sys/eventfd.h>
#include <endian.h>
#endif
