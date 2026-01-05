void func_00128cd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00128cd0: addiu $sp, $sp, -0x10
    if (v1 != 0) goto label_0x128d00;                           // 0x00128ce4: bnez $v1, 0x128d00
    a0 = 0x22 << 16;                                            // 0x00128cec: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00128cf0: jal 0x127d90
    a0 = &str_00222738;  // "E9040811:'adxf' is NULL.(ADXF_ReadSj32)" // 0x00128cf4: addiu $a0, $a0, 0x2738
    goto label_0x128d78;                                        // 0x00128cf8: b 0x128d78
    v0 = -1;                                                    // 0x00128cfc: addiu $v0, $zero, -1
label_0x128d00:
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x00128d00: sw $v1, 0x38($s0)
    t0 = 0xf << 16;                                             // 0x00128d04: lui $t0, 0xf
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x00128d08: sw $v0, 0x34($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00128d10: lw $a0, 4($s0)
    t0 = t0 | 0xffff;                                           // 0x00128d14: ori $t0, $t0, 0xffff
    func_001301a8();  // 1301a8                                // 0x00128d18: jal 0x1301a8
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00128d1c: sw $zero, 0x14($s0)
    func_00130278();  // 130278                                // 0x00128d20: jal 0x130278
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00128d24: lw $a0, 4($s0)
    v1 = 4;                                                     // 0x00128d28: addiu $v1, $zero, 4
    if (v0 != v1) goto label_0x128d48;                          // 0x00128d2c: bne $v0, $v1, 0x128d48
    /* nop */                                                   // 0x00128d30: nop 
    func_00130220();  // 130220                                // 0x00128d34: jal 0x130220
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00128d38: lw $a0, 4($s0)
    goto label_0x128d78;                                        // 0x00128d3c: b 0x128d78
    v0 = -1;                                                    // 0x00128d40: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00128d44: nop 
label_0x128d48:
    func_00130b00();  // 130b00                                // 0x00128d48: jal 0x130b00
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00128d4c: lw $a0, 4($s0)
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x00128d50: sw $zero, 0x3c($s0)
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x00128d58: slti $v0, $v1, 0
    a0 = v1 + 0x7ff;                                            // 0x00128d5c: addiu $a0, $v1, 0x7ff
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x00128d60: sw $v1, 0x10($s0)
    if (v0 != 0) v1 = a0;                                       // 0x00128d64: movn $v1, $a0, $v0
    v1 = v1 >> 0xb;                                             // 0x00128d68: sra $v1, $v1, 0xb
    *(uint32_t*)((s0) + 0x40) = v1;                             // 0x00128d70: sw $v1, 0x40($s0)
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x00128d74: sw $v1, 0xc($s0)
label_0x128d78:
    return;                                                     // 0x00128d80: jr $ra
    sp = sp + 0x10;                                             // 0x00128d84: addiu $sp, $sp, 0x10
}