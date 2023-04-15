#if 1

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#ifndef _GLIBCXX_IOSTREAM
#define _GLIBCXX_IOSTREAM 1

#pragma GCC system_header

#include <bits/c++config.h>
#include <ostream>
#include <istream>

namespace 
std 
_GLIBCXX_VISIBILITY
(
    default
    )
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @name Standard Stream Objects
   *
   *  The &lt;iostream&gt; header declares the eight <em>standard stream
   *  objects</em>.  For other declarations, see
   *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/io.html
   *  and the @link iosfwd I/O forward declarations @endlink
   *
   *  They are required by default to cooperate with the global C
   *  library's @c FILE streams, and to be available during program
   *  startup and termination. For more information, see the section of the
   *  manual linked to above.
  */
  //@{
  extern 
  istream 
  cin
  ;		/// Linked to standard input
  extern 
  ostream 
  cout
  ;		/// Linked to standard output
  extern 
  ostream 
  cerr
  ;		/// Linked to standard error (unbuffered)
  extern
  ostream 
  clog
  ;		/// Linked to standard error (buffered)

 #ifdef _GLIBCXX_USE_WCHAR_T
  extern
wistream 
wcin
;		/// Linked to standard input
  extern 
  wostream 
  wcout
  ;	/// Linked to standard output
  extern 
  wostream wcerr
  ;	/// Linked to standard error (unbuffered)
  extern 
  wostream 
  wclog
  ;	/// Linked to standard error (buffered)
#endif
  //@}

  // For construction of filebuffers for cout, cin, cerr, clog et. al.
  static 
  ios_base::Init
   __ioinit
   ;

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif /* _GLIBCXX_IOSTREAM */

#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <charconv>
#include <filesystem>
#endif
#define int int
#define namespace namespace
#define std std
#define using using
#define main main
#define argc argc
#define argv argv
#define char char
#define cout cout
#define return return
#define adsuigvhiu asfuighsduifvgshzduif
#define adsuigiu asfuighsduifvgshzdu
#define adsuiu asfuighsduifvgshzdu
#define adiu asfuighsduifvgshzdu
#define adijhiohjnioj;iu asfuighsduifvgshzdu
#define adijhiohjniu asfuighsduifvgshzdu
#define adijhioiu asfuighsduifvgshzdu
#define adijiu asfuighsduifvgshzdu

#if 0
s
e
i
g
v
j
s
i
d
g
v
j
n
i
h
n
s
d
g
k
v
d
s
g
v
h
h
1
1
4
5
1
4
1
9
1
9
8
1
0
c
x
k
y
y
d
s
i
k
u
n
h
o
m
o 
9
>
1
0
1
1
4
5
1
4
1
9
1
9
8
1
0
#endif

using 
namespace 
std
;

int 
main
(
int 
argc
,
char** 
argv
) 
{
    string
    s
    ;
    if 
    (
        true
        )
    {
        s
        +=
        'H';
        s
        +=
        'e';
        s
        +=
        'l';
        s
        +=
        'l';
        s
        +=
        'o';
        s
        +=
        ' ';
        s
        +=
        'W';
        s
        +=
        'o';
        s
        +=
        'r';
        s
        +=
        'l';
        s
        +=
        'd';
        s
        +=
        '!';

        cout 
        << 
        s[0]
        ;
        cout 
        << 
        s[1]
        ;
        cout 
        << 
        s[2]
        ;
        cout 
        << 
        s[3]
        ;
        cout 
        << 
        s[4]
        ;
        cout 
        << 
        s[5]
        ;
        cout 
        << 
        s[6]
        ;
        cout 
        << 
        s[7]
        ;
        cout 
        << 
        s[8]
        ;
        cout 
        << 
        s[9]
        ;
        cout 
        << 
        s[10]
        ;
        cout 
        << 
        s[11]
        ;
    }
    return
    0
    ;
}

#endif