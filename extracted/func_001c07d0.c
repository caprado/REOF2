void func_001c07d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c07d0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)(a0);                                       // 0x001c07dc: lw $v0, 0($a0)
    if (v0 == 0) goto label_0x1c07f0;                           // 0x001c07e0: beqz $v0, 0x1c07f0
    goto label_0x1c0828;                                        // 0x001c07e8: b 0x1c0828
label_0x1c07f0:
    func_001bf890();  // 0x1bf7e0                                // 0x001c07f0: jal 0x1bf7e0
    /* nop */                                                   // 0x001c07f4: nop 
    v1 = 1;                                                     // 0x001c07f8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c081c;                          // 0x001c07fc: beq $v0, $v1, 0x1c081c
    /* nop */                                                   // 0x001c0800: nop 
    if (v0 == 0) goto label_0x1c0814;                           // 0x001c0804: beqz $v0, 0x1c0814
    /* nop */                                                   // 0x001c0808: nop 
    goto label_0x1c0824;                                        // 0x001c080c: b 0x1c0824
    /* nop */                                                   // 0x001c0810: nop 
label_0x1c0814:
    goto label_0x1c0824;                                        // 0x001c0814: b 0x1c0824
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c0818: sw $zero, 0x24($s0)
label_0x1c081c:
    v0 = -0x100;                                                // 0x001c081c: addiu $v0, $zero, -0x100
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0820: sw $v0, 0x24($s0)
label_0x1c0824:
label_0x1c0828:
    func_001bfc20();  // 0x1bfbf0                                // 0x001c0828: jal 0x1bfbf0
    /* nop */                                                   // 0x001c082c: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0834: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0838: jr $ra
    sp = sp + 0x20;                                             // 0x001c083c: addiu $sp, $sp, 0x20
}