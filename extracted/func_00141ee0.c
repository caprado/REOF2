void func_00141ee0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00141ee0: addiu $sp, $sp, -0x10
    return func_00141eb8();  // Tail call                       // 0x00141ef0: j 0x141eb8
    sp = sp + 0x10;                                             // 0x00141ef4: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00141ef8: nop 
    /* nop */                                                   // 0x00141efc: nop 
    sp = sp + -0xb0;                                            // 0x00141f00: addiu $sp, $sp, -0xb0
    v1 = s5 & 1;                                                // 0x00141f2c: andi $v1, $s5, 1
    v0 = *(int32_t*)((s0) + 0x144);                             // 0x00141f3c: lw $v0, 0x144($s0)
    local_0 = v1;                                               // 0x00141f40: sw $v1, 0($sp)
    /* divide: a1 / v0 -> hi:lo */                              // 0x00141f44: div $zero, $a1, $v0
    /* beqzl $v0, 0x141f50 */                                   // 0x00141f48: beqzl $v0, 0x141f50
    /* break (trap) */                                          // 0x00141f4c: break 0, 7
    v0 = local_0;                                               // 0x00141f50: lw $v0, 0($sp)
    /* mfhi $v1 */                                              // 0x00141f54
    /* mflo $s7 */                                              // 0x00141f58
    a2 = s7 << 4;                                               // 0x00141f60: sll $a2, $s7, 4
    if (v0 == 0) goto label_0x141fb0;                           // 0x00141f64: beqz $v0, 0x141fb0
    a1 = s6 << 4;                                               // 0x00141f68: sll $a1, $s6, 4
    a0 = *(int32_t*)((s0) + 0x828);                             // 0x00141f6c: lw $a0, 0x828($s0)
    s1 = s0 + 0x6e0;                                            // 0x00141f70: addiu $s1, $s0, 0x6e0
    s2 = s0 + 0x6dc;                                            // 0x00141f74: addiu $s2, $s0, 0x6dc
    s3 = s0 + 0x6d8;                                            // 0x00141f78: addiu $s3, $s0, 0x6d8
    s4 = s0 + 0x6d0;                                            // 0x00141f7c: addiu $s4, $s0, 0x6d0
label_0x141f80:
    v0 = 0x1000 << 16;                                          // 0x00141f80: lui $v0, 0x1000
    v0 = v0 | 0xd400;                                           // 0x00141f84: ori $v0, $v0, 0xd400
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00141f88: lw $v1, 0($v0)
    v1 = (unsigned)v1 >> 8;                                     // 0x00141f8c: srl $v1, $v1, 8
    v1 = v1 & 1;                                                // 0x00141f90: andi $v1, $v1, 1
    if (v1 != 0) goto label_0x141f80;                           // 0x00141f94: bnez $v1, 0x141f80
    /* nop */                                                   // 0x00141f98: nop 
    v0 = 0x140;                                                 // 0x00141f9c: addiu $v0, $zero, 0x140
    /* multiply: a0 * v0 -> hi:lo */                            // 0x00141fa0: mult $ac3, $a0, $v0
    v0 = v1 + s1;                                               // 0x00141fa4: addu $v0, $v1, $s1
    goto label_0x142044;                                        // 0x00141fa8: b 0x142044
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00141fac: sw $zero, 0($v0)
label_0x141fb0:
    v0 = t0 + -1;                                               // 0x00141fb0: addiu $v0, $t0, -1
    v0 = ((unsigned)v0 < (unsigned)3) ? 1 : 0;                  // 0x00141fb4: sltiu $v0, $v0, 3
    if (v0 != 0) goto label_0x141fe4;                           // 0x00141fb8: bnez $v0, 0x141fe4
    a1 = 0x22 << 16;                                            // 0x00141fc0: lui $a1, 0x22
    a1 = &str_002265a8;  // "(a) invalid motion_type(%d)-0"     // 0x00141fc8: addiu $a1, $a1, 0x65a8
    func_00148530();  // 0x1484f8                                // 0x00141fcc: jal 0x1484f8
    v1 = 1;                                                     // 0x00141fd4: addiu $v1, $zero, 1
    goto label_0x142120;                                        // 0x00141fdc: b 0x142120
    *(uint32_t*)((s0) + 0x134) = v1;                            // 0x00141fe0: sw $v1, 0x134($s0)
label_0x141fe4:
    func_00142858();  // 0x142150                                // 0x00141fe4: jal 0x142150
    v1 = 0x1000 << 16;                                          // 0x00141fec: lui $v1, 0x1000
    s1 = s0 + 0x6e0;                                            // 0x00141ff0: addiu $s1, $s0, 0x6e0
    s2 = s0 + 0x6dc;                                            // 0x00141ff4: addiu $s2, $s0, 0x6dc
    s3 = s0 + 0x6d8;                                            // 0x00141ff8: addiu $s3, $s0, 0x6d8
    s4 = s0 + 0x6d0;                                            // 0x00141ffc: addiu $s4, $s0, 0x6d0
    v1 = v1 | 0xd400;                                           // 0x00142000: ori $v1, $v1, 0xd400
    /* nop */                                                   // 0x00142004: nop 
