   1              		.file	"question13.cpp"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata
   7              	_ZStL19piecewise_construct:
   8 0000 00       		.zero	1
   9              		.local	_ZStL8__ioinit
  10              		.comm	_ZStL8__ioinit,1,1
  11              		.globl	B
  12              		.bss
  13              		.align 32
  16              	B:
  17 0000 00000000 		.zero	112
  17      00000000 
  17      00000000 
  17      00000000 
  17      00000000 
  18              		.globl	B2
  19 0070 00000000 		.align 32
  19      00000000 
  19      00000000 
  19      00000000 
  22              	B2:
  23 0080 00000000 		.zero	112
  23      00000000 
  23      00000000 
  23      00000000 
  23      00000000 
  24              		.text
  25              		.globl	_Z6bigfun3Big
  27              	_Z6bigfun3Big:
  28              	.LFB1522:
  29              		.file 1 "question13.cpp"
   1:question13.cpp **** #include <iostream>
   2:question13.cpp **** 
   3:question13.cpp **** using namespace std;
   4:question13.cpp **** 
   5:question13.cpp **** struct Big {
   6:question13.cpp ****   char buf[100];
   7:question13.cpp ****   int i;
   8:question13.cpp ****   long d;
   9:question13.cpp **** } B, B2;
  10:question13.cpp **** 
  11:question13.cpp **** Big bigfun(Big b){
  30              		.loc 1 11 18
  31              		.cfi_startproc
  32 0000 F30F1EFA 		endbr64
  33 0004 55       		pushq	%rbp
  34              		.cfi_def_cfa_offset 16
  35              		.cfi_offset 6, -16
  36 0005 4889E5   		movq	%rsp, %rbp
  37              		.cfi_def_cfa_register 6
  38 0008 53       		pushq	%rbx
  39              		.cfi_offset 3, -24
  40 0009 48897DF0 		movq	%rdi, -16(%rbp)
  12:question13.cpp ****   b.i  = 100;
  41              		.loc 1 12 8
  42 000d C7457464 		movl	$100, 116(%rbp)
  42      000000
  13:question13.cpp ****   return b;
  43              		.loc 1 13 10
  44 0014 488B45F0 		movq	-16(%rbp), %rax
  45 0018 488B4D10 		movq	16(%rbp), %rcx
  46 001c 488B5D18 		movq	24(%rbp), %rbx
  47 0020 488908   		movq	%rcx, (%rax)
  48 0023 48895808 		movq	%rbx, 8(%rax)
  49 0027 488B4D20 		movq	32(%rbp), %rcx
  50 002b 488B5D28 		movq	40(%rbp), %rbx
  51 002f 48894810 		movq	%rcx, 16(%rax)
  52 0033 48895818 		movq	%rbx, 24(%rax)
  53 0037 488B4D30 		movq	48(%rbp), %rcx
  54 003b 488B5D38 		movq	56(%rbp), %rbx
  55 003f 48894820 		movq	%rcx, 32(%rax)
  56 0043 48895828 		movq	%rbx, 40(%rax)
  57 0047 488B4D40 		movq	64(%rbp), %rcx
  58 004b 488B5D48 		movq	72(%rbp), %rbx
  59 004f 48894830 		movq	%rcx, 48(%rax)
  60 0053 48895838 		movq	%rbx, 56(%rax)
  61 0057 488B4D50 		movq	80(%rbp), %rcx
  62 005b 488B5D58 		movq	88(%rbp), %rbx
  63 005f 48894840 		movq	%rcx, 64(%rax)
  64 0063 48895848 		movq	%rbx, 72(%rax)
  65 0067 488B4D60 		movq	96(%rbp), %rcx
  66 006b 488B5D68 		movq	104(%rbp), %rbx
  67 006f 48894850 		movq	%rcx, 80(%rax)
  68 0073 48895858 		movq	%rbx, 88(%rax)
  69 0077 488B4D70 		movq	112(%rbp), %rcx
  70 007b 488B5D78 		movq	120(%rbp), %rbx
  71 007f 48894860 		movq	%rcx, 96(%rax)
  72 0083 48895868 		movq	%rbx, 104(%rax)
  14:question13.cpp **** }
  73              		.loc 1 14 1
  74 0087 488B45F0 		movq	-16(%rbp), %rax
  75 008b 5B       		popq	%rbx
  76 008c 5D       		popq	%rbp
  77              		.cfi_def_cfa 7, 8
  78 008d C3       		ret
  79              		.cfi_endproc
  80              	.LFE1522:
  82              		.globl	main
  84              	main:
  85              	.LFB1523:
  15:question13.cpp **** 
  16:question13.cpp **** int main(){
  86              		.loc 1 16 11
  87              		.cfi_startproc
  88 008e F30F1EFA 		endbr64
  89 0092 55       		pushq	%rbp
  90              		.cfi_def_cfa_offset 16
  91              		.cfi_offset 6, -16
  92 0093 4889E5   		movq	%rsp, %rbp
  93              		.cfi_def_cfa_register 6
  94 0096 4883C480 		addq	$-128, %rsp
  95              		.loc 1 16 11
  96 009a 64488B04 		movq	%fs:40, %rax
  96      25280000 
  96      00
  97 00a3 488945F8 		movq	%rax, -8(%rbp)
  98 00a7 31C0     		xorl	%eax, %eax
  17:question13.cpp ****   B2 = bigfun(B);
  99              		.loc 1 17 16
 100 00a9 488D4580 		leaq	-128(%rbp), %rax
 101 00ad FF350000 		pushq	104+B(%rip)
 101      0000
 102 00b3 FF350000 		pushq	96+B(%rip)
 102      0000
 103 00b9 FF350000 		pushq	88+B(%rip)
 103      0000
 104 00bf FF350000 		pushq	80+B(%rip)
 104      0000
 105 00c5 FF350000 		pushq	72+B(%rip)
 105      0000
 106 00cb FF350000 		pushq	64+B(%rip)
 106      0000
 107 00d1 FF350000 		pushq	56+B(%rip)
 107      0000
 108 00d7 FF350000 		pushq	48+B(%rip)
 108      0000
 109 00dd FF350000 		pushq	40+B(%rip)
 109      0000
 110 00e3 FF350000 		pushq	32+B(%rip)
 110      0000
 111 00e9 FF350000 		pushq	24+B(%rip)
 111      0000
 112 00ef FF350000 		pushq	16+B(%rip)
 112      0000
 113 00f5 FF350000 		pushq	8+B(%rip)
 113      0000
 114 00fb FF350000 		pushq	B(%rip)
 114      0000
 115 0101 4889C7   		movq	%rax, %rdi
 116 0104 E8000000 		call	_Z6bigfun3Big
 116      00
 117 0109 4883C470 		addq	$112, %rsp
 118 010d 488B4580 		movq	-128(%rbp), %rax
 119 0111 488B5588 		movq	-120(%rbp), %rdx
 120 0115 48890500 		movq	%rax, B2(%rip)
 120      000000
 121 011c 48891500 		movq	%rdx, 8+B2(%rip)
 121      000000
 122 0123 488B4590 		movq	-112(%rbp), %rax
 123 0127 488B5598 		movq	-104(%rbp), %rdx
 124 012b 48890500 		movq	%rax, 16+B2(%rip)
 124      000000
 125 0132 48891500 		movq	%rdx, 24+B2(%rip)
 125      000000
 126 0139 488B45A0 		movq	-96(%rbp), %rax
 127 013d 488B55A8 		movq	-88(%rbp), %rdx
 128 0141 48890500 		movq	%rax, 32+B2(%rip)
 128      000000
 129 0148 48891500 		movq	%rdx, 40+B2(%rip)
 129      000000
 130 014f 488B45B0 		movq	-80(%rbp), %rax
 131 0153 488B55B8 		movq	-72(%rbp), %rdx
 132 0157 48890500 		movq	%rax, 48+B2(%rip)
 132      000000
 133 015e 48891500 		movq	%rdx, 56+B2(%rip)
 133      000000
 134 0165 488B45C0 		movq	-64(%rbp), %rax
 135 0169 488B55C8 		movq	-56(%rbp), %rdx
 136 016d 48890500 		movq	%rax, 64+B2(%rip)
 136      000000
 137 0174 48891500 		movq	%rdx, 72+B2(%rip)
 137      000000
 138 017b 488B45D0 		movq	-48(%rbp), %rax
 139 017f 488B55D8 		movq	-40(%rbp), %rdx
 140 0183 48890500 		movq	%rax, 80+B2(%rip)
 140      000000
 141 018a 48891500 		movq	%rdx, 88+B2(%rip)
 141      000000
 142 0191 488B45E0 		movq	-32(%rbp), %rax
 143 0195 488B55E8 		movq	-24(%rbp), %rdx
 144 0199 48890500 		movq	%rax, 96+B2(%rip)
 144      000000
 145 01a0 48891500 		movq	%rdx, 104+B2(%rip)
 145      000000
  18:question13.cpp **** }
 146              		.loc 1 18 1
 147 01a7 B8000000 		movl	$0, %eax
 147      00
 148 01ac 488B55F8 		movq	-8(%rbp), %rdx
 149 01b0 64483314 		xorq	%fs:40, %rdx
 149      25280000 
 149      00
 150 01b9 7405     		je	.L5
 151 01bb E8000000 		call	__stack_chk_fail@PLT
 151      00
 152              	.L5:
 153 01c0 C9       		leave
 154              		.cfi_def_cfa 7, 8
 155 01c1 C3       		ret
 156              		.cfi_endproc
 157              	.LFE1523:
 160              	_Z41__static_initialization_and_destruction_0ii:
 161              	.LFB2004:
 162              		.loc 1 18 1
 163              		.cfi_startproc
 164 01c2 F30F1EFA 		endbr64
 165 01c6 55       		pushq	%rbp
 166              		.cfi_def_cfa_offset 16
 167              		.cfi_offset 6, -16
 168 01c7 4889E5   		movq	%rsp, %rbp
 169              		.cfi_def_cfa_register 6
 170 01ca 4883EC10 		subq	$16, %rsp
 171 01ce 897DFC   		movl	%edi, -4(%rbp)
 172 01d1 8975F8   		movl	%esi, -8(%rbp)
 173              		.loc 1 18 1
 174 01d4 837DFC01 		cmpl	$1, -4(%rbp)
 175 01d8 7532     		jne	.L8
 176              		.loc 1 18 1 is_stmt 0 discriminator 1
 177 01da 817DF8FF 		cmpl	$65535, -8(%rbp)
 177      FF0000
 178 01e1 7529     		jne	.L8
 179              		.file 2 "/usr/include/c++/9/iostream"
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
 180              		.loc 2 74 25 is_stmt 1
 181 01e3 488D3D00 		leaq	_ZStL8__ioinit(%rip), %rdi
 181      000000
 182 01ea E8000000 		call	_ZNSt8ios_base4InitC1Ev@PLT
 182      00
 183 01ef 488D1500 		leaq	__dso_handle(%rip), %rdx
 183      000000
 184 01f6 488D3500 		leaq	_ZStL8__ioinit(%rip), %rsi
 184      000000
 185 01fd 488B0500 		movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
 185      000000
 186 0204 4889C7   		movq	%rax, %rdi
 187 0207 E8000000 		call	__cxa_atexit@PLT
 187      00
 188              	.L8:
 189              		.loc 1 18 1
 190 020c 90       		nop
 191 020d C9       		leave
 192              		.cfi_def_cfa 7, 8
 193 020e C3       		ret
 194              		.cfi_endproc
 195              	.LFE2004:
 198              	_GLOBAL__sub_I_B:
 199              	.LFB2005:
 200              		.loc 1 18 1
 201              		.cfi_startproc
 202 020f F30F1EFA 		endbr64
 203 0213 55       		pushq	%rbp
 204              		.cfi_def_cfa_offset 16
 205              		.cfi_offset 6, -16
 206 0214 4889E5   		movq	%rsp, %rbp
 207              		.cfi_def_cfa_register 6
 208              		.loc 1 18 1
 209 0217 BEFFFF00 		movl	$65535, %esi
 209      00
 210 021c BF010000 		movl	$1, %edi
 210      00
 211 0221 E89CFFFF 		call	_Z41__static_initialization_and_destruction_0ii
 211      FF
 212 0226 5D       		popq	%rbp
 213              		.cfi_def_cfa 7, 8
 214 0227 C3       		ret
 215              		.cfi_endproc
 216              	.LFE2005:
 218              		.section	.init_array,"aw"
 219              		.align 8
 220 0000 00000000 		.quad	_GLOBAL__sub_I_B
 220      00000000 
 221              		.text
 222              	.Letext0:
 223              		.file 3 "/usr/include/c++/9/cwchar"
 224              		.file 4 "/usr/include/c++/9/new"
 225              		.file 5 "/usr/include/c++/9/bits/exception_ptr.h"
 226              		.file 6 "/usr/include/c++/9/type_traits"
 227              		.file 7 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h"
 228              		.file 8 "/usr/include/c++/9/bits/cpp_type_traits.h"
 229              		.file 9 "/usr/include/c++/9/bits/stl_pair.h"
 230              		.file 10 "/usr/include/c++/9/debug/debug.h"
 231              		.file 11 "/usr/include/c++/9/bits/char_traits.h"
 232              		.file 12 "/usr/include/c++/9/cstdint"
 233              		.file 13 "/usr/include/c++/9/clocale"
 234              		.file 14 "/usr/include/c++/9/cstdlib"
 235              		.file 15 "/usr/include/c++/9/cstdio"
 236              		.file 16 "/usr/include/c++/9/bits/basic_string.h"
 237              		.file 17 "/usr/include/c++/9/system_error"
 238              		.file 18 "/usr/include/c++/9/bits/ios_base.h"
 239              		.file 19 "/usr/include/c++/9/cwctype"
 240              		.file 20 "/usr/include/c++/9/iosfwd"
 241              		.file 21 "/usr/include/c++/9/bits/predefined_ops.h"
 242              		.file 22 "/usr/include/c++/9/ext/new_allocator.h"
 243              		.file 23 "/usr/include/c++/9/ext/numeric_traits.h"
 244              		.file 24 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
 245              		.file 25 "<built-in>"
 246              		.file 26 "/usr/include/x86_64-linux-gnu/bits/types/wint_t.h"
 247              		.file 27 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
 248              		.file 28 "/usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h"
 249              		.file 29 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
 250              		.file 30 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
 251              		.file 31 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
 252              		.file 32 "/usr/include/wchar.h"
 253              		.file 33 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h"
 254              		.file 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
 255              		.file 35 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
 256              		.file 36 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
 257              		.file 37 "/usr/include/stdint.h"
 258              		.file 38 "/usr/include/locale.h"
 259              		.file 39 "/usr/include/time.h"
 260              		.file 40 "/usr/include/x86_64-linux-gnu/c++/9/bits/atomic_word.h"
 261              		.file 41 "/usr/include/stdlib.h"
 262              		.file 42 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h"
 263              		.file 43 "/usr/include/stdio.h"
 264              		.file 44 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
 265              		.file 45 "/usr/include/errno.h"
 266              		.file 46 "/usr/include/x86_64-linux-gnu/bits/wctype-wchar.h"
 267              		.file 47 "/usr/include/wctype.h"
 8437              		.section	.note.gnu.property,"a"
 8438              		.align 8
 8439 0000 04000000 		.long	 1f - 0f
 8440 0004 10000000 		.long	 4f - 1f
 8441 0008 05000000 		.long	 5
 8442              	0:
 8443 000c 474E5500 		.string	 "GNU"
 8444              	1:
 8445              		.align 8
 8446 0010 020000C0 		.long	 0xc0000002
 8447 0014 04000000 		.long	 3f - 2f
 8448              	2:
 8449 0018 03000000 		.long	 0x3
 8450              	3:
 8451 001c 00000000 		.align 8
 8452              	4:
