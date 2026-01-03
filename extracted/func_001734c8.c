void func_001734c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001734c8: addiu $sp, $sp, -0x10
    a2 = 0x10;                                                  // 0x001734d0: addiu $a2, $zero, 0x10
    func_00155f90();  // 155f90                                // 0x001734dc: jal 0x155f90
    *(uint32_t*)(s0) = 0;                                       // 0x001734e4: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x001734e8: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001734ec: sw $zero, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001734f0: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x001734f4: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x001734f8: sw $zero, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001734fc: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x00173500: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x00173504: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00173508: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x0017350c: sw $zero, 0x24($s0)
    return;                                                     // 0x00173518: jr $ra
    sp = sp + 0x10;                                             // 0x0017351c: addiu $sp, $sp, 0x10
}