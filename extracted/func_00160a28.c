void func_00160a28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x00160a28: addiu $sp, $sp, -0x20
    a2 = sp + 4;                                                // 0x00160a3c: addiu $a2, $sp, 4
    func_0017d0a0();  // 0x17d050                                // 0x00160a40: jal 0x17d050
    a0 = *(int32_t*)((a0) + 0xa8);                              // 0x00160a44: lw $a0, 0xa8($a0)
    *(uint32_t*)((s0) + 0x58) = 0;                              // 0x00160a48: sw $zero, 0x58($s0)
    v0 = local_0;                                               // 0x00160a50: lw $v0, 0($sp)
    v1 = local_4;                                               // 0x00160a54: lw $v1, 4($sp)
    *(uint32_t*)((s0) + 0x50) = v0;                             // 0x00160a58: sw $v0, 0x50($s0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x00160a5c: sw $v1, 0x54($s0)
    *(uint32_t*)((s0) + 0x5c) = 0;                              // 0x00160a60: sw $zero, 0x5c($s0)
    return;                                                     // 0x00160a68: jr $ra
    sp = sp + 0x20;                                             // 0x00160a6c: addiu $sp, $sp, 0x20
}