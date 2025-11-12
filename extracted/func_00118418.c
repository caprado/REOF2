void func_00118418() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00118418: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)(a1);                                       // 0x0011841c: lw $v1, 0($a1)
    if (v1 == 0) goto label_0x118444;                           // 0x00118424: beqz $v1, 0x118444
    v0 = 0x25 << 16;                                            // 0x0011842c: lui $v0, 0x25
    gp = g_0024f980;  // Global at 0x0024f980                   // 0x00118434: lw $gp, -0x680($v0)
    /* call function at address in v1 */                        // 0x00118438: jalr $v1
    a0 = *(int32_t*)((a1) + 4);                                 // 0x0011843c: lw $a0, 4($a1)
label_0x118444:
    /* memory sync */                                           // 0x00118444: sync 
    return;                                                     // 0x00118454: jr $ra
    sp = sp + 0x20;                                             // 0x00118458: addiu $sp, $sp, 0x20
}