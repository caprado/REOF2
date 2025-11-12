void func_00178d68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178d68: addiu $sp, $sp, -0x10
    v1 = 0x26 << 16;                                            // 0x00178d6c: lui $v1, 0x26
    v1 = v1 + 0x78c4;                                           // 0x00178d74: addiu $v1, $v1, 0x78c4
    v0 = g_002678c4;  // Global at 0x002678c4                   // 0x00178d78: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x00178d7c: addiu $v0, $v0, -1
    if (v0 > 0) goto label_0x178da0;                            // 0x00178d80: bgtz $v0, 0x178da0
    g_002678c4 = v0;  // Global at 0x002678c4                   // 0x00178d84: sw $v0, 0($v1)
    a0 = 0x26 << 16;                                            // 0x00178d88: lui $a0, 0x26
    a0 = a0 + 0x78b8;                                           // 0x00178d90: addiu $a0, $a0, 0x78b8
    return func_00178ea8();  // Tail call                       // 0x00178d94: j 0x178ea8
    sp = sp + 0x10;                                             // 0x00178d98: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00178d9c: nop 
label_0x178da0:
    return;                                                     // 0x00178da4: jr $ra
    sp = sp + 0x10;                                             // 0x00178da8: addiu $sp, $sp, 0x10
}