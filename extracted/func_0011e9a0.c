void func_0011e9a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0011e9a0: addiu $sp, $sp, -0x50
    v0 = (unsigned)s1 >> 0xa;                                   // 0x0011e9b4: srl $v0, $s1, 0xa
    func_0011d378();  // 0x11d320                                // 0x0011e9c4: jal 0x11d320
    s0 = v0 << 6;                                               // 0x0011e9c8: sll $s0, $v0, 6
    if (s1 < 0) goto label_0x11e9f4;                            // 0x0011e9cc: bltz $s1, 0x11e9f4
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0011e9d4: lw $v1, 8($s0)
    v0 = s1 & 0x3ff;                                            // 0x0011e9d8: andi $v0, $s1, 0x3ff
    if (v0 != v1) goto label_0x11e9f4;                          // 0x0011e9dc: bne $v0, $v1, 0x11e9f4
    v0 = 0x1f << 16;                                            // 0x0011e9e0: lui $v0, 0x1f
    v0 = v0 + 0x19e8;                                           // 0x0011e9e4: addiu $v0, $v0, 0x19e8
    v1 = g_001f1a04;  // Global at 0x001f1a04                   // 0x0011e9e8: lw $v1, 0x1c($v0)
    if (v1 != s1) goto label_0x11ea0c;                          // 0x0011e9ec: bnel $v1, $s1, 0x11ea0c
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0011e9f0: lw $v0, 0xc($s0)
label_0x11e9f4:
    if (s3 == 0) goto label_0x11ea50;                           // 0x0011e9f4: beqz $s3, 0x11ea50
    v0 = -1;                                                    // 0x0011e9f8: addiu $v0, $zero, -1
    func_0011d390();  // 0x11d378                                // 0x0011e9fc: jal 0x11d378
    /* nop */                                                   // 0x0011ea00: nop 
    goto label_0x11ea50;                                        // 0x0011ea04: b 0x11ea50
    v0 = -1;                                                    // 0x0011ea08: addiu $v0, $zero, -1
label_0x11ea0c:
    v0 = v0 & 1;                                                // 0x0011ea0c: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x11ea38;                           // 0x0011ea10: beqz $v0, 0x11ea38
    func_0011e4b0();  // 0x11e460                                // 0x0011ea18: jal 0x11e460
    /* nop */                                                   // 0x0011ea1c: nop 
    goto label_0x11ea3c;                                        // 0x0011ea30: b 0x11ea3c
label_0x11ea38:
label_0x11ea3c:
    if (s3 == 0) goto label_0x11ea50;                           // 0x0011ea3c: beqz $s3, 0x11ea50
    func_0011d390();  // 0x11d378                                // 0x0011ea44: jal 0x11d378
    /* nop */                                                   // 0x0011ea48: nop 
label_0x11ea50:
    return;                                                     // 0x0011ea64: jr $ra
    sp = sp + 0x50;                                             // 0x0011ea68: addiu $sp, $sp, 0x50
}