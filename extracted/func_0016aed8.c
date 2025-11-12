void func_0016aed8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016aed8: addiu $sp, $sp, -0x10
    v1 = 8 << 16;                                               // 0x0016aedc: lui $v1, 8
    if (a1 != v1) goto label_0x16af18;                          // 0x0016aeec: bne $a1, $v1, 0x16af18
    func_00167ab0();  // 0x167a90                                // 0x0016aef4: jal 0x167a90
    /* nop */                                                   // 0x0016aef8: nop 
    if (v0 != 0) goto label_0x16af14;                           // 0x0016aefc: bnez $v0, 0x16af14
    func_00167af8();  // 0x167ab0                                // 0x0016af04: jal 0x167ab0
    /* nop */                                                   // 0x0016af08: nop 
    /* beqzl $v0, 0x16af18 */                                   // 0x0016af0c: beqzl $v0, 0x16af18
    v0 = 1;                                                     // 0x0016af10: addiu $v0, $zero, 1
label_0x16af14:
label_0x16af18:
    return;                                                     // 0x0016af20: jr $ra
    sp = sp + 0x10;                                             // 0x0016af24: addiu $sp, $sp, 0x10
}