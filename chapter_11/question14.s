   1              		.file	"question14.cpp"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata
   7              	_ZStL19piecewise_construct:
   8 0000 00       		.zero	1
   9              		.local	_ZStL8__ioinit
  10              		.comm	_ZStL8__ioinit,1,1
  11              		.text
  12              		.globl	_Z4funci
  14              	_Z4funci:
  15              	.LFB1522:
  16              		.file 1 "question14.cpp"
   1:question14.cpp **** #include <iostream>
   2:question14.cpp **** 
   3:question14.cpp **** using namespace std;
   4:question14.cpp **** 
   5:question14.cpp **** 
   6:question14.cpp **** void func(int i){
  17              		.loc 1 6 17
  18              		.cfi_startproc
  19 0000 F30F1EFA 		endbr64
  20 0004 55       		pushq	%rbp
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 6, -16
  23 0005 4889E5   		movq	%rsp, %rbp
  24              		.cfi_def_cfa_register 6
  25 0008 4883EC10 		subq	$16, %rsp
  26 000c 897DFC   		movl	%edi, -4(%rbp)
   7:question14.cpp ****   if (i == 0)
  27              		.loc 1 7 3
  28 000f 837DFC00 		cmpl	$0, -4(%rbp)
  29 0013 7412     		je	.L4
   8:question14.cpp ****     return;
   9:question14.cpp ****   else
  10:question14.cpp ****     func(i--);
  30              		.loc 1 10 9
  31 0015 8B45FC   		movl	-4(%rbp), %eax
  32 0018 8D50FF   		leal	-1(%rax), %edx
  33 001b 8955FC   		movl	%edx, -4(%rbp)
  34 001e 89C7     		movl	%eax, %edi
  35 0020 E8000000 		call	_Z4funci
  35      00
  36 0025 EB01     		jmp	.L1
  37              	.L4:
   8:question14.cpp ****     return;
  38              		.loc 1 8 5
  39 0027 90       		nop
  40              	.L1:
  11:question14.cpp **** }
  41              		.loc 1 11 1
  42 0028 C9       		leave
  43              		.cfi_def_cfa 7, 8
  44 0029 C3       		ret
  45              		.cfi_endproc
  46              	.LFE1522:
  48              		.globl	main
  50              	main:
  51              	.LFB1523:
  12:question14.cpp **** 
  13:question14.cpp **** int main(){
  52              		.loc 1 13 11
  53              		.cfi_startproc
  54 002a F30F1EFA 		endbr64
  55 002e 55       		pushq	%rbp
  56              		.cfi_def_cfa_offset 16
  57              		.cfi_offset 6, -16
  58 002f 4889E5   		movq	%rsp, %rbp
  59              		.cfi_def_cfa_register 6
  14:question14.cpp ****   func(2);
  60              		.loc 1 14 7
  61 0032 BF020000 		movl	$2, %edi
  61      00
  62 0037 E8000000 		call	_Z4funci
  62      00
  15:question14.cpp **** }
  63              		.loc 1 15 1
  64 003c B8000000 		movl	$0, %eax
  64      00
  65 0041 5D       		popq	%rbp
  66              		.cfi_def_cfa 7, 8
  67 0042 C3       		ret
  68              		.cfi_endproc
  69              	.LFE1523:
  72              	_Z41__static_initialization_and_destruction_0ii:
  73              	.LFB2004:
  74              		.loc 1 15 1
  75              		.cfi_startproc
  76 0043 F30F1EFA 		endbr64
  77 0047 55       		pushq	%rbp
  78              		.cfi_def_cfa_offset 16
  79              		.cfi_offset 6, -16
  80 0048 4889E5   		movq	%rsp, %rbp
  81              		.cfi_def_cfa_register 6
  82 004b 4883EC10 		subq	$16, %rsp
  83 004f 897DFC   		movl	%edi, -4(%rbp)
  84 0052 8975F8   		movl	%esi, -8(%rbp)
  85              		.loc 1 15 1
  86 0055 837DFC01 		cmpl	$1, -4(%rbp)
  87 0059 7532     		jne	.L9
  88              		.loc 1 15 1 is_stmt 0 discriminator 1
  89 005b 817DF8FF 		cmpl	$65535, -8(%rbp)
  89      FF0000
  90 0062 7529     		jne	.L9
  91              		.file 2 "/usr/include/c++/9/iostream"
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
  92              		.loc 2 74 25 is_stmt 1
  93 0064 488D3D00 		leaq	_ZStL8__ioinit(%rip), %rdi
  93      000000
  94 006b E8000000 		call	_ZNSt8ios_base4InitC1Ev@PLT
  94      00
  95 0070 488D1500 		leaq	__dso_handle(%rip), %rdx
  95      000000
  96 0077 488D3500 		leaq	_ZStL8__ioinit(%rip), %rsi
  96      000000
  97 007e 488B0500 		movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
  97      000000
  98 0085 4889C7   		movq	%rax, %rdi
  99 0088 E8000000 		call	__cxa_atexit@PLT
  99      00
 100              	.L9:
 101              		.loc 1 15 1
 102 008d 90       		nop
 103 008e C9       		leave
 104              		.cfi_def_cfa 7, 8
 105 008f C3       		ret
 106              		.cfi_endproc
 107              	.LFE2004:
 110              	_GLOBAL__sub_I__Z4funci:
 111              	.LFB2005:
 112              		.loc 1 15 1
 113              		.cfi_startproc
 114 0090 F30F1EFA 		endbr64
 115 0094 55       		pushq	%rbp
 116              		.cfi_def_cfa_offset 16
 117              		.cfi_offset 6, -16
 118 0095 4889E5   		movq	%rsp, %rbp
 119              		.cfi_def_cfa_register 6
 120              		.loc 1 15 1
 121 0098 BEFFFF00 		movl	$65535, %esi
 121      00
 122 009d BF010000 		movl	$1, %edi
 122      00
 123 00a2 E89CFFFF 		call	_Z41__static_initialization_and_destruction_0ii
 123      FF
 124 00a7 5D       		popq	%rbp
 125              		.cfi_def_cfa 7, 8
 126 00a8 C3       		ret
 127              		.cfi_endproc
 128              	.LFE2005:
 130              		.section	.init_array,"aw"
 131              		.align 8
 132 0000 00000000 		.quad	_GLOBAL__sub_I__Z4funci
 132      00000000 
 133              		.text
 134              	.Letext0:
 135              		.file 3 "/usr/include/c++/9/cwchar"
 136              		.file 4 "/usr/include/c++/9/new"
 137              		.file 5 "/usr/include/c++/9/bits/exception_ptr.h"
 138              		.file 6 "/usr/include/c++/9/type_traits"
 139              		.file 7 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h"
 140              		.file 8 "/usr/include/c++/9/bits/cpp_type_traits.h"
 141              		.file 9 "/usr/include/c++/9/bits/stl_pair.h"
 142              		.file 10 "/usr/include/c++/9/debug/debug.h"
 143              		.file 11 "/usr/include/c++/9/bits/char_traits.h"
 144              		.file 12 "/usr/include/c++/9/cstdint"
 145              		.file 13 "/usr/include/c++/9/clocale"
 146              		.file 14 "/usr/include/c++/9/cstdlib"
 147              		.file 15 "/usr/include/c++/9/cstdio"
 148              		.file 16 "/usr/include/c++/9/bits/basic_string.h"
 149              		.file 17 "/usr/include/c++/9/system_error"
 150              		.file 18 "/usr/include/c++/9/bits/ios_base.h"
 151              		.file 19 "/usr/include/c++/9/cwctype"
 152              		.file 20 "/usr/include/c++/9/iosfwd"
 153              		.file 21 "/usr/include/c++/9/bits/predefined_ops.h"
 154              		.file 22 "/usr/include/c++/9/ext/new_allocator.h"
 155              		.file 23 "/usr/include/c++/9/ext/numeric_traits.h"
 156              		.file 24 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
 157              		.file 25 "<built-in>"
 158              		.file 26 "/usr/include/x86_64-linux-gnu/bits/types/wint_t.h"
 159              		.file 27 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
 160              		.file 28 "/usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h"
 161              		.file 29 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
 162              		.file 30 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
 163              		.file 31 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
 164              		.file 32 "/usr/include/wchar.h"
 165              		.file 33 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h"
 166              		.file 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
 167              		.file 35 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
 168              		.file 36 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
 169              		.file 37 "/usr/include/stdint.h"
 170              		.file 38 "/usr/include/locale.h"
 171              		.file 39 "/usr/include/time.h"
 172              		.file 40 "/usr/include/x86_64-linux-gnu/c++/9/bits/atomic_word.h"
 173              		.file 41 "/usr/include/stdlib.h"
 174              		.file 42 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h"
 175              		.file 43 "/usr/include/stdio.h"
 176              		.file 44 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
 177              		.file 45 "/usr/include/errno.h"
 178              		.file 46 "/usr/include/x86_64-linux-gnu/bits/wctype-wchar.h"
 179              		.file 47 "/usr/include/wctype.h"
 8273              		.section	.note.gnu.property,"a"
 8274              		.align 8
 8275 0000 04000000 		.long	 1f - 0f
 8276 0004 10000000 		.long	 4f - 1f
 8277 0008 05000000 		.long	 5
 8278              	0:
 8279 000c 474E5500 		.string	 "GNU"
 8280              	1:
 8281              		.align 8
 8282 0010 020000C0 		.long	 0xc0000002
 8283 0014 04000000 		.long	 3f - 2f
 8284              	2:
 8285 0018 03000000 		.long	 0x3
 8286              	3:
 8287 001c 00000000 		.align 8
 8288              	4:
