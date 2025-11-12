void func_0011ccc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011ccc0: addiu $sp, $sp, -0x10
    v0 = a0 + -0xd;                                             // 0x0011ccc4: addiu $v0, $a0, -0xd
    v0 = ((unsigned)v0 < (unsigned)0x23) ? 1 : 0;               // 0x0011ccc8: sltiu $v0, $v0, 0x23
    if (v0 != 0) goto label_0x11ccdc;                           // 0x0011cccc: bnez $v0, 0x11ccdc
    goto label_0x11cce4;                                        // 0x0011ccd4: b 0x11cce4
    v0 = -1;                                                    // 0x0011ccd8: addiu $v0, $zero, -1
label_0x11ccdc:
    func_0011ccc0();  // 0x11ccb0                                // 0x0011ccdc: jal 0x11ccb0
    /* nop */                                                   // 0x0011cce0: nop 
label_0x11cce4:
    return;                                                     // 0x0011cce8: jr $ra
    sp = sp + 0x10;                                             // 0x0011ccec: addiu $sp, $sp, 0x10
}