void func_00176a70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00176a70: addiu $sp, $sp, -0x10
    s0 = a0 + 0xcc0;                                            // 0x00176a78: addiu $s0, $a0, 0xcc0
    func_0015b7b0();  // 0x15b740                                // 0x00176a80: jal 0x15b740
    a0 = *(int32_t*)((s0) + 0x29c);                             // 0x00176a84: lw $a0, 0x29c($s0)
    v1 = *(int32_t*)((s0) + 0x298);                             // 0x00176a88: lw $v1, 0x298($s0)
    v1 = v1 + v0;                                               // 0x00176a90: addu $v1, $v1, $v0
    *(uint32_t*)((s0) + 0x298) = v1;                            // 0x00176a94: sw $v1, 0x298($s0)
    return;                                                     // 0x00176a9c: jr $ra
    sp = sp + 0x10;                                             // 0x00176aa0: addiu $sp, $sp, 0x10
}