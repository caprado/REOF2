void func_00139d48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x50;                                            // 0x00139d48: addiu $sp, $sp, -0x50
    func_0013a6c0();  // 13a6c0                                // 0x00139d5c: jal 0x13a6c0
    v0 = local_4;                                               // 0x00139d64: lw $v0, 4($sp)
    v1 = 0x20 << 16;                                            // 0x00139d68: lui $v1, 0x20
    s1 = v1 + 0x3da0;                                           // 0x00139d6c: addiu $s1, $v1, 0x3da0
    if (v0 != 0) goto label_0x139ddc;                           // 0x00139d74: bnez $v0, 0x139ddc
    func_00139f08();  // 139f08                                // 0x00139d7c: jal 0x139f08
    /* nop */                                                   // 0x00139d80: nop 
    func_00137ec8();  // 137ec8                                // 0x00139d84: jal 0x137ec8
    a0 = 0 | 0x8400;                                            // 0x00139d88: ori $a0, $zero, 0x8400
    func_00100d98();  // 100d98                                // 0x00139d8c: jal 0x100d98
    func_00137ec8();  // 137ec8                                // 0x00139d94: jal 0x137ec8
    a0 = 0 | 0x8401;                                            // 0x00139d98: ori $a0, $zero, 0x8401
    func_001392e8();  // 1392e8                                // 0x00139da0: jal 0x1392e8
    if (v0 != 0) goto label_0x139dd8;                           // 0x00139da8: bnez $v0, 0x139dd8
    a0 = 2;                                                     // 0x00139dac: addiu $a0, $zero, 2
    v0 = 0x20 << 16;                                            // 0x00139db0: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x00139db4: lw $v1, 0x3ee8($v0)
    if (v1 == a0) goto label_0x139dcc;                          // 0x00139db8: beq $v1, $a0, 0x139dcc
    a0 = 0x22 << 16;                                            // 0x00139dc0: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00139dc4: jal 0x116508
    a0 = &str_00225338;  // "E0092902:can't find file.(dvCiGetFileSize)" // 0x00139dc8: addiu $a0, $a0, 0x5338
label_0x139dcc:
    goto label_0x139ddc;                                        // 0x00139dcc: b 0x139ddc
    /* nop */                                                   // 0x00139dd4: nop 
label_0x139dd8:
    v0 = local_4;                                               // 0x00139dd8: lw $v0, 4($sp)
label_0x139ddc:
    return;                                                     // 0x00139de8: jr $ra
    sp = sp + 0x50;                                             // 0x00139dec: addiu $sp, $sp, 0x50
}