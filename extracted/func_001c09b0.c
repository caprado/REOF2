void func_001c09b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c09b0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)(a0);                                       // 0x001c09bc: lw $v0, 0($a0)
    if (v0 == 0) goto label_0x1c09d0;                           // 0x001c09c0: beqz $v0, 0x1c09d0
    goto label_0x1c0a08;                                        // 0x001c09c8: b 0x1c0a08
label_0x1c09d0:
    func_001bfa60();  // 0x1bf890                                // 0x001c09d0: jal 0x1bf890
    /* nop */                                                   // 0x001c09d4: nop 
    v1 = 1;                                                     // 0x001c09d8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c09fc;                          // 0x001c09dc: beq $v0, $v1, 0x1c09fc
    /* nop */                                                   // 0x001c09e0: nop 
    if (v0 == 0) goto label_0x1c09f4;                           // 0x001c09e4: beqz $v0, 0x1c09f4
    /* nop */                                                   // 0x001c09e8: nop 
    goto label_0x1c0a04;                                        // 0x001c09ec: b 0x1c0a04
    /* nop */                                                   // 0x001c09f0: nop 
label_0x1c09f4:
    goto label_0x1c0a04;                                        // 0x001c09f4: b 0x1c0a04
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c09f8: sw $zero, 0x24($s0)
label_0x1c09fc:
    v0 = -0x100;                                                // 0x001c09fc: addiu $v0, $zero, -0x100
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0a00: sw $v0, 0x24($s0)
label_0x1c0a04:
label_0x1c0a08:
    func_001bfc20();  // 0x1bfbf0                                // 0x001c0a08: jal 0x1bfbf0
    /* nop */                                                   // 0x001c0a0c: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0a14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0a18: jr $ra
    sp = sp + 0x20;                                             // 0x001c0a1c: addiu $sp, $sp, 0x20
}