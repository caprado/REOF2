void func_001354b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001354b8: addiu $sp, $sp, -0x30
    v0 = 0x25 << 16;                                            // 0x001354bc: lui $v0, 0x25
    s1 = v0 + 0x37ec;                                           // 0x001354d0: addiu $s1, $v0, 0x37ec
label_0x1354e8:
    s1 = s1 + 0x10;                                             // 0x001354e8: addiu $s1, $s1, 0x10
    func_0010b2a0();  // 0x10b0e8                                // 0x001354f0: jal 0x10b0e8
    if (v0 != 0) goto label_0x135508;                           // 0x001354f8: bnez $v0, 0x135508
    s0 = s0 + 1;                                                // 0x001354fc: addiu $s0, $s0, 1
    goto label_0x135518;                                        // 0x00135500: b 0x135518
    v0 = 1;                                                     // 0x00135504: addiu $v0, $zero, 1
label_0x135508:
    v0 = (s0 < 0x20) ? 1 : 0;                                   // 0x00135508: slti $v0, $s0, 0x20
    if (v0 != 0) goto label_0x1354e8;                           // 0x0013550c: bnez $v0, 0x1354e8
label_0x135518:
    return;                                                     // 0x0013552c: jr $ra
    sp = sp + 0x30;                                             // 0x00135530: addiu $sp, $sp, 0x30
}