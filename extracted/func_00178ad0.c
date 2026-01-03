void func_00178ad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178ad0: addiu $sp, $sp, -0x10
    a1 = 0xf;                                                   // 0x00178ad4: addiu $a1, $zero, 0xf
    func_001752e8();  // 1752e8                                // 0x00178ae0: jal 0x1752e8
    if (v0 != 0) goto label_0x178af8;                           // 0x00178ae8: bnez $v0, 0x178af8
    goto label_0x178b04;                                        // 0x00178af0: b 0x178b04
    v0 = 1;                                                     // 0x00178af4: addiu $v0, $zero, 1
label_0x178af8:
    func_00177068();  // 177068                                // 0x00178af8: jal 0x177068
    /* nop */                                                   // 0x00178afc: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00178b00: sltu $v0, $zero, $v0
label_0x178b04:
    return;                                                     // 0x00178b0c: jr $ra
    sp = sp + 0x10;                                             // 0x00178b10: addiu $sp, $sp, 0x10
}