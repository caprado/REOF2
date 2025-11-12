void func_001d88c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001d88c0: addiu $sp, $sp, -0xa0
    at = 0x49 << 16;                                            // 0x001d88c4: lui $at, 0x49
    v1 = g_004912df;  // Global at 0x004912df                   // 0x001d88d0: lbu $v1, 0x12df($at)
    if (v1 != 0) goto label_0x1d8940;                           // 0x001d88d4: bnez $v1, 0x1d8940
    /* nop */                                                   // 0x001d88d8: nop 
    func_001b1b10();  // 0x1b1ae0                                // 0x001d88dc: jal 0x1b1ae0
    /* nop */                                                   // 0x001d88e0: nop 
    at = 0x31 << 16;                                            // 0x001d88e4: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d88e8: lui $a1, 0x24
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d88ec: lw $s0, 0x37fc($at)
    a0 = sp + 0x20;                                             // 0x001d88f0: addiu $a0, $sp, 0x20
    at = 0x31 << 16;                                            // 0x001d88f4: lui $at, 0x31
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001d88f8: lhu $a2, 0x37ba($at)
    func_0010a570();  // 0x10a4d8                                // 0x001d88fc: jal 0x10a4d8
    a1 = &str_00247680;  // "data\\rom\\motion\\player\\pc_%03d.bin" // 0x001d8900: addiu $a1, $a1, 0x7680
    v0 = 2 << 16;                                               // 0x001d8904: lui $v0, 2
    a0 = sp + 0x20;                                             // 0x001d8908: addiu $a0, $sp, 0x20
    func_001d33e0();  // 0x1d3390                                // 0x001d8914: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d8918: ori $a2, $v0, 1
    func_001d88c0();  // 0x1d8810                                // 0x001d8924: jal 0x1d8810
    func_001b2a00();  // 0x1b29f0                                // 0x001d892c: jal 0x1b29f0
    /* nop */                                                   // 0x001d8930: nop 
    v1 = 1;                                                     // 0x001d8934: addiu $v1, $zero, 1
    at = 0x49 << 16;                                            // 0x001d8938: lui $at, 0x49
    g_004912df = v1;  // Global at 0x004912df                   // 0x001d893c: sb $v1, 0x12df($at)
label_0x1d8940:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d8944: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8948: jr $ra
    sp = sp + 0xa0;                                             // 0x001d894c: addiu $sp, $sp, 0xa0
}