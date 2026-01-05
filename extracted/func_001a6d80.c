void func_001a6d80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_18, local_24;
    
    sp = sp + -0x30;                                            // 0x001a6d80: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((gp) + -0x63f8);                           // 0x001a6d88: lw $v0, -0x63f8($gp)
    if (v0 == 0) goto label_0x1a6d9c;                           // 0x001a6d8c: beqz $v0, 0x1a6d9c
    goto label_0x1a6e4c;                                        // 0x001a6d94: b 0x1a6e4c
label_0x1a6d9c:
    func_001a6cc0();  // 1a6cc0                                // 0x001a6d9c: jal 0x1a6cc0
    /* nop */                                                   // 0x001a6da0: nop 
    a0 = 0x2a << 16;                                            // 0x001a6da4: lui $a0, 0x2a
    func_001a6d10();  // 1a6d10                                // 0x001a6dac: jal 0x1a6d10
    a0 = a0 + 0x1130;                                           // 0x001a6db0: addiu $a0, $a0, 0x1130
    if (v0 >= 0) goto label_0x1a6dc4;                           // 0x001a6db4: bgez $v0, 0x1a6dc4
    a0 = 0x2a << 16;                                            // 0x001a6db8: lui $a0, 0x2a
    goto label_0x1a6e48;                                        // 0x001a6dbc: b 0x1a6e48
    v0 = -1;                                                    // 0x001a6dc0: addiu $v0, $zero, -1
label_0x1a6dc4:
    a1 = 1;                                                     // 0x001a6dc4: addiu $a1, $zero, 1
    func_001a6d10();  // 1a6d10                                // 0x001a6dc8: jal 0x1a6d10
    a0 = a0 + 0x1100;                                           // 0x001a6dcc: addiu $a0, $a0, 0x1100
    if (v0 >= 0) goto label_0x1a6de0;                           // 0x001a6dd0: bgez $v0, 0x1a6de0
    /* nop */                                                   // 0x001a6dd4: nop 
    goto label_0x1a6e48;                                        // 0x001a6dd8: b 0x1a6e48
    v0 = -1;                                                    // 0x001a6ddc: addiu $v0, $zero, -1
label_0x1a6de0:
    v0 = 1;                                                     // 0x001a6de0: addiu $v0, $zero, 1
    local_18 = v0;                                              // 0x001a6de4: sw $v0, 0x18($sp)
    local_14 = v0;                                              // 0x001a6de8: sw $v0, 0x14($sp)
    v0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a6dec: lw $v0, -0x7d58($gp)
    if (v0 >= 0) goto label_0x1a6e14;                           // 0x001a6df0: bgez $v0, 0x1a6e14
    local_24 = 0;                                               // 0x001a6df4: sw $zero, 0x24($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001a6df8: jal 0x1142e0
    a0 = sp + 0x10;                                             // 0x001a6dfc: addiu $a0, $sp, 0x10
    if (v0 > 0) goto label_0x1a6e10;                            // 0x001a6e00: bgtz $v0, 0x1a6e10
    /* nop */                                                   // 0x001a6e04: nop 
    goto label_0x1a6e48;                                        // 0x001a6e08: b 0x1a6e48
    v0 = -1;                                                    // 0x001a6e0c: addiu $v0, $zero, -1
label_0x1a6e10:
    *(uint32_t*)((gp) + -0x7d58) = v0;                          // 0x001a6e10: sw $v0, -0x7d58($gp)
label_0x1a6e14:
    v0 = *(int32_t*)((gp) + -0x7d54);                           // 0x001a6e14: lw $v0, -0x7d54($gp)
    if (v0 >= 0) goto label_0x1a6e40;                           // 0x001a6e18: bgez $v0, 0x1a6e40
    v1 = 1;                                                     // 0x001a6e1c: addiu $v1, $zero, 1
    DeleteSema();  // 0x1142e0                                  // 0x001a6e20: jal 0x1142e0
    a0 = sp + 0x10;                                             // 0x001a6e24: addiu $a0, $sp, 0x10
    if (v0 > 0) goto label_0x1a6e38;                            // 0x001a6e28: bgtz $v0, 0x1a6e38
    /* nop */                                                   // 0x001a6e2c: nop 
    goto label_0x1a6e48;                                        // 0x001a6e30: b 0x1a6e48
    v0 = -1;                                                    // 0x001a6e34: addiu $v0, $zero, -1
label_0x1a6e38:
    *(uint32_t*)((gp) + -0x7d54) = v0;                          // 0x001a6e38: sw $v0, -0x7d54($gp)
    v1 = 1;                                                     // 0x001a6e3c: addiu $v1, $zero, 1
label_0x1a6e40:
    *(uint32_t*)((gp) + -0x63f8) = v1;                          // 0x001a6e44: sw $v1, -0x63f8($gp)
label_0x1a6e48:
label_0x1a6e4c:
    return;                                                     // 0x001a6e4c: jr $ra
    sp = sp + 0x30;                                             // 0x001a6e50: addiu $sp, $sp, 0x30
}