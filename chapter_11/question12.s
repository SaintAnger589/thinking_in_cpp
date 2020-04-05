   1              		.file	"question12.cpp"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata
   7              	_ZStL19piecewise_construct:
   8 0000 00       		.zero	1
   9              		.local	_ZStL8__ioinit
  10              		.comm	_ZStL8__ioinit,1,1
  11              	.LC0:
  12 0001 496E7369 		.string	"Inside function()\n"
  12      64652066 
  12      756E6374 
  12      696F6E28 
  12      290A00
  13              		.text
  14              		.globl	_Z4funcd
  16              	_Z4funcd:
  17              	.LFB1522:
  18              		.file 1 "question12.cpp"
   1:question12.cpp **** #include <iostream>
   2:question12.cpp **** 
   3:question12.cpp **** using namespace std;
   4:question12.cpp **** 
   5:question12.cpp **** void func(double d){
  19              		.loc 1 5 20
  20              		.cfi_startproc
  21 0000 F30F1EFA 		endbr64
  22 0004 55       		pushq	%rbp
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 6, -16
  25 0005 4889E5   		movq	%rsp, %rbp
  26              		.cfi_def_cfa_register 6
  27 0008 4883EC10 		subq	$16, %rsp
  28 000c F20F1145 		movsd	%xmm0, -8(%rbp)
  28      F8
   6:question12.cpp ****   cout<<"Inside function()\n";
  29              		.loc 1 6 9
  30 0011 488D3500 		leaq	.LC0(%rip), %rsi
  30      000000
  31 0018 488D3D00 		leaq	_ZSt4cout(%rip), %rdi
  31      000000
  32 001f E8000000 		call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
  32      00
   7:question12.cpp **** }
  33              		.loc 1 7 1
  34 0024 90       		nop
  35 0025 C9       		leave
  36              		.cfi_def_cfa 7, 8
  37 0026 C3       		ret
  38              		.cfi_endproc
  39              	.LFE1522:
  41              		.globl	main
  43              	main:
  44              	.LFB1523:
   8:question12.cpp **** 
   9:question12.cpp **** 
  10:question12.cpp **** int main(){
  45              		.loc 1 10 11
  46              		.cfi_startproc
  47 0027 F30F1EFA 		endbr64
  48 002b 55       		pushq	%rbp
  49              		.cfi_def_cfa_offset 16
  50              		.cfi_offset 6, -16
  51 002c 4889E5   		movq	%rsp, %rbp
  52              		.cfi_def_cfa_register 6
  11:question12.cpp ****   func(345);
  53              		.loc 1 11 7
  54 002f 488B0500 		movq	.LC1(%rip), %rax
  54      000000
  55 0036 66480F6E 		movq	%rax, %xmm0
  55      C0
  56 003b E8000000 		call	_Z4funcd
  56      00
  12:question12.cpp **** }
  57              		.loc 1 12 1
  58 0040 B8000000 		movl	$0, %eax
  58      00
  59 0045 5D       		popq	%rbp
  60              		.cfi_def_cfa 7, 8
  61 0046 C3       		ret
  62              		.cfi_endproc
  63              	.LFE1523:
  66              	_Z41__static_initialization_and_destruction_0ii:
  67              	.LFB2007:
  68              		.loc 1 12 1
  69              		.cfi_startproc
  70 0047 F30F1EFA 		endbr64
  71 004b 55       		pushq	%rbp
  72              		.cfi_def_cfa_offset 16
  73              		.cfi_offset 6, -16
  74 004c 4889E5   		movq	%rsp, %rbp
  75              		.cfi_def_cfa_register 6
  76 004f 4883EC10 		subq	$16, %rsp
  77 0053 897DFC   		movl	%edi, -4(%rbp)
  78 0056 8975F8   		movl	%esi, -8(%rbp)
  79              		.loc 1 12 1
  80 0059 837DFC01 		cmpl	$1, -4(%rbp)
  81 005d 7532     		jne	.L6
  82              		.loc 1 12 1 is_stmt 0 discriminator 1
  83 005f 817DF8FF 		cmpl	$65535, -8(%rbp)
  83      FF0000
  84 0066 7529     		jne	.L6
  85              		.file 2 "/usr/include/c++/9/iostream"
   1:/usr/include/c++/9/iostream **** // Standard iostream objects -*- C++ -*-
   2:/usr/include/c++/9/iostream **** 
   3:/usr/include/c++/9/iostream **** // Copyright (C) 1997-2019 Free Software Foundation, Inc.
   4:/usr/include/c++/9/iostream **** //
   5:/usr/include/c++/9/iostream **** // This file is part of the GNU ISO C++ Library.  This library is free
   6:/usr/include/c++/9/iostream **** // software; you can redistribute it and/or modify it under the
   7:/usr/include/c++/9/iostream **** // terms of the GNU General Public License as published by the
   8:/usr/include/c++/9/iostream **** // Free Software Foundation; either version 3, or (at your option)
   9:/usr/include/c++/9/iostream **** // any later version.
  10:/usr/include/c++/9/iostream **** 
  11:/usr/include/c++/9/iostream **** // This library is distributed in the hope that it will be useful,
  12:/usr/include/c++/9/iostream **** // but WITHOUT ANY WARRANTY; without even the implied warranty of
  13:/usr/include/c++/9/iostream **** // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  14:/usr/include/c++/9/iostream **** // GNU General Public License for more details.
  15:/usr/include/c++/9/iostream **** 
  16:/usr/include/c++/9/iostream **** // Under Section 7 of GPL version 3, you are granted additional
  17:/usr/include/c++/9/iostream **** // permissions described in the GCC Runtime Library Exception, version
  18:/usr/include/c++/9/iostream **** // 3.1, as published by the Free Software Foundation.
  19:/usr/include/c++/9/iostream **** 
  20:/usr/include/c++/9/iostream **** // You should have received a copy of the GNU General Public License and
  21:/usr/include/c++/9/iostream **** // a copy of the GCC Runtime Library Exception along with this program;
  22:/usr/include/c++/9/iostream **** // see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
  23:/usr/include/c++/9/iostream **** // <http://www.gnu.org/licenses/>.
  24:/usr/include/c++/9/iostream **** 
  25:/usr/include/c++/9/iostream **** /** @file include/iostream
  26:/usr/include/c++/9/iostream ****  *  This is a Standard C++ Library header.
  27:/usr/include/c++/9/iostream ****  */
  28:/usr/include/c++/9/iostream **** 
  29:/usr/include/c++/9/iostream **** //
  30:/usr/include/c++/9/iostream **** // ISO C++ 14882: 27.3  Standard iostream objects
  31:/usr/include/c++/9/iostream **** //
  32:/usr/include/c++/9/iostream **** 
  33:/usr/include/c++/9/iostream **** #ifndef _GLIBCXX_IOSTREAM
  34:/usr/include/c++/9/iostream **** #define _GLIBCXX_IOSTREAM 1
  35:/usr/include/c++/9/iostream **** 
  36:/usr/include/c++/9/iostream **** #pragma GCC system_header
  37:/usr/include/c++/9/iostream **** 
  38:/usr/include/c++/9/iostream **** #include <bits/c++config.h>
  39:/usr/include/c++/9/iostream **** #include <ostream>
  40:/usr/include/c++/9/iostream **** #include <istream>
  41:/usr/include/c++/9/iostream **** 
  42:/usr/include/c++/9/iostream **** namespace std _GLIBCXX_VISIBILITY(default)
  43:/usr/include/c++/9/iostream **** {
  44:/usr/include/c++/9/iostream **** _GLIBCXX_BEGIN_NAMESPACE_VERSION
  45:/usr/include/c++/9/iostream **** 
  46:/usr/include/c++/9/iostream ****   /**
  47:/usr/include/c++/9/iostream ****    *  @name Standard Stream Objects
  48:/usr/include/c++/9/iostream ****    *
  49:/usr/include/c++/9/iostream ****    *  The &lt;iostream&gt; header declares the eight <em>standard stream
  50:/usr/include/c++/9/iostream ****    *  objects</em>.  For other declarations, see
  51:/usr/include/c++/9/iostream ****    *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/io.html
  52:/usr/include/c++/9/iostream ****    *  and the @link iosfwd I/O forward declarations @endlink
  53:/usr/include/c++/9/iostream ****    *
  54:/usr/include/c++/9/iostream ****    *  They are required by default to cooperate with the global C
  55:/usr/include/c++/9/iostream ****    *  library's @c FILE streams, and to be available during program
  56:/usr/include/c++/9/iostream ****    *  startup and termination. For more information, see the section of the
  57:/usr/include/c++/9/iostream ****    *  manual linked to above.
  58:/usr/include/c++/9/iostream ****   */
  59:/usr/include/c++/9/iostream ****   //@{
  60:/usr/include/c++/9/iostream ****   extern istream cin;		/// Linked to standard input
  61:/usr/include/c++/9/iostream ****   extern ostream cout;		/// Linked to standard output
  62:/usr/include/c++/9/iostream ****   extern ostream cerr;		/// Linked to standard error (unbuffered)
  63:/usr/include/c++/9/iostream ****   extern ostream clog;		/// Linked to standard error (buffered)
  64:/usr/include/c++/9/iostream **** 
  65:/usr/include/c++/9/iostream **** #ifdef _GLIBCXX_USE_WCHAR_T
  66:/usr/include/c++/9/iostream ****   extern wistream wcin;		/// Linked to standard input
  67:/usr/include/c++/9/iostream ****   extern wostream wcout;	/// Linked to standard output
  68:/usr/include/c++/9/iostream ****   extern wostream wcerr;	/// Linked to standard error (unbuffered)
  69:/usr/include/c++/9/iostream ****   extern wostream wclog;	/// Linked to standard error (buffered)
  70:/usr/include/c++/9/iostream **** #endif
  71:/usr/include/c++/9/iostream ****   //@}
  72:/usr/include/c++/9/iostream **** 
  73:/usr/include/c++/9/iostream ****   // For construction of filebuffers for cout, cin, cerr, clog et. al.
  74:/usr/include/c++/9/iostream ****   static ios_base::Init __ioinit;
  86              		.loc 2 74 25 is_stmt 1
  87 0068 488D3D00 		leaq	_ZStL8__ioinit(%rip), %rdi
  87      000000
  88 006f E8000000 		call	_ZNSt8ios_base4InitC1Ev@PLT
  88      00
  89 0074 488D1500 		leaq	__dso_handle(%rip), %rdx
  89      000000
  90 007b 488D3500 		leaq	_ZStL8__ioinit(%rip), %rsi
  90      000000
  91 0082 488B0500 		movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
  91      000000
  92 0089 4889C7   		movq	%rax, %rdi
  93 008c E8000000 		call	__cxa_atexit@PLT
  93      00
  94              	.L6:
  95              		.loc 1 12 1
  96 0091 90       		nop
  97 0092 C9       		leave
  98              		.cfi_def_cfa 7, 8
  99 0093 C3       		ret
 100              		.cfi_endproc
 101              	.LFE2007:
 104              	_GLOBAL__sub_I__Z4funcd:
 105              	.LFB2008:
 106              		.loc 1 12 1
 107              		.cfi_startproc
 108 0094 F30F1EFA 		endbr64
 109 0098 55       		pushq	%rbp
 110              		.cfi_def_cfa_offset 16
 111              		.cfi_offset 6, -16
 112 0099 4889E5   		movq	%rsp, %rbp
 113              		.cfi_def_cfa_register 6
 114              		.loc 1 12 1
 115 009c BEFFFF00 		movl	$65535, %esi
 115      00
 116 00a1 BF010000 		movl	$1, %edi
 116      00
 117 00a6 E89CFFFF 		call	_Z41__static_initialization_and_destruction_0ii
 117      FF
 118 00ab 5D       		popq	%rbp
 119              		.cfi_def_cfa 7, 8
 120 00ac C3       		ret
 121              		.cfi_endproc
 122              	.LFE2008:
 124              		.section	.init_array,"aw"
 125              		.align 8
 126 0000 00000000 		.quad	_GLOBAL__sub_I__Z4funcd
 126      00000000 
 127              		.section	.rodata
 128 0014 00000000 		.align 8
 129              	.LC1:
 130 0018 00000000 		.long	0
 131 001c 00907540 		.long	1081446400
 132              		.text
 133              	.Letext0:
 134              		.file 3 "/usr/include/c++/9/cwchar"
 135              		.file 4 "/usr/include/c++/9/new"
 136              		.file 5 "/usr/include/c++/9/bits/exception_ptr.h"
 137              		.file 6 "/usr/include/c++/9/type_traits"
 138              		.file 7 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h"
 139              		.file 8 "/usr/include/c++/9/bits/cpp_type_traits.h"
 140              		.file 9 "/usr/include/c++/9/bits/stl_pair.h"
 141              		.file 10 "/usr/include/c++/9/debug/debug.h"
 142              		.file 11 "/usr/include/c++/9/bits/char_traits.h"
 143              		.file 12 "/usr/include/c++/9/cstdint"
 144              		.file 13 "/usr/include/c++/9/clocale"
 145              		.file 14 "/usr/include/c++/9/cstdlib"
 146              		.file 15 "/usr/include/c++/9/cstdio"
 147              		.file 16 "/usr/include/c++/9/bits/basic_string.h"
 148              		.file 17 "/usr/include/c++/9/system_error"
 149              		.file 18 "/usr/include/c++/9/bits/ios_base.h"
 150              		.file 19 "/usr/include/c++/9/cwctype"
 151              		.file 20 "/usr/include/c++/9/iosfwd"
 152              		.file 21 "/usr/include/c++/9/bits/predefined_ops.h"
 153              		.file 22 "/usr/include/c++/9/ext/new_allocator.h"
 154              		.file 23 "/usr/include/c++/9/ext/numeric_traits.h"
 155              		.file 24 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
 156              		.file 25 "<built-in>"
 157              		.file 26 "/usr/include/x86_64-linux-gnu/bits/types/wint_t.h"
 158              		.file 27 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
 159              		.file 28 "/usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h"
 160              		.file 29 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
 161              		.file 30 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
 162              		.file 31 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
 163              		.file 32 "/usr/include/wchar.h"
 164              		.file 33 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h"
 165              		.file 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
 166              		.file 35 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
 167              		.file 36 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
 168              		.file 37 "/usr/include/stdint.h"
 169              		.file 38 "/usr/include/locale.h"
 170              		.file 39 "/usr/include/time.h"
 171              		.file 40 "/usr/include/x86_64-linux-gnu/c++/9/bits/atomic_word.h"
 172              		.file 41 "/usr/include/stdlib.h"
 173              		.file 42 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h"
 174              		.file 43 "/usr/include/stdio.h"
 175              		.file 44 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
 176              		.file 45 "/usr/include/errno.h"
 177              		.file 46 "/usr/include/x86_64-linux-gnu/bits/wctype-wchar.h"
 178              		.file 47 "/usr/include/wctype.h"
 8272              		.section	.note.gnu.property,"a"
 8273              		.align 8
 8274 0000 04000000 		.long	 1f - 0f
 8275 0004 10000000 		.long	 4f - 1f
 8276 0008 05000000 		.long	 5
 8277              	0:
 8278 000c 474E5500 		.string	 "GNU"
 8279              	1:
 8280              		.align 8
 8281 0010 020000C0 		.long	 0xc0000002
 8282 0014 04000000 		.long	 3f - 2f
 8283              	2:
 8284 0018 03000000 		.long	 0x3
 8285              	3:
 8286 001c 00000000 		.align 8
 8287              	4:
