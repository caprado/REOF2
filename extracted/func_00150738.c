void func_00150738() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00150738: addiu $sp, $sp, -0x10
    s0 = a0 + 0x128;                                            // 0x00150744: addiu $s0, $a0, 0x128
    func_00107d30();  // 0x107c70                                // 0x00150750: jal 0x107c70
    a2 = 0x560;                                                 // 0x00150754: addiu $a2, $zero, 0x560
    *(uint32_t*)((s0) + 0x4c8) = 0;                             // 0x0015075c: sw $zero, 0x4c8($s0)
    *(uint32_t*)((s0) + 0x424) = 0;                             // 0x00150760: sw $zero, 0x424($s0)
    *(uint32_t*)((s0) + 0x4cc) = 0;                             // 0x00150764: sw $zero, 0x4cc($s0)
    *(uint32_t*)((s0) + 0x4d0) = 0;                             // 0x00150768: sw $zero, 0x4d0($s0)
    *(uint32_t*)((s0) + 0x4d4) = 0;                             // 0x0015076c: sw $zero, 0x4d4($s0)
    *(uint32_t*)((s0) + 0x4d8) = 0;                             // 0x00150770: sw $zero, 0x4d8($s0)
    *(uint32_t*)((s0) + 0x4dc) = 0;                             // 0x00150774: sw $zero, 0x4dc($s0)
    *(uint32_t*)((s0) + 0x4e0) = 0;                             // 0x00150778: sw $zero, 0x4e0($s0)
    return;                                                     // 0x00150780: jr $ra
    sp = sp + 0x10;                                             // 0x00150784: addiu $sp, $sp, 0x10
}