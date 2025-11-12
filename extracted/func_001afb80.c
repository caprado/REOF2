void func_001afb80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001afb80: addiu $sp, $sp, -0x20
    v0 = *(uint8_t*)((a0) + 2);                                 // 0x001afb8c: lbu $v0, 2($a0)
    if (v0 == 0) goto label_0x1afba0;                           // 0x001afb90: beqz $v0, 0x1afba0
    goto label_0x1afbe4;                                        // 0x001afb98: b 0x1afbe4
label_0x1afba0:
    func_001afb40();  // 0x1afb10                                // 0x001afba0: jal 0x1afb10
    /* nop */                                                   // 0x001afba4: nop 
    a0 = 1;                                                     // 0x001afba8: addiu $a0, $zero, 1
    if (v0 != a0) goto label_0x1afbc8;                          // 0x001afbac: bne $v0, $a0, 0x1afbc8
    at = 0x49 << 16;                                            // 0x001afbb0: lui $at, 0x49
    v0 = *(uint8_t*)((s0) + 3);                                 // 0x001afbb4: lbu $v0, 3($s0)
    if (v0 != 0) goto label_0x1afbe4;                           // 0x001afbb8: bnez $v0, 0x1afbe4
    goto label_0x1afbe4;                                        // 0x001afbc0: b 0x1afbe4
label_0x1afbc8:
    v0 = *(uint8_t*)((s0) + 3);                                 // 0x001afbc8: lbu $v0, 3($s0)
    v1 = g_004912bd;  // Global at 0x004912bd                   // 0x001afbcc: lbu $v1, 0x12bd($at)
    if (v1 != v0) goto label_0x1afbe0;                          // 0x001afbd0: bne $v1, $v0, 0x1afbe0
    goto label_0x1afbe8;                                        // 0x001afbd8: b 0x1afbe8
label_0x1afbe0:
label_0x1afbe4:
label_0x1afbe8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001afbe8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001afbec: jr $ra
    sp = sp + 0x20;                                             // 0x001afbf0: addiu $sp, $sp, 0x20
}