   1              		.file	"question11.cpp"
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
  14              		.globl	_Z4funccifd
  16              	_Z4funccifd:
  17              	.LFB1522:
  18              		.file 1 "question11.cpp"
   1:question11.cpp **** #include <iostream>
   2:question11.cpp **** 
   3:question11.cpp **** using namespace std;
   4:question11.cpp **** 
   5:question11.cpp **** void func(char c, int i, float f, double d){
  19              		.loc 1 5 44
  20              		.cfi_startproc
  21 0000 F30F1EFA 		endbr64
  22 0004 55       		pushq	%rbp
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 6, -16
  25 0005 4889E5   		movq	%rsp, %rbp
  26              		.cfi_def_cfa_register 6
  27 0008 4883EC20 		subq	$32, %rsp
  28 000c 89F8     		movl	%edi, %eax
  29 000e 8975F8   		movl	%esi, -8(%rbp)
  30 0011 F30F1145 		movss	%xmm0, -12(%rbp)
  30      F4
  31 0016 F20F114D 		movsd	%xmm1, -24(%rbp)
  31      E8
  32 001b 8845FC   		movb	%al, -4(%rbp)
   6:question11.cpp ****   cout<<"Inside function()\n";
  33              		.loc 1 6 9
  34 001e 488D3500 		leaq	.LC0(%rip), %rsi
  34      000000
  35 0025 488D3D00 		leaq	_ZSt4cout(%rip), %rdi
  35      000000
  36 002c E8000000 		call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
  36      00
   7:question11.cpp **** }
  37              		.loc 1 7 1
  38 0031 90       		nop
  39 0032 C9       		leave
  40              		.cfi_def_cfa 7, 8
  41 0033 C3       		ret
  42              		.cfi_endproc
  43              	.LFE1522:
  45              		.globl	main
  47              	main:
  48              	.LFB1523:
   8:question11.cpp **** 
   9:question11.cpp **** 
  10:question11.cpp **** int main(){
  49              		.loc 1 10 11
  50              		.cfi_startproc
  51 0034 F30F1EFA 		endbr64
  52 0038 55       		pushq	%rbp
  53              		.cfi_def_cfa_offset 16
  54              		.cfi_offset 6, -16
  55 0039 4889E5   		movq	%rsp, %rbp
  56              		.cfi_def_cfa_register 6
  11:question11.cpp ****   func('s', 20, 20.4, 345);
  57              		.loc 1 11 7
  58 003c F20F1005 		movsd	.LC1(%rip), %xmm0
  58      00000000 
  59 0044 660F28C8 		movapd	%xmm0, %xmm1
  60 0048 F30F1005 		movss	.LC2(%rip), %xmm0
  60      00000000 
  61 0050 BE140000 		movl	$20, %esi
  61      00
  62 0055 BF730000 		movl	$115, %edi
  62      00
  63 005a E8000000 		call	_Z4funccifd
  63      00
  12:question11.cpp **** }
  64              		.loc 1 12 1
  65 005f B8000000 		movl	$0, %eax
  65      00
  66 0064 5D       		popq	%rbp
  67              		.cfi_def_cfa 7, 8
  68 0065 C3       		ret
  69              		.cfi_endproc
  70              	.LFE1523:
  73              	_Z41__static_initialization_and_destruction_0ii:
  74              	.LFB2007:
  75              		.loc 1 12 1
  76              		.cfi_startproc
  77 0066 F30F1EFA 		endbr64
  78 006a 55       		pushq	%rbp
  79              		.cfi_def_cfa_offset 16
  80              		.cfi_offset 6, -16
  81 006b 4889E5   		movq	%rsp, %rbp
  82              		.cfi_def_cfa_register 6
  83 006e 4883EC10 		subq	$16, %rsp
  84 0072 897DFC   		movl	%edi, -4(%rbp)
  85 0075 8975F8   		movl	%esi, -8(%rbp)
  86              		.loc 1 12 1
  87 0078 837DFC01 		cmpl	$1, -4(%rbp)
  88 007c 7532     		jne	.L6
  89              		.loc 1 12 1 is_stmt 0 discriminator 1
  90 007e 817DF8FF 		cmpl	$65535, -8(%rbp)
  90      FF0000
  91 0085 7529     		jne	.L6
  92              		.file 2 "/usr/include/c++/9/iostream"
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
  93              		.loc 2 74 25 is_stmt 1
  94 0087 488D3D00 		leaq	_ZStL8__ioinit(%rip), %rdi
  94      000000
  95 008e E8000000 		call	_ZNSt8ios_base4InitC1Ev@PLT
  95      00
  96 0093 488D1500 		leaq	__dso_handle(%rip), %rdx
  96      000000
  97 009a 488D3500 		leaq	_ZStL8__ioinit(%rip), %rsi
  97      000000
  98 00a1 488B0500 		movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
  98      000000
  99 00a8 4889C7   		movq	%rax, %rdi
 100 00ab E8000000 		call	__cxa_atexit@PLT
 100      00
 101              	.L6:
 102              		.loc 1 12 1
 103 00b0 90       		nop
 104 00b1 C9       		leave
 105              		.cfi_def_cfa 7, 8
 106 00b2 C3       		ret
 107              		.cfi_endproc
 108              	.LFE2007:
 111              	_GLOBAL__sub_I__Z4funccifd:
 112              	.LFB2008:
 113              		.loc 1 12 1
 114              		.cfi_startproc
 115 00b3 F30F1EFA 		endbr64
 116 00b7 55       		pushq	%rbp
 117              		.cfi_def_cfa_offset 16
 118              		.cfi_offset 6, -16
 119 00b8 4889E5   		movq	%rsp, %rbp
 120              		.cfi_def_cfa_register 6
 121              		.loc 1 12 1
 122 00bb BEFFFF00 		movl	$65535, %esi
 122      00
 123 00c0 BF010000 		movl	$1, %edi
 123      00
 124 00c5 E89CFFFF 		call	_Z41__static_initialization_and_destruction_0ii
 124      FF
 125 00ca 5D       		popq	%rbp
 126              		.cfi_def_cfa 7, 8
 127 00cb C3       		ret
 128              		.cfi_endproc
 129              	.LFE2008:
 131              		.section	.init_array,"aw"
 132              		.align 8
 133 0000 00000000 		.quad	_GLOBAL__sub_I__Z4funccifd
 133      00000000 
 134              		.section	.rodata
 135 0014 00000000 		.align 8
 136              	.LC1:
 137 0018 00000000 		.long	0
 138 001c 00907540 		.long	1081446400
 139              		.align 4
 140              	.LC2:
 141 0020 3333A341 		.long	1101214515
 142              		.text
 143              	.Letext0:
 144              		.file 3 "/usr/include/c++/9/cwchar"
 145              		.file 4 "/usr/include/c++/9/new"
 146              		.file 5 "/usr/include/c++/9/bits/exception_ptr.h"
 147              		.file 6 "/usr/include/c++/9/type_traits"
 148              		.file 7 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h"
 149              		.file 8 "/usr/include/c++/9/bits/cpp_type_traits.h"
 150              		.file 9 "/usr/include/c++/9/bits/stl_pair.h"
 151              		.file 10 "/usr/include/c++/9/debug/debug.h"
 152              		.file 11 "/usr/include/c++/9/bits/char_traits.h"
 153              		.file 12 "/usr/include/c++/9/cstdint"
 154              		.file 13 "/usr/include/c++/9/clocale"
 155              		.file 14 "/usr/include/c++/9/cstdlib"
 156              		.file 15 "/usr/include/c++/9/cstdio"
 157              		.file 16 "/usr/include/c++/9/bits/basic_string.h"
 158              		.file 17 "/usr/include/c++/9/system_error"
 159              		.file 18 "/usr/include/c++/9/bits/ios_base.h"
 160              		.file 19 "/usr/include/c++/9/cwctype"
 161              		.file 20 "/usr/include/c++/9/iosfwd"
 162              		.file 21 "/usr/include/c++/9/bits/predefined_ops.h"
 163              		.file 22 "/usr/include/c++/9/ext/new_allocator.h"
 164              		.file 23 "/usr/include/c++/9/ext/numeric_traits.h"
 165              		.file 24 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
 166              		.file 25 "<built-in>"
 167              		.file 26 "/usr/include/x86_64-linux-gnu/bits/types/wint_t.h"
 168              		.file 27 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
 169              		.file 28 "/usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h"
 170              		.file 29 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
 171              		.file 30 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
 172              		.file 31 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
 173              		.file 32 "/usr/include/wchar.h"
 174              		.file 33 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h"
 175              		.file 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
 176              		.file 35 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
 177              		.file 36 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
 178              		.file 37 "/usr/include/stdint.h"
 179              		.file 38 "/usr/include/locale.h"
 180              		.file 39 "/usr/include/time.h"
 181              		.file 40 "/usr/include/x86_64-linux-gnu/c++/9/bits/atomic_word.h"
 182              		.file 41 "/usr/include/stdlib.h"
 183              		.file 42 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h"
 184              		.file 43 "/usr/include/stdio.h"
 185              		.file 44 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
 186              		.file 45 "/usr/include/errno.h"
 187              		.file 46 "/usr/include/x86_64-linux-gnu/bits/wctype-wchar.h"
 188              		.file 47 "/usr/include/wctype.h"
 8309              		.section	.note.gnu.property,"a"
 8310              		.align 8
 8311 0000 04000000 		.long	 1f - 0f
 8312 0004 10000000 		.long	 4f - 1f
 8313 0008 05000000 		.long	 5
 8314              	0:
 8315 000c 474E5500 		.string	 "GNU"
 8316              	1:
 8317              		.align 8
 8318 0010 020000C0 		.long	 0xc0000002
 8319 0014 04000000 		.long	 3f - 2f
 8320              	2:
 8321 0018 03000000 		.long	 0x3
 8322              	3:
 8323 001c 00000000 		.align 8
 8324              	4:
