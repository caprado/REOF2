void func_00157eb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00157eb8: addiu $sp, $sp, -0x10
    if (v0 != 0) goto label_0x157ee8;                           // 0x00157ecc: bnez $v0, 0x157ee8
    a0 = v0 + 4;                                                // 0x00157ed0: addiu $a0, $v0, 4
    v0 = 0x21 << 16;                                            // 0x00157ed4: lui $v0, 0x21
    func_00157f40();  // 0x157f08                                // 0x00157ed8: jal 0x157f08
    a0 = g_00213e70;  // Global at 0x00213e70                   // 0x00157edc: lw $a0, 0x3e70($v0)
    goto label_0x157ef4;                                        // 0x00157ee0: b 0x157ef4
label_0x157ee8:
    func_00157f40();  // 0x157f08                                // 0x00157ee8: jal 0x157f08
    /* nop */                                                   // 0x00157eec: nop 
label_0x157ef4:
    return;                                                     // 0x00157efc: jr $ra
    sp = sp + 0x10;                                             // 0x00157f00: addiu $sp, $sp, 0x10
}