void func_00174240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00174240: addiu $sp, $sp, -0x10
    func_00155f90();  // 155f90                                // 0x00174254: jal 0x155f90
    a2 = 0x371;                                                 // 0x00174258: addiu $a2, $zero, 0x371
    func_001742b0();  // 1742b0                                // 0x0017425c: jal 0x1742b0
    *(uint32_t*)((s0) + 0xd94) = 0;                             // 0x00174264: sw $zero, 0xd94($s0)
    v0 = -1;                                                    // 0x00174268: addiu $v0, $zero, -1
    v1 = -8;                                                    // 0x0017426c: addiu $v1, $zero, -8
    a0 = 1;                                                     // 0x00174270: addiu $a0, $zero, 1
    *(uint32_t*)((s0) + 0xdc0) = v0;                            // 0x00174274: sw $v0, 0xdc0($s0)
    *(uint32_t*)((s0) + 0xdb4) = v1;                            // 0x00174278: sw $v1, 0xdb4($s0)
    *(uint32_t*)((s0) + 0xdb8) = a0;                            // 0x0017427c: sw $a0, 0xdb8($s0)
    *(uint32_t*)((s0) + 0xd98) = 0;                             // 0x00174280: sw $zero, 0xd98($s0)
    *(uint32_t*)((s0) + 0xd9c) = v1;                            // 0x00174284: sw $v1, 0xd9c($s0)
    *(uint32_t*)((s0) + 0xda0) = a0;                            // 0x00174288: sw $a0, 0xda0($s0)
    *(uint32_t*)((s0) + 0xda4) = v0;                            // 0x0017428c: sw $v0, 0xda4($s0)
    *(uint32_t*)((s0) + 0xda8) = v0;                            // 0x00174290: sw $v0, 0xda8($s0)
    *(uint32_t*)((s0) + 0xdac) = 0;                             // 0x00174294: sw $zero, 0xdac($s0)
    *(uint32_t*)((s0) + 0xdb0) = 0;                             // 0x00174298: sw $zero, 0xdb0($s0)
    *(uint32_t*)((s0) + 0xdbc) = 0;                             // 0x0017429c: sw $zero, 0xdbc($s0)
    return;                                                     // 0x001742a8: jr $ra
    sp = sp + 0x10;                                             // 0x001742ac: addiu $sp, $sp, 0x10
}