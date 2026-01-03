void func_00129a38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129a38: addiu $sp, $sp, -0x10
    v0 = a0 << 2;                                               // 0x00129a3c: sll $v0, $a0, 2
    a0 = ((unsigned)a0 < (unsigned)0x100) ? 1 : 0;              // 0x00129a40: sltiu $a0, $a0, 0x100
    if (a0 != 0) goto label_0x129a58;                           // 0x00129a44: bnez $a0, 0x129a58
    a0 = 0x22 << 16;                                            // 0x00129a4c: lui $a0, 0x22
    goto label_0x129a98;                                        // 0x00129a50: b 0x129a98
    a0 = &str_00222ab8;  // "E9040828:'flid' is range outside." // 0x00129a54: addiu $a0, $a0, 0x2ab8
label_0x129a58:
    a0 = 0x1f << 16;                                            // 0x00129a58: lui $a0, 0x1f
    a0 = a0 + v0;                                               // 0x00129a5c: addu $a0, $a0, $v0
    a0 = g_001f3300;  // Global at 0x001f3300                   // 0x00129a60: lw $a0, 0x3300($a0)
    if (a0 != 0) goto label_0x129a78;                           // 0x00129a64: bnez $a0, 0x129a78
    /* nop */                                                   // 0x00129a68: nop 
    a0 = 0x22 << 16;                                            // 0x00129a6c: lui $a0, 0x22
    goto label_0x129a98;                                        // 0x00129a70: b 0x129a98
    a0 = &str_00222ab8;  // "E9040828:'flid' is range outside." // 0x00129a74: addiu $a0, $a0, 0x2ab8
label_0x129a78:
    if (a1 < 0) goto label_0x129a94;                            // 0x00129a78: bltzl $a1, 0x129a94
    a0 = 0x22 << 16;                                            // 0x00129a7c: lui $a0, 0x22
    v0 = g_00220008;  // Global at 0x00220008                   // 0x00129a80: lw $v0, 8($a0)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x00129a84: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x129aa4;                           // 0x00129a88: bnez $v0, 0x129aa4
    a0 = 0x22 << 16;                                            // 0x00129a90: lui $a0, 0x22
label_0x129a94:
    a0 = &str_00222ae0;  // "E0041201:state is reading(ADXF_SetReqRdSct)" // 0x00129a94: addiu $a0, $a0, 0x2ae0
label_0x129a98:
    func_00127d90();  // 127d90                                // 0x00129a98: jal 0x127d90
    /* nop */                                                   // 0x00129a9c: nop 
    v0 = -3;                                                    // 0x00129aa0: addiu $v0, $zero, -3
label_0x129aa4:
    return;                                                     // 0x00129aa8: jr $ra
    sp = sp + 0x10;                                             // 0x00129aac: addiu $sp, $sp, 0x10
}