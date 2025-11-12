void func_001738d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001738d0: addiu $sp, $sp, -0x10
    v1 = 4;                                                     // 0x001738d4: addiu $v1, $zero, 4
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x001738e4: lw $v0, 0x48($s0)
    if (v0 != v1) goto label_0x173910;                          // 0x001738e8: bnel $v0, $v1, 0x173910
    v1 = 1;                                                     // 0x001738ec: addiu $v1, $zero, 1
    a1 = 7;                                                     // 0x001738f0: addiu $a1, $zero, 7
    a2 = 7;                                                     // 0x001738f4: addiu $a2, $zero, 7
    func_00177908();  // 0x1778a0                                // 0x001738fc: jal 0x1778a0
    /* bnezl $v0, 0x173920 */                                   // 0x00173904: bnezl $v0, 0x173920
    v1 = 1;                                                     // 0x0017390c: addiu $v1, $zero, 1
label_0x173910:
    *(uint32_t*)((s0) + 0x4c) = v1;                             // 0x00173914: sw $v1, 0x4c($s0)
    *(uint32_t*)((s0) + 0x48) = v1;                             // 0x00173918: sw $v1, 0x48($s0)
    return;                                                     // 0x00173924: jr $ra
    sp = sp + 0x10;                                             // 0x00173928: addiu $sp, $sp, 0x10
}