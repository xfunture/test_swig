%module example
%include typemaps.i
%apply int &INOUT {int &};
%apply int &INOUT {int *};
%{
#define SWIG_FILE_WITH_INIT
#include "example.h"
%}

%include "std_string.i"
%include "std_iostream.i"
%include "example.h"

