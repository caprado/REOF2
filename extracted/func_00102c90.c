void func_00102c90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x00102c90: addiu $sp, $sp, -0x90
    v0 = 0x1000 << 16;                                          // 0x00102c94: lui $v0, 0x1000
    v0 = v0 | 0x3c40;                                           // 0x00102c9c: ori $v0, $v0, 0x3c40
    func_00102c90();  // 0x102c40                                // 0x00102cc4: jal 0x102c40
    s7 = g_10000000;  // Global at 0x10000000                   // 0x00102cc8: lw $s7, 0($v0)
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00102ccc: sltiu $v0, $v0, 2
    if (v0 != 0) goto label_0x102ce0;                           // 0x00102cd0: bnez $v0, 0x102ce0
    v0 = 0x1000 << 16;                                          // 0x00102cd4: lui $v0, 0x1000
    goto label_0x102e3c;                                        // 0x00102cd8: b 0x102e3c
label_0x102ce0:
    v1 = 0x1000 << 16;                                          // 0x00102ce0: lui $v1, 0x1000
    v0 = v0 | 0x3d00;                                           // 0x00102ce4: ori $v0, $v0, 0x3d00
    v1 = v1 | 0x3d10;                                           // 0x00102ce8: ori $v1, $v1, 0x3d10
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00102cec: lw $a1, 0($v0)
    a0 = 0x1000 << 16;                                          // 0x00102cf0: lui $a0, 0x1000
    a0 = a0 | 0x3d20;                                           // 0x00102cf4: ori $a0, $a0, 0x3d20
    a2 = 0x1000 << 16;                                          // 0x00102cf8: lui $a2, 0x1000
    *(uint32_t*)(s6) = a1;                                      // 0x00102cfc: sw $a1, 0($s6)
    a2 = a2 | 0x3d30;                                           // 0x00102d00: ori $a2, $a2, 0x3d30
    a1 = 0x1000 << 16;                                          // 0x00102d04: lui $a1, 0x1000
    a3 = 0x1000 << 16;                                          // 0x00102d08: lui $a3, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00102d0c: lw $v0, 0($v1)
    a1 = a1 | 0x3d40;                                           // 0x00102d10: ori $a1, $a1, 0x3d40
    a3 = a3 | 0x3d50;                                           // 0x00102d14: ori $a3, $a3, 0x3d50
    t4 = 0x1000 << 16;                                          // 0x00102d18: lui $t4, 0x1000
    *(uint32_t*)((s6) + 4) = v0;                                // 0x00102d1c: sw $v0, 4($s6)
    t4 = t4 | 0x3d60;                                           // 0x00102d20: ori $t4, $t4, 0x3d60
    s3 = 0x1000 << 16;                                          // 0x00102d24: lui $s3, 0x1000
    s4 = 0x1000 << 16;                                          // 0x00102d28: lui $s4, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00102d2c: lw $v0, 0($a0)
    s3 = s3 | 0x3d70;                                           // 0x00102d30: ori $s3, $s3, 0x3d70
    s4 = s4 | 0x3c70;                                           // 0x00102d34: ori $s4, $s4, 0x3c70
    s1 = 0x1000 << 16;                                          // 0x00102d38: lui $s1, 0x1000
    *(uint32_t*)((s6) + 8) = v0;                                // 0x00102d3c: sw $v0, 8($s6)
    s1 = s1 | 0x3c80;                                           // 0x00102d40: ori $s1, $s1, 0x3c80
    s0 = 0x1000 << 16;                                          // 0x00102d44: lui $s0, 0x1000
    s2 = 0x1000 << 16;                                          // 0x00102d48: lui $s2, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00102d4c: lw $v0, 0($a2)
    s0 = s0 | 0x3c00;                                           // 0x00102d50: ori $s0, $s0, 0x3c00
    s2 = s2 | 0x3cd0;                                           // 0x00102d54: ori $s2, $s2, 0x3cd0
    a2 = 0x1000 << 16;                                          // 0x00102d58: lui $a2, 0x1000
    *(uint32_t*)((s6) + 0xc) = v0;                              // 0x00102d5c: sw $v0, 0xc($s6)
    a2 = a2 | 0x3c90;                                           // 0x00102d60: ori $a2, $a2, 0x3c90
    t0 = 0x1000 << 16;                                          // 0x00102d64: lui $t0, 0x1000
    t6 = 0x1000 << 16;                                          // 0x00102d68: lui $t6, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00102d6c: lw $v0, 0($a1)
    t0 = t0 | 0x3ca0;                                           // 0x00102d70: ori $t0, $t0, 0x3ca0
    t6 = t6 | 0x3cb0;                                           // 0x00102d74: ori $t6, $t6, 0x3cb0
    t3 = 0x1000 << 16;                                          // 0x00102d78: lui $t3, 0x1000
    *(uint32_t*)((s6) + 0x10) = v0;                             // 0x00102d7c: sw $v0, 0x10($s6)
    t3 = t3 | 0x3ce0;                                           // 0x00102d80: ori $t3, $t3, 0x3ce0
    t1 = 0x1000 << 16;                                          // 0x00102d84: lui $t1, 0x1000
    t7 = 0x1000 << 16;                                          // 0x00102d88: lui $t7, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00102d8c: lw $v0, 0($a3)
    t1 = t1 | 0x3cc0;                                           // 0x00102d90: ori $t1, $t1, 0x3cc0
    t7 = t7 | 0x3c30;                                           // 0x00102d94: ori $t7, $t7, 0x3c30
    t5 = 0x1000 << 16;                                          // 0x00102d98: lui $t5, 0x1000
    *(uint32_t*)((s6) + 0x14) = v0;                             // 0x00102d9c: sw $v0, 0x14($s6)
    t5 = t5 | 0x3c60;                                           // 0x00102da0: ori $t5, $t5, 0x3c60
    t2 = 0x1000 << 16;                                          // 0x00102da4: lui $t2, 0x1000
    s5 = (unsigned)s7 >> 8;                                     // 0x00102da8: srl $s5, $s7, 8
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102dac: lw $v1, 0($t4)
    t2 = t2 | 0x3c20;                                           // 0x00102db0: ori $t2, $t2, 0x3c20
    t4 = 0x1000 << 16;                                          // 0x00102db4: lui $t4, 0x1000
    v0 = 1;                                                     // 0x00102db8: addiu $v0, $zero, 1
    *(uint32_t*)((s6) + 0x18) = v1;                             // 0x00102dbc: sw $v1, 0x18($s6)
    t4 = t4 | 0x3c50;                                           // 0x00102dc0: ori $t4, $t4, 0x3c50
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102dc4: lw $v1, 0($s3)
    *(uint32_t*)((s6) + 0x1c) = v1;                             // 0x00102dc8: sw $v1, 0x1c($s6)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102dcc: lw $a0, 0($s4)
    *(uint32_t*)((s6) + 0x20) = a0;                             // 0x00102dd0: sw $a0, 0x20($s6)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102dd4: lw $v1, 0($s1)
    *(uint32_t*)((s6) + 0x24) = v1;                             // 0x00102dd8: sw $v1, 0x24($s6)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102ddc: lw $a0, 0($s0)
    *(uint32_t*)((s6) + 0x28) = a0;                             // 0x00102de0: sw $a0, 0x28($s6)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102de4: lw $v1, 0($s2)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102de8: lw $a0, 0($a2)
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00102dec: lw $a1, 0($t0)
    a2 = g_10000000;  // Global at 0x10000000                   // 0x00102df0: lw $a2, 0($t6)
    a3 = g_10000000;  // Global at 0x10000000                   // 0x00102df4: lw $a3, 0($t3)
    t0 = g_10000000;  // Global at 0x10000000                   // 0x00102df8: lw $t0, 0($t1)
    *(uint16_t*)((s6) + 0x2c) = v1;                             // 0x00102dfc: sh $v1, 0x2c($s6)
    *(uint16_t*)((s6) + 0x2e) = a0;                             // 0x00102e00: sh $a0, 0x2e($s6)
    *(uint16_t*)((s6) + 0x30) = a1;                             // 0x00102e04: sh $a1, 0x30($s6)
    *(uint16_t*)((s6) + 0x32) = a2;                             // 0x00102e08: sh $a2, 0x32($s6)
    *(uint16_t*)((s6) + 0x34) = a3;                             // 0x00102e0c: sh $a3, 0x34($s6)
    *(uint16_t*)((s6) + 0x36) = t0;                             // 0x00102e10: sh $t0, 0x36($s6)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102e14: lw $a0, 0($t7)
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00102e18: lw $a1, 0($t5)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102e1c: lw $v1, 0($t2)
    *(uint8_t*)((s6) + 0x3e) = s5;                              // 0x00102e20: sb $s5, 0x3e($s6)
    *(uint8_t*)((s6) + 0x3c) = v1;                              // 0x00102e24: sb $v1, 0x3c($s6)
    *(uint8_t*)((s6) + 0x3d) = s7;                              // 0x00102e28: sb $s7, 0x3d($s6)
    *(uint16_t*)((s6) + 0x38) = a0;                             // 0x00102e2c: sh $a0, 0x38($s6)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102e30: lw $v1, 0($t4)
    *(uint16_t*)((s6) + 0x3a) = a1;                             // 0x00102e34: sh $a1, 0x3a($s6)
    *(uint8_t*)((s6) + 0x3f) = v1;                              // 0x00102e38: sb $v1, 0x3f($s6)
label_0x102e3c:
    return;                                                     // 0x00102e60: jr $ra
    sp = sp + 0x90;                                             // 0x00102e64: addiu $sp, $sp, 0x90
}