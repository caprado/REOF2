void func_001c12a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c12a0: addiu $sp, $sp, -0x20
    func_001c11e8();  // 1c11e8                                // 0x001c12b0: jal 0x1c11e8
    a0 = *(uint8_t*)((s0) + 7);                                 // 0x001c12b4: lbu $a0, 7($s0)
    a0 = *(uint8_t*)((s0) + 6);                                 // 0x001c12b8: lbu $a0, 6($s0)
    func_001c11e8();  // 1c11e8                                // 0x001c12bc: jal 0x1c11e8
    *(uint8_t*)((s0) + 7) = v0;                                 // 0x001c12c0: sb $v0, 7($s0)
    a0 = *(uint8_t*)((s0) + 5);                                 // 0x001c12c4: lbu $a0, 5($s0)
    func_001c11e8();  // 1c11e8                                // 0x001c12c8: jal 0x1c11e8
    *(uint8_t*)((s0) + 6) = v0;                                 // 0x001c12cc: sb $v0, 6($s0)
    a0 = *(uint8_t*)((s0) + 3);                                 // 0x001c12d0: lbu $a0, 3($s0)
    func_001c11e8();  // 1c11e8                                // 0x001c12d4: jal 0x1c11e8
    *(uint8_t*)((s0) + 5) = v0;                                 // 0x001c12d8: sb $v0, 5($s0)
    a0 = *(uint8_t*)((s0) + 2);                                 // 0x001c12dc: lbu $a0, 2($s0)
    func_001c11e8();  // 1c11e8                                // 0x001c12e0: jal 0x1c11e8
    *(uint8_t*)((s0) + 3) = v0;                                 // 0x001c12e4: sb $v0, 3($s0)
    a0 = *(uint8_t*)((s0) + 1);                                 // 0x001c12e8: lbu $a0, 1($s0)
    func_001c11e8();  // 1c11e8                                // 0x001c12ec: jal 0x1c11e8
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c12f0: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c12f4: sb $v0, 1($s0)
    return;                                                     // 0x001c1300: jr $ra
    sp = sp + 0x20;                                             // 0x001c1304: addiu $sp, $sp, 0x20
}