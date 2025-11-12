void func_00168038() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00168038: addiu $sp, $sp, -0x10
    a2 = 0x40;                                                  // 0x00168040: addiu $a2, $zero, 0x40
    func_00107d30();  // 0x107c70                                // 0x0016804c: jal 0x107c70
    *(uint8_t*)(s0) = 0;                                        // 0x00168054: sb $zero, 0($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x00168058: sw $zero, 0x2c($s0)
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x0016805c: sb $zero, 1($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00168060: sw $zero, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00168064: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x00168068: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x0016806c: sw $zero, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00168070: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x00168074: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x00168078: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x0016807c: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x00168080: sw $zero, 0x24($s0)
    *(uint8_t*)((s0) + 0x28) = 0;                               // 0x00168084: sb $zero, 0x28($s0)
    return;                                                     // 0x00168090: jr $ra
    sp = sp + 0x10;                                             // 0x00168094: addiu $sp, $sp, 0x10
}