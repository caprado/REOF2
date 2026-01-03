void func_001a2780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a2780: addiu $sp, $sp, -0x10
    func_001a28d0();  // 1a28d0                                // 0x001a2788: jal 0x1a28d0
    if (v0 == 0) goto label_0x1a27a0;                           // 0x001a2790: beqz $v0, 0x1a27a0
    /* nop */                                                   // 0x001a2794: nop 
    goto label_0x1a27a4;                                        // 0x001a2798: b 0x1a27a4
    v0 = *(int32_t*)((v0) + 4);                                 // 0x001a279c: lw $v0, 4($v0)
label_0x1a27a0:
label_0x1a27a4:
    return;                                                     // 0x001a27a8: jr $ra
    sp = sp + 0x10;                                             // 0x001a27ac: addiu $sp, $sp, 0x10
}