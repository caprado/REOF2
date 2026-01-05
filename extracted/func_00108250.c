void func_00108250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00108250: addiu $sp, $sp, -0x10
    func_00107e00();  // 107e00                                // 0x00108260: jal 0x107e00
    a1 = 1;                                                     // 0x00108264: addiu $a1, $zero, 1
    v1 = 1;                                                     // 0x00108268: addiu $v1, $zero, 1
    *(uint32_t*)((a0) + 0x14) = s0;                             // 0x00108274: sw $s0, 0x14($a0)
    *(uint32_t*)((a0) + 0x10) = v1;                             // 0x0010827c: sw $v1, 0x10($a0)
    return;                                                     // 0x00108280: jr $ra
    sp = sp + 0x10;                                             // 0x00108284: addiu $sp, $sp, 0x10
}