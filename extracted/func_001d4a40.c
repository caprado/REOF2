void func_001d4a40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x110;                                           // 0x001d4a40: addiu $sp, $sp, -0x110
    func_0010b4b0();  // 0x10b460                                // 0x001d4a48: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001d4a4c: addiu $a1, $zero, 0x5c
    a1 = v0 + 1;                                                // 0x001d4a50: addiu $a1, $v0, 1
    func_0010ae00();  // 0x10ac68                                // 0x001d4a54: jal 0x10ac68
    a0 = sp + 0x10;                                             // 0x001d4a58: addiu $a0, $sp, 0x10
    func_0010caa0();  // 0x10ca50                                // 0x001d4a5c: jal 0x10ca50
    a0 = sp + 0x10;                                             // 0x001d4a60: addiu $a0, $sp, 0x10
    a1 = 0x24 << 16;                                            // 0x001d4a64: lui $a1, 0x24
    a0 = sp + 0x10;                                             // 0x001d4a68: addiu $a0, $sp, 0x10
    func_0010ac68();  // 0x10ab20                                // 0x001d4a6c: jal 0x10ab20
    a1 = &str_00247350;  // "MOVIE128.TM2"                      // 0x001d4a70: addiu $a1, $a1, 0x7350
    if (v0 != 0) goto label_0x1d4a84;                           // 0x001d4a74: bnez $v0, 0x1d4a84
    a1 = 0x24 << 16;                                            // 0x001d4a78: lui $a1, 0x24
    goto label_0x1d4aa0;                                        // 0x001d4a7c: b 0x1d4aa0
    v0 = 0x40;                                                  // 0x001d4a80: addiu $v0, $zero, 0x40
label_0x1d4a84:
    a0 = sp + 0x10;                                             // 0x001d4a84: addiu $a0, $sp, 0x10
    func_0010ac68();  // 0x10ab20                                // 0x001d4a88: jal 0x10ab20
    a1 = &str_00247360;  // "COMMON\\%s"                        // 0x001d4a8c: addiu $a1, $a1, 0x7360
    a0 = 0x80;                                                  // 0x001d4a90: addiu $a0, $zero, 0x80
    v1 = -1;                                                    // 0x001d4a94: addiu $v1, $zero, -1
    if (v0 != 0) a0 = v1;                                       // 0x001d4a98: movn $a0, $v1, $v0
label_0x1d4aa0:
    return;                                                     // 0x001d4aa4: jr $ra
    sp = sp + 0x110;                                            // 0x001d4aa8: addiu $sp, $sp, 0x110
}