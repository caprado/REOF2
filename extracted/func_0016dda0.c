void func_0016dda0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18, local_20, local_24;
    
    sp = sp + -0x50;                                            // 0x0016dda0: addiu $sp, $sp, -0x50
    s1 = s0 + 0xcdc;                                            // 0x0016ddb8: addiu $s1, $s0, 0xcdc
    func_0016def0();  // 0x16deb0                                // 0x0016ddc4: jal 0x16deb0
    s2 = s0 + 0xd54;                                            // 0x0016ddc8: addiu $s2, $s0, 0xd54
    a1 = sp + 0x20;                                             // 0x0016ddd0: addiu $a1, $sp, 0x20
    func_00176720();  // 0x176680                                // 0x0016ddd4: jal 0x176680
    a2 = sp + 0x24;                                             // 0x0016ddd8: addiu $a2, $sp, 0x24
    a1 = 1;                                                     // 0x0016dddc: addiu $a1, $zero, 1
    a2 = local_18;                                              // 0x0016ddf8: lw $a2, 0x18($sp)
    *(uint32_t*)((s0) + 0xd70) = a2;                            // 0x0016de14: sw $a2, 0xd70($s0)
    s0 = s0 + 0xd04;                                            // 0x0016de18: addiu $s0, $s0, 0xd04
    v0 = *(int32_t*)((s1) + 0x20);                              // 0x0016de1c: lw $v0, 0x20($s1)
    v1 = local_20;                                              // 0x0016de20: lw $v1, 0x20($sp)
    a0 = local_24;                                              // 0x0016de24: lw $a0, 0x24($sp)
    v1 = v1 - v0;                                               // 0x0016de28: subu $v1, $v1, $v0
    *(uint32_t*)(s2) = a1;                                      // 0x0016de2c: sw $a1, 0($s2)
    *(uint32_t*)((s2) + 0x20) = v1;                             // 0x0016de30: sw $v1, 0x20($s2)
    *(uint32_t*)((s2) + 0x24) = a0;                             // 0x0016de34: sw $a0, 0x24($s2)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0016de38: lw $v0, 0x20($s0)
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x0016de3c: slt $v1, $v1, $v0
    /* bnezl $v1, 0x16de9c */                                   // 0x0016de40: bnezl $v1, 0x16de9c
    return;                                                     // 0x0016dea8: jr $ra
    sp = sp + 0x50;                                             // 0x0016deac: addiu $sp, $sp, 0x50
}