#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t974;
// System.IO.TextReader
struct TextReader_t1082;
// System.Text.Encoding
struct Encoding_t766;

#include "mscorlib_System_Object.h"

// System.Console
struct  Console_t973  : public Object_t
{
};
struct Console_t973_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t974 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t974 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1082 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t766 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t766 * ___outputEncoding_4;
};
