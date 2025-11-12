void func_001a2cd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a2cd0: addiu $sp, $sp, -0x20
    func_001a2ef0();  // 0x1a2e50                                // 0x001a2ce4: jal 0x1a2e50
    a0 = g_00010000;  // Global at 0x00010000                   // 0x001a2cec: lw $a0, 0($v0)
    v1 = 4;                                                     // 0x001a2cf0: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1a2d04;                          // 0x001a2cf4: beq $a0, $v1, 0x1a2d04
    goto label_0x1a2de0;                                        // 0x001a2cfc: b 0x1a2de0
    v0 = -1;                                                    // 0x001a2d00: addiu $v0, $zero, -1
label_0x1a2d04:
    a1 = 0xf << 16;                                             // 0x001a2d04: lui $a1, 0xf
    func_001a32e0();  // 0x1a3230                                // 0x001a2d08: jal 0x1a3230
    if (v0 != 0) goto label_0x1a2d20;                           // 0x001a2d10: bnez $v0, 0x1a2d20
    /* nop */                                                   // 0x001a2d14: nop 
    goto label_0x1a2de0;                                        // 0x001a2d18: b 0x1a2de0
    v0 = -1;                                                    // 0x001a2d1c: addiu $v0, $zero, -1
label_0x1a2d20:
    a1 = g_0001000c;  // Global at 0x0001000c                   // 0x001a2d20: lw $a1, 0xc($v0)
    v1 = v0 + 0xc;                                              // 0x001a2d24: addiu $v1, $v0, 0xc
    a0 = 0xffff << 16;                                          // 0x001a2d28: lui $a0, 0xffff
    *(uint32_t*)(s0) = a1;                                      // 0x001a2d2c: sw $a1, 0($s0)
    v0 = 1 << 16;                                               // 0x001a2d30: lui $v0, 1
    a1 = *(int32_t*)(s0);                                       // 0x001a2d34: lw $a1, 0($s0)
    a0 = a1 & a0;                                               // 0x001a2d38: and $a0, $a1, $a0
    if (a0 == v0) goto label_0x1a2d4c;                          // 0x001a2d3c: beq $a0, $v0, 0x1a2d4c
    /* nop */                                                   // 0x001a2d40: nop 
    goto label_0x1a2de0;                                        // 0x001a2d44: b 0x1a2de0
    v0 = -2;                                                    // 0x001a2d48: addiu $v0, $zero, -2
label_0x1a2d4c:
    a0 = g_0001000c;  // Global at 0x0001000c                   // 0x001a2d4c: lw $a0, 0($v1)
    *(uint32_t*)(s0) = a0;                                      // 0x001a2d54: sw $a0, 0($s0)
    a0 = g_00010010;  // Global at 0x00010010                   // 0x001a2d58: lw $a0, 4($v1)
    *(uint32_t*)((s0) + 4) = a0;                                // 0x001a2d5c: sw $a0, 4($s0)
    a0 = g_00010014;  // Global at 0x00010014                   // 0x001a2d60: lw $a0, 8($v1)
    *(uint32_t*)((s0) + 8) = a0;                                // 0x001a2d64: sw $a0, 8($s0)
    a0 = g_00010018;  // Global at 0x00010018                   // 0x001a2d68: lw $a0, 0xc($v1)
    *(uint32_t*)((s0) + 0xc) = a0;                              // 0x001a2d6c: sw $a0, 0xc($s0)
    a0 = g_0001001c;  // Global at 0x0001001c                   // 0x001a2d70: lw $a0, 0x10($v1)
    *(uint32_t*)((s0) + 0x10) = a0;                             // 0x001a2d74: sw $a0, 0x10($s0)
    a0 = g_00010020;  // Global at 0x00010020                   // 0x001a2d78: lw $a0, 0x14($v1)
    *(uint32_t*)((s0) + 0x14) = a0;                             // 0x001a2d7c: sw $a0, 0x14($s0)
    a0 = g_00010024;  // Global at 0x00010024                   // 0x001a2d80: lw $a0, 0x18($v1)
    *(uint32_t*)((s0) + 0x18) = a0;                             // 0x001a2d84: sw $a0, 0x18($s0)
    a0 = g_00010028;  // Global at 0x00010028                   // 0x001a2d88: lw $a0, 0x1c($v1)
    *(uint32_t*)((s0) + 0x1c) = a0;                             // 0x001a2d8c: sw $a0, 0x1c($s0)
    a0 = g_0001002c;  // Global at 0x0001002c                   // 0x001a2d90: lw $a0, 0x20($v1)
    *(uint32_t*)((s0) + 0x20) = a0;                             // 0x001a2d94: sw $a0, 0x20($s0)
    a0 = g_00010030;  // Global at 0x00010030                   // 0x001a2d98: lw $a0, 0x24($v1)
    *(uint32_t*)((s0) + 0x24) = a0;                             // 0x001a2d9c: sw $a0, 0x24($s0)
    a0 = g_00010034;  // Global at 0x00010034                   // 0x001a2da0: lw $a0, 0x28($v1)
    *(uint32_t*)((s0) + 0x28) = a0;                             // 0x001a2da4: sw $a0, 0x28($s0)
    a0 = g_00010038;  // Global at 0x00010038                   // 0x001a2da8: lw $a0, 0x2c($v1)
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x001a2dac: sw $a0, 0x2c($s0)
    a0 = g_0001003c;  // Global at 0x0001003c                   // 0x001a2db0: lw $a0, 0x30($v1)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x001a2db4: sw $a0, 0x30($s0)
    a0 = g_00010040;  // Global at 0x00010040                   // 0x001a2db8: lw $a0, 0x34($v1)
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x001a2dbc: sw $a0, 0x34($s0)
    a0 = g_00010044;  // Global at 0x00010044                   // 0x001a2dc0: lw $a0, 0x38($v1)
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001a2dc4: sw $a0, 0x38($s0)
    a0 = g_00010048;  // Global at 0x00010048                   // 0x001a2dc8: lw $a0, 0x3c($v1)
    *(uint32_t*)((s0) + 0x3c) = a0;                             // 0x001a2dcc: sw $a0, 0x3c($s0)
    a0 = g_0001004c;  // Global at 0x0001004c                   // 0x001a2dd0: lw $a0, 0x40($v1)
    *(uint32_t*)((s0) + 0x40) = a0;                             // 0x001a2dd4: sw $a0, 0x40($s0)
    v1 = g_00010050;  // Global at 0x00010050                   // 0x001a2dd8: lw $v1, 0x44($v1)
    *(uint32_t*)((s0) + 0x44) = v1;                             // 0x001a2ddc: sw $v1, 0x44($s0)
label_0x1a2de0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2de4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2de8: jr $ra
    sp = sp + 0x20;                                             // 0x001a2dec: addiu $sp, $sp, 0x20
}