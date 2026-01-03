void func_00169240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00169240: addiu $sp, $sp, -0x20
    v0 = 0x18 << 16;                                            // 0x00169244: lui $v0, 0x18
    a1 = v0 + -0x6928;                                          // 0x00169250: addiu $a1, $v0, -0x6928
    func_001695a0();  // 1695a0                                // 0x0016925c: jal 0x1695a0
    a1 = 0x18 << 16;                                            // 0x00169264: lui $a1, 0x18
    *(uint32_t*)(s0) = v0;                                      // 0x00169268: sw $v0, 0($s0)
    func_001695a0();  // 1695a0                                // 0x00169270: jal 0x1695a0
    a1 = a1 + -0x68e0;                                          // 0x00169274: addiu $a1, $a1, -0x68e0
    a1 = 0x18 << 16;                                            // 0x00169278: lui $a1, 0x18
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0016927c: sw $v0, 4($s0)
    func_001695a0();  // 1695a0                                // 0x00169284: jal 0x1695a0
    a1 = a1 + -0x6898;                                          // 0x00169288: addiu $a1, $a1, -0x6898
    a1 = 0x18 << 16;                                            // 0x0016928c: lui $a1, 0x18
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00169290: sw $v0, 8($s0)
    func_001695a0();  // 1695a0                                // 0x00169298: jal 0x1695a0
    a1 = a1 + -0x6850;                                          // 0x0016929c: addiu $a1, $a1, -0x6850
    a1 = 0x18 << 16;                                            // 0x001692a0: lui $a1, 0x18
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x001692a4: sw $v0, 0xc($s0)
    func_001695a0();  // 1695a0                                // 0x001692ac: jal 0x1695a0
    a1 = a1 + -0x67a0;                                          // 0x001692b0: addiu $a1, $a1, -0x67a0
    a1 = 0x18 << 16;                                            // 0x001692b4: lui $a1, 0x18
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001692b8: sw $v0, 0x10($s0)
    func_001695a0();  // 1695a0                                // 0x001692c0: jal 0x1695a0
    a1 = a1 + -0x6758;                                          // 0x001692c4: addiu $a1, $a1, -0x6758
    a1 = 0x18 << 16;                                            // 0x001692c8: lui $a1, 0x18
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001692cc: sw $v0, 0x14($s0)
    func_001695a0();  // 1695a0                                // 0x001692d4: jal 0x1695a0
    a1 = a1 + -0x6710;                                          // 0x001692d8: addiu $a1, $a1, -0x6710
    *(uint32_t*)((s0) + 0x18) = v0;                             // 0x001692dc: sw $v0, 0x18($s0)
    return;                                                     // 0x001692ec: jr $ra
    sp = sp + 0x20;                                             // 0x001692f0: addiu $sp, $sp, 0x20
}