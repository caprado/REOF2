void func_00140b98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00140b98: addiu $sp, $sp, -0x10
    v1 = 0x21 << 16;                                            // 0x00140b9c: lui $v1, 0x21
    v1 = v1 + 0x74;                                             // 0x00140ba4: addiu $v1, $v1, 0x74
    v0 = g_00210074;  // Global at 0x00210074                   // 0x00140ba8: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x00140bac: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x140bc8;                           // 0x00140bb0: bnez $v0, 0x140bc8
    g_00210074 = v0;  // Global at 0x00210074                   // 0x00140bb4: sw $v0, 0($v1)
    return func_00139120();  // Tail call                        // 0x00140bbc: j 0x1390a8
    sp = sp + 0x10;                                             // 0x00140bc0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00140bc4: nop 
label_0x140bc8:
    return;                                                     // 0x00140bcc: jr $ra
    sp = sp + 0x10;                                             // 0x00140bd0: addiu $sp, $sp, 0x10
}