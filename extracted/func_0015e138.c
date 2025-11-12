void func_0015e138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015e138: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x0015e144: jal 0x15fc80
    /* bnezl $v0, 0x15e164 */                                   // 0x0015e14c: bnezl $v0, 0x15e164
    v0 = *(int32_t*)((s0) + 0x84);                              // 0x0015e150: lw $v0, 0x84($s0)
    a0 = 0x22 << 16;                                            // 0x0015e154: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015e158: jal 0x163410
    a0 = &str_00227610;  // "\nMWSFD/PS2EE Ver.2.88 Build:Jul 29 2003 15:13:55\n" // 0x0015e15c: addiu $a0, $a0, 0x7610
    return;                                                     // 0x0015e16c: jr $ra
    sp = sp + 0x10;                                             // 0x0015e170: addiu $sp, $sp, 0x10
}