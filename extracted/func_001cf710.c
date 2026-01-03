void func_001cf710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cf710: addiu $sp, $sp, -0x20
    func_001cc130();  // 1cc130                                // 0x001cf71c: jal 0x1cc130
    a1 = 0x33 << 16;                                            // 0x001cf724: lui $a1, 0x33
    a0 = s0 + 4;                                                // 0x001cf728: addiu $a0, $s0, 4
    a1 = a1 + -0x6610;                                          // 0x001cf72c: addiu $a1, $a1, -0x6610
    func_001cfd50();  // 1cfd50                                // 0x001cf730: jal 0x1cfd50
    a2 = 0x2000;                                                // 0x001cf734: addiu $a2, $zero, 0x2000
    a1 = 0x32 << 16;                                            // 0x001cf738: lui $a1, 0x32
    a0 = s0 + 0x18;                                             // 0x001cf73c: addiu $a0, $s0, 0x18
    a1 = a1 + 0x79f0;                                           // 0x001cf740: addiu $a1, $a1, 0x79f0
    func_001cfd50();  // 1cfd50                                // 0x001cf744: jal 0x1cfd50
    a2 = 0x2000;                                                // 0x001cf748: addiu $a2, $zero, 0x2000
    a1 = 0x32 << 16;                                            // 0x001cf74c: lui $a1, 0x32
    a0 = s0 + 0x2c;                                             // 0x001cf750: addiu $a0, $s0, 0x2c
    a1 = a1 + 0x59f0;                                           // 0x001cf754: addiu $a1, $a1, 0x59f0
    func_001cfd50();  // 1cfd50                                // 0x001cf758: jal 0x1cfd50
    a2 = 0x2000;                                                // 0x001cf75c: addiu $a2, $zero, 0x2000
    *(uint32_t*)(s0) = 0;                                       // 0x001cf760: sw $zero, 0($s0)
    v1 = -1;                                                    // 0x001cf764: addiu $v1, $zero, -1
    *(uint32_t*)((s0) + 0x40) = v1;                             // 0x001cf768: sw $v1, 0x40($s0)
    *(uint8_t*)((s0) + 0x7c) = 0;                               // 0x001cf76c: sb $zero, 0x7c($s0)
    *(uint32_t*)((s0) + 0x17c) = 0;                             // 0x001cf770: sw $zero, 0x17c($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cf778: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cf77c: jr $ra
    sp = sp + 0x20;                                             // 0x001cf780: addiu $sp, $sp, 0x20
}