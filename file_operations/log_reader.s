	.file	"log_reader.cpp"
	.intel_syntax noprefix
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.align 8
.LC0:
	.string	"/mnt/g/Nithin/GPU_Logs_20250311.txt"
	.align 8
.LC1:
	.string	"Error: Could not open the file!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1641:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1641
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 616
	.cfi_offset 3, -24
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	lea	rax, -609[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -609[rbp]
	lea	rax, -608[rbp]
	lea	rsi, .LC0[rip]
	mov	rdi, rax
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE0:
	lea	rax, -609[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rcx, -608[rbp]
	lea	rax, -544[rbp]
	mov	edx, 8
	mov	rsi, rcx
	mov	rdi, rax
.LEHB1:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1ERKNSt7__cxx1112basic_stringIcS1_SaIcEEESt13_Ios_Openmode@PLT
.LEHE1:
	lea	rax, -544[rbp]
	add	rax, 256
	mov	rdi, rax
.LEHB2:
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEntEv@PLT
	test	al, al
	je	.L2
	lea	rsi, .LC1[rip]
	lea	rdi, _ZSt4cerr[rip]
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE2:
	mov	ebx, 1
	jmp	.L3
.L2:
	lea	rax, -576[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
.L5:
	lea	rdx, -576[rbp]
	lea	rax, -544[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB3:
	call	_ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	mov	rdx, QWORD PTR [rax]
	sub	rdx, 24
	mov	rdx, QWORD PTR [rdx]
	add	rax, rdx
	mov	rdi, rax
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv@PLT
	test	al, al
	je	.L4
	lea	rax, -576[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt4cout[rip]
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L5
.L4:
	lea	rax, -544[rbp]
	mov	rdi, rax
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv@PLT
.LEHE3:
	mov	ebx, 0
	lea	rax, -576[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
.L3:
	lea	rax, -544[rbp]
	mov	rdi, rax
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@PLT
	lea	rax, -608[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	mov	eax, ebx
	mov	rcx, QWORD PTR -24[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L11
	jmp	.L16
.L12:
	endbr64
	mov	rbx, rax
	lea	rax, -609[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB4:
	call	_Unwind_Resume@PLT
.L15:
	endbr64
	mov	rbx, rax
	lea	rax, -576[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L9
.L14:
	endbr64
	mov	rbx, rax
.L9:
	lea	rax, -544[rbp]
	mov	rdi, rax
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@PLT
	jmp	.L10
.L13:
	endbr64
	mov	rbx, rax
.L10:
	lea	rax, -608[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.LEHE4:
.L16:
	call	__stack_chk_fail@PLT
.L11:
	add	rsp, 616
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1641:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1641:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1641-.LLSDACSB1641
.LLSDACSB1641:
	.uleb128 .LEHB0-.LFB1641
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L12-.LFB1641
	.uleb128 0
	.uleb128 .LEHB1-.LFB1641
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L13-.LFB1641
	.uleb128 0
	.uleb128 .LEHB2-.LFB1641
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L14-.LFB1641
	.uleb128 0
	.uleb128 .LEHB3-.LFB1641
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L15-.LFB1641
	.uleb128 0
	.uleb128 .LEHB4-.LFB1641
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE1641:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2191:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -4[rbp], edi
	mov	DWORD PTR -8[rbp], esi
	cmp	DWORD PTR -4[rbp], 1
	jne	.L19
	cmp	DWORD PTR -8[rbp], 65535
	jne	.L19
	lea	rdi, _ZStL8__ioinit[rip]
	call	_ZNSt8ios_base4InitC1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZStL8__ioinit[rip]
	mov	rax, QWORD PTR _ZNSt8ios_base4InitD1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
.L19:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2191:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2192:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2192:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
