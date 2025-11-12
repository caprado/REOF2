void func_00165fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00165fa0: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x00165fac: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00165fb4: lui $a1, 0xff00
    if (v0 == 0) goto label_0x165fd8;                           // 0x00165fbc: beqz $v0, 0x165fd8
    a1 = a1 | 0x1a4;                                            // 0x00165fc0: ori $a1, $a1, 0x1a4
    func_00169940();  // 0x1698d0                                // 0x00165fc4: jal 0x1698d0
    /* nop */                                                   // 0x00165fc8: nop 
    goto label_0x165ffc;                                        // 0x00165fcc: b 0x165ffc
    /* nop */                                                   // 0x00165fd4: nop 
label_0x165fd8:
    func_001752f8();  // 0x1752e8                                // 0x00165fdc: jal 0x1752e8
    a1 = 6;                                                     // 0x00165fe0: addiu $a1, $zero, 6
    if (v0 == 0) goto label_0x165ffc;                           // 0x00165fe4: beqz $v0, 0x165ffc
    v1 = *(int32_t*)((s0) + 0x1c84);                            // 0x00165fec: lw $v1, 0x1c84($s0)
    v0 = *(int32_t*)((v1) + 0x10);                              // 0x00165ff0: lw $v0, 0x10($v1)
    /* call function at address in v0 */                        // 0x00165ff4: jalr $v0
    /* nop */                                                   // 0x00165ff8: nop 
label_0x165ffc:
    return;                                                     // 0x00166004: jr $ra
    sp = sp + 0x10;                                             // 0x00166008: addiu $sp, $sp, 0x10
}