label_0x142008:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00142008: lw $v0, 0($v1)
    v0 = (unsigned)v0 >> 8;                                     // 0x0014200c: srl $v0, $v0, 8
    v0 = v0 & 1;                                                // 0x00142010: andi $v0, $v0, 1
    /* nop */                                                   // 0x00142014: nop 
    /* nop */                                                   // 0x00142018: nop 
    if (v0 != 0) goto label_0x142008;                           // 0x0014201c: bnez $v0, 0x142008
    /* nop */                                                   // 0x00142020: nop 
    func_00146ed0();  // 0x146d60                                // 0x00142024: jal 0x146d60
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x0014202c: lw $v0, 0x828($s0)
    v1 = 0x140;                                                 // 0x00142030: addiu $v1, $zero, 0x140
    a0 = 1;                                                     // 0x00142034: addiu $a0, $zero, 1
    v0 = a1 + s1;                                               // 0x0014203c: addu $v0, $a1, $s1
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00142040: sw $a0, 0($v0)
label_0x142044:
    v0 = 1;                                                     // 0x00142044: addiu $v0, $zero, 1
    if (fp != v0) goto label_0x142074;                          // 0x00142048: bnel $fp, $v0, 0x142074
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x0014204c: lw $v0, 0x828($s0)
    v0 = s5 & 2;                                                // 0x00142050: andi $v0, $s5, 2
    if (v0 == 0) goto label_0x142070;                           // 0x00142054: beqz $v0, 0x142070
    v1 = 0x140;                                                 // 0x00142058: addiu $v1, $zero, 0x140
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x0014205c: lw $v0, 0x828($s0)
    v0 = a0 + s2;                                               // 0x00142064: addu $v0, $a0, $s2
    goto label_0x142084;                                        // 0x00142068: b 0x142084
    g_10000000 = fp;  // Global at 0x10000000                   // 0x0014206c: sw $fp, 0($v0)
label_0x142070:
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x00142070: lw $v0, 0x828($s0)
label_0x142074:
    v1 = 0x140;                                                 // 0x00142074: addiu $v1, $zero, 0x140
    v0 = a0 + s2;                                               // 0x0014207c: addu $v0, $a0, $s2
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00142080: sw $zero, 0($v0)
label_0x142084:
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x00142084: lw $v0, 0x828($s0)
    a3 = 0x140;                                                 // 0x00142088: addiu $a3, $zero, 0x140
    a1 = local_0;                                               // 0x0014208c: lw $a1, 0($sp)
    v1 = 3;                                                     // 0x00142090: addiu $v1, $zero, 3
    v0 = a0 + s3;                                               // 0x00142098: addu $v0, $a0, $s3
    g_10000000 = a1;  // Global at 0x10000000                   // 0x0014209c: sw $a1, 0($v0)
    a0 = *(int32_t*)((s0) + 0x18c);                             // 0x001420a0: lw $a0, 0x18c($s0)
    if (a0 != v1) goto label_0x1420e0;                          // 0x001420a4: bne $a0, $v1, 0x1420e0
    v0 = 2;                                                     // 0x001420a8: addiu $v0, $zero, 2
    a0 = *(int32_t*)((s0) + 0x828);                             // 0x001420ac: lw $a0, 0x828($s0)
    a2 = 0x180;                                                 // 0x001420b0: addiu $a2, $zero, 0x180
    a1 = *(int32_t*)((s0) + 0x1d8);                             // 0x001420b4: lw $a1, 0x1d8($s0)
    /* multiply: a0 * a3 -> hi:lo */                            // 0x001420b8: mult $ac3, $a0, $a3
    v0 = g_002265b8;  // Global at 0x002265b8                   // 0x001420bc: lw $v0, 0x10($a1)
    a0 = v1 + s4;                                               // 0x001420c0: addu $a0, $v1, $s4
    v1 = str_002265a8;  // "(a) invalid motion_type(%d)-0"      // 0x001420c4: lw $v1, 0($a1)
    v0 = a1 + s7;                                               // 0x001420cc: addu $v0, $a1, $s7
    /* multiply: v0 * a2 -> hi:lo */                            // 0x001420d0: mult $ac2, $v0, $a2
    v1 = v1 + v0;                                               // 0x001420d4: addu $v1, $v1, $v0
    goto label_0x14211c;                                        // 0x001420d8: b 0x14211c
    *(uint32_t*)(a0) = v1;                                      // 0x001420dc: sw $v1, 0($a0)
label_0x1420e0:
    if (a0 != v0) goto label_0x1420ec;                          // 0x001420e0: bnel $a0, $v0, 0x1420ec
    v0 = *(int32_t*)((s0) + 0x1e8);                             // 0x001420e4: lw $v0, 0x1e8($s0)
    v0 = *(int32_t*)((s0) + 0x1f8);                             // 0x001420e8: lw $v0, 0x1f8($s0)
label_0x1420ec:
    v1 = g_10000010;  // Global at 0x10000010                   // 0x001420ec: lw $v1, 0x10($v0)
    a2 = 0x180;                                                 // 0x001420f0: addiu $a2, $zero, 0x180
    a0 = *(int32_t*)((s0) + 0x828);                             // 0x001420f4: lw $a0, 0x828($s0)
    a1 = 0x140;                                                 // 0x001420f8: addiu $a1, $zero, 0x140
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00142100: lw $v0, 0($v0)
    v1 = a3 + s7;                                               // 0x00142104: addu $v1, $a3, $s7
    /* multiply: v1 * a2 -> hi:lo */                            // 0x0014210c: mult $ac3, $v1, $a2
    a0 = a3 + s4;                                               // 0x00142110: addu $a0, $a3, $s4
    v0 = v0 + v1;                                               // 0x00142114: addu $v0, $v0, $v1
    *(uint32_t*)(a0) = v0;                                      // 0x00142118: sw $v0, 0($a0)
label_0x14211c:
    v0 = 1;                                                     // 0x0014211c: addiu $v0, $zero, 1
label_0x142120:
    return;                                                     // 0x00142148: jr $ra
    sp = sp + 0xb0;                                             // 0x0014214c: addiu $sp, $sp, 0xb0
}