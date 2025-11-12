void func_00169f50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_c;
    
    sp = sp + -0x40;                                            // 0x00169f50: addiu $sp, $sp, -0x40
    func_00166d88();  // 0x166ca8                                // 0x00169f74: jal 0x166ca8
    a1 = *(int32_t*)((a0) + 0x1af4);                            // 0x00169f78: lw $a1, 0x1af4($a0)
    /* bnezl $v0, 0x169fa4 */                                   // 0x00169f7c: bnezl $v0, 0x169fa4
    v1 = local_4;                                               // 0x00169f84: lw $v1, 4($sp)
    a0 = local_c;                                               // 0x00169f88: lw $a0, 0xc($sp)
    a1 = local_0;                                               // 0x00169f8c: lw $a1, 0($sp)
    a0 = v1 + a0;                                               // 0x00169f90: addu $a0, $v1, $a0
    *(uint32_t*)(s0) = v1;                                      // 0x00169f94: sw $v1, 0($s0)
    *(uint32_t*)(s2) = a1;                                      // 0x00169f98: sw $a1, 0($s2)
    *(uint32_t*)(s1) = a0;                                      // 0x00169f9c: sw $a0, 0($s1)
    return;                                                     // 0x00169fb0: jr $ra
    sp = sp + 0x40;                                             // 0x00169fb4: addiu $sp, $sp, 0x40
}