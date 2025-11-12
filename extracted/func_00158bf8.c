void func_00158bf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00158bf8: addiu $sp, $sp, -0x10
    if (v0 != 0) goto label_0x158c28;                           // 0x00158c0c: bnez $v0, 0x158c28
    a0 = v0 + 0x224;                                            // 0x00158c10: addiu $a0, $v0, 0x224
    a0 = 0x21 << 16;                                            // 0x00158c14: lui $a0, 0x21
    func_00158c80();  // 0x158c48                                // 0x00158c18: jal 0x158c48
    a0 = a0 + 0x3ec0;                                           // 0x00158c1c: addiu $a0, $a0, 0x3ec0
    goto label_0x158c34;                                        // 0x00158c20: b 0x158c34
label_0x158c28:
    func_00158c80();  // 0x158c48                                // 0x00158c28: jal 0x158c48
    /* nop */                                                   // 0x00158c2c: nop 
label_0x158c34:
    return;                                                     // 0x00158c3c: jr $ra
    sp = sp + 0x10;                                             // 0x00158c40: addiu $sp, $sp, 0x10
}