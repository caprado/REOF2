void func_00188530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x24;                                                  // 0x00188530: addiu $v1, $zero, 0x24
    sp = sp + -0x10;                                            // 0x00188534: addiu $sp, $sp, -0x10
    v0 = 0x28 << 16;                                            // 0x0018853c: lui $v0, 0x28
    v0 = v0 + -0x2fb8;                                          // 0x00188544: addiu $v0, $v0, -0x2fb8
    v0 = v0 + a0;                                               // 0x00188548: addu $v0, $v0, $a0
    func_00188ec0();  // 0x188dc8                                // 0x0018854c: jal 0x188dc8
    a0 = g_0027d04c;  // Global at 0x0027d04c                   // 0x00188550: lw $a0, 4($v0)
    v0 = v0 ^ 3;                                                // 0x00188554: xori $v0, $v0, 3
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0018855c: sltu $v0, $zero, $v0
    return;                                                     // 0x00188560: jr $ra
    sp = sp + 0x10;                                             // 0x00188564: addiu $sp, $sp, 0x10
}