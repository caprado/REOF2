void func_00150330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00150330: addiu $sp, $sp, -0x10
    if (v0 != 0) goto label_0x150360;                           // 0x00150344: bnez $v0, 0x150360
    a0 = v0 + 4;                                                // 0x00150348: addiu $a0, $v0, 4
    a0 = 0x21 << 16;                                            // 0x0015034c: lui $a0, 0x21
    func_00150380();  // 150380                                // 0x00150350: jal 0x150380
    a0 = a0 + 0x3e58;                                           // 0x00150354: addiu $a0, $a0, 0x3e58
    goto label_0x15036c;                                        // 0x00150358: b 0x15036c
label_0x150360:
    func_00150380();  // 150380                                // 0x00150360: jal 0x150380
    /* nop */                                                   // 0x00150364: nop 
label_0x15036c:
    return;                                                     // 0x00150374: jr $ra
    sp = sp + 0x10;                                             // 0x00150378: addiu $sp, $sp, 0x10
}