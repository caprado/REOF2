void func_00170e20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00170e20: addiu $sp, $sp, -0x40
    PollSema();  // 0x114320                                    // 0x00170e48: jal 0x114320
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170e4c: lw $a0, 0x40($s0)
    a0 = *(int32_t*)((s0) + 0x38);                              // 0x00170e50: lw $a0, 0x38($s0)
    t1 = *(int32_t*)((s0) + 0x1c);                              // 0x00170e54: lw $t1, 0x1c($s0)
    v0 = (unsigned)a0 >> 8;                                     // 0x00170e58: srl $v0, $a0, 8
    v1 = (unsigned)a0 >> 0x10;                                  // 0x00170e5c: srl $v1, $a0, 0x10
    v0 = v0 & 0xf;                                              // 0x00170e60: andi $v0, $v0, 0xf
    v1 = v1 & 3;                                                // 0x00170e64: andi $v1, $v1, 3
    v1 = v1 + v0;                                               // 0x00170e68: addu $v1, $v1, $v0
    a3 = *(int32_t*)(s0);                                       // 0x00170e6c: lw $a3, 0($s0)
    v0 = v1 << 4;                                               // 0x00170e70: sll $v0, $v1, 4
    a1 = *(int32_t*)((s0) + 0x24);                              // 0x00170e74: lw $a1, 0x24($s0)
    s2 = t1 - v0;                                               // 0x00170e78: subu $s2, $t1, $v0
    t2 = *(int32_t*)((s0) + 0x28);                              // 0x00170e7c: lw $t2, 0x28($s0)
    v0 = ((unsigned)s2 < (unsigned)a3) ? 1 : 0;                 // 0x00170e80: sltu $v0, $s2, $a3
    s5 = a1 + v1;                                               // 0x00170e84: addu $s5, $a1, $v1
    s6 = a0 & 0x7f;                                             // 0x00170e88: andi $s6, $a0, 0x7f
    s4 = *(int32_t*)((s0) + 0x20);                              // 0x00170e8c: lw $s4, 0x20($s0)
    if (v0 == 0) goto label_0x170f40;                           // 0x00170e90: beqz $v0, 0x170f40
    s3 = t2 | 0x100;                                            // 0x00170e94: ori $s3, $t2, 0x100
    a2 = *(int32_t*)((s0) + 8);                                 // 0x00170e98: lw $a2, 8($s0)
    v0 = 0xfff << 16;                                           // 0x00170e9c: lui $v0, 0xfff
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00170ea0: lw $v1, 4($s0)
    a0 = a3 - s2;                                               // 0x00170ea4: subu $a0, $a3, $s2
    t0 = a2 << 0xb;                                             // 0x00170ea8: sll $t0, $a2, 0xb
    v0 = v0 | 0xffff;                                           // 0x00170eac: ori $v0, $v0, 0xffff
    s4 = v1 & v0;                                               // 0x00170eb0: and $s4, $v1, $v0
    s5 = (unsigned)a0 >> 4;                                     // 0x00170eb4: srl $s5, $a0, 4
    if (t1 == a3) goto label_0x170ecc;                          // 0x00170eb8: beq $t1, $a3, 0x170ecc
    s2 = s2 + t0;                                               // 0x00170ebc: addu $s2, $s2, $t0
    v0 = a3 + t0;                                               // 0x00170ec0: addu $v0, $a3, $t0
    if (t1 != v0) goto label_0x170ed0;                          // 0x00170ec4: bne $t1, $v0, 0x170ed0
    a0 = 3;                                                     // 0x00170ec8: addiu $a0, $zero, 3
label_0x170ecc:
label_0x170ed0:
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x00170ed0: lw $v1, 0xc($s0)
    v0 = 0xfff << 16;                                           // 0x00170ed4: lui $v0, 0xfff
    v0 = v0 | 0xffff;                                           // 0x00170ed8: ori $v0, $v0, 0xffff
    a0 = a0 << 0x1c;                                            // 0x00170edc: sll $a0, $a0, 0x1c
    v1 = a2 - v1;                                               // 0x00170ee0: subu $v1, $a2, $v1
    v0 = t2 & v0;                                               // 0x00170ee4: and $v0, $t2, $v0
    /* divide: v1 / a2 -> hi:lo */                              // 0x00170ee8: div $zero, $v1, $a2
    v0 = v0 | a0;                                               // 0x00170eec: or $v0, $v0, $a0
    s3 = v0 | 0x100;                                            // 0x00170ef0: ori $s3, $v0, 0x100
    /* beqzl $a2, 0x170efc */                                   // 0x00170ef4: beqzl $a2, 0x170efc
    /* break (trap) */                                          // 0x00170ef8: break 0, 7
    /* mfhi $a1 */                                              // 0x00170efc
    if (a1 < 0) goto label_0x170f28;                            // 0x00170f00: bltzl $a1, 0x170f28
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00170f04: lw $v1, 0x10($s0)
    /* beqzl $a2, 0x170f10 */                                   // 0x00170f08: beqzl $a2, 0x170f10
    /* break (trap) */                                          // 0x00170f0c: break 0, 7
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00170f10: lw $v1, 0x10($s0)
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x00170f14: slt $v0, $a1, $v1
    /* bnezl $v0, 0x171028 */                                   // 0x00170f18: bnezl $v0, 0x171028
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x00170f1c: lw $v1, 0x2c($s0)
    goto label_0x170f2c;                                        // 0x00170f20: b 0x170f2c
    v0 = a2 + -1;                                               // 0x00170f24: addiu $v0, $a2, -1
label_0x170f28:
    v0 = a2 + -1;                                               // 0x00170f28: addiu $v0, $a2, -1
label_0x170f2c:
    v1 = v1 + 1;                                                // 0x00170f2c: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00170f30: sw $v0, 0xc($s0)
    goto label_0x171024;                                        // 0x00170f34: b 0x171024
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x00170f38: sw $v1, 0x10($s0)
    /* nop */                                                   // 0x00170f3c: nop 
label_0x170f40:
    func_00170660();  // 170660                                // 0x00170f44: jal 0x170660
    func_00170660();  // 170660                                // 0x00170f54: jal 0x170660
    if (s1 == t6) goto label_0x171024;                          // 0x00170f60: beq $s1, $t6, 0x171024
    t1 = 0xfff << 16;                                           // 0x00170f64: lui $t1, 0xfff
    t4 = *(int32_t*)((s0) + 8);                                 // 0x00170f68: lw $t4, 8($s0)
    t0 = *(int32_t*)(s0);                                       // 0x00170f6c: lw $t0, 0($s0)
    t3 = 3;                                                     // 0x00170f70: addiu $t3, $zero, 3
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x00170f74: lw $v0, 0x1c($s0)
    v1 = t4 << 0xb;                                             // 0x00170f78: sll $v1, $t4, 0xb
    /* beqzl $v1, 0x170f84 */                                   // 0x00170f7c: beqzl $v1, 0x170f84
    /* break (trap) */                                          // 0x00170f80: break 0, 7
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00170f84: lw $a0, 0xc($s0)
    v0 = v0 - t0;                                               // 0x00170f88: subu $v0, $v0, $t0
    t5 = *(int32_t*)((s0) + 0x10);                              // 0x00170f8c: lw $t5, 0x10($s0)
    /* divide: v0 / v1 -> hi:lo */                              // 0x00170f90: divu $zero, $v0, $v1
    v1 = s1 << 0xb;                                             // 0x00170f94: sll $v1, $s1, 0xb
    v0 = a0 + t5;                                               // 0x00170f98: addu $v0, $a0, $t5
    a1 = t6 + t4;                                               // 0x00170f9c: addu $a1, $t6, $t4
    a1 = a1 - a0;                                               // 0x00170fa0: subu $a1, $a1, $a0
    v1 = t0 + v1;                                               // 0x00170fa4: addu $v1, $t0, $v1
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x00170fa8: lw $a0, 0x28($s0)
    t2 = *(int32_t*)((s0) + 4);                                 // 0x00170fac: lw $t2, 4($s0)
    t1 = t1 | 0xffff;                                           // 0x00170fb0: ori $t1, $t1, 0xffff
    a0 = a0 & t1;                                               // 0x00170fb4: and $a0, $a0, $t1
    v1 = v1 - s2;                                               // 0x00170fb8: subu $v1, $v1, $s2
    s5 = (unsigned)v1 >> 4;                                     // 0x00170fbc: srl $s5, $v1, 4
    /* mfhi $a2 */                                              // 0x00170fc0
    /* divide: v0 / t4 -> hi:lo */                              // 0x00170fc4: div $zero, $v0, $t4
    a2 = t0 + a2;                                               // 0x00170fc8: addu $a2, $t0, $a2
    v0 = s1 << 4;                                               // 0x00170fcc: sll $v0, $s1, 4
    v0 = v0 + t2;                                               // 0x00170fd0: addu $v0, $v0, $t2
    s4 = v0 & t1;                                               // 0x00170fd4: and $s4, $v0, $t1
    /* mfhi $a3 */                                              // 0x00170fd8
    /* divide: a1 / t4 -> hi:lo */                              // 0x00170fdc: div $zero, $a1, $t4
    a3 = a3 << 0xb;                                             // 0x00170fe0: sll $a3, $a3, 0xb
    t0 = t0 + a3;                                               // 0x00170fe4: addu $t0, $t0, $a3
    a2 = a2 ^ t0;                                               // 0x00170fe8: xor $a2, $a2, $t0
    if (a2 == 0) t3 = 0;                                        // 0x00170fec: movz $t3, $zero, $a2
    t3 = t3 << 0x1c;                                            // 0x00170ff0: sll $t3, $t3, 0x1c
    a0 = a0 | t3;                                               // 0x00170ff4: or $a0, $a0, $t3
    /* mfhi $v0 */                                              // 0x00170ff8
    if (v0 < 0) goto label_0x171018;                            // 0x00170ffc: bltz $v0, 0x171018
    s3 = a0 | 0x100;                                            // 0x00171000: ori $s3, $a0, 0x100
    v0 = (v0 < t5) ? 1 : 0;                                     // 0x00171004: slt $v0, $v0, $t5
    /* beqzl $t4, 0x171010 */                                   // 0x00171008: beqzl $t4, 0x171010
    /* break (trap) */                                          // 0x0017100c: break 0, 7
    /* bnezl $v0, 0x171028 */                                   // 0x00171010: bnezl $v0, 0x171028
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x00171014: lw $v1, 0x2c($s0)
label_0x171018:
    v0 = t5 + 1;                                                // 0x00171018: addiu $v0, $t5, 1
    *(uint32_t*)((s0) + 0xc) = t6;                              // 0x0017101c: sw $t6, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x00171020: sw $v0, 0x10($s0)
label_0x171024:
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x00171024: lw $v1, 0x2c($s0)
    /* beqzl $v1, 0x171064 */                                   // 0x00171028: beqzl $v1, 0x171064
    v1 = 0x1000 << 16;                                          // 0x0017102c: lui $v1, 0x1000
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x00171030: lw $v0, 0x30($s0)
    if (v0 == 0) goto label_0x171060;                           // 0x00171034: beqz $v0, 0x171060
    v0 = 0x1000 << 16;                                          // 0x00171038: lui $v0, 0x1000
    a0 = 0x1000 << 16;                                          // 0x0017103c: lui $a0, 0x1000
    v0 = v0 | 0xb010;                                           // 0x00171040: ori $v0, $v0, 0xb010
    a0 = a0 | 0xb020;                                           // 0x00171044: ori $a0, $a0, 0xb020
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00171048: sw $v1, 0($v0)
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x0017104c: lw $v1, 0x30($s0)
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00171050: sw $v1, 0($a0)
    a0 = *(int32_t*)((s0) + 0x34);                              // 0x00171054: lw $a0, 0x34($s0)
    func_001706b0();  // 1706b0                                // 0x00171058: jal 0x1706b0
    a0 = a0 | 0x100;                                            // 0x0017105c: ori $a0, $a0, 0x100
label_0x171060:
    v1 = 0x1000 << 16;                                          // 0x00171060: lui $v1, 0x1000
    v1 = v1 | 0x2010;                                           // 0x00171064: ori $v1, $v1, 0x2010
label_0x171068:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00171068: lw $v0, 0($v1)
    /* nop */                                                   // 0x0017106c: nop 
    /* nop */                                                   // 0x00171070: nop 
    /* nop */                                                   // 0x00171074: nop 
    /* nop */                                                   // 0x00171078: nop 
    if (v0 < 0) goto label_0x171068;                            // 0x0017107c: bltz $v0, 0x171068
    v0 = 0x1000 << 16;                                          // 0x00171080: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x00171084: lui $v1, 0x1000
    v0 = v0 | 0x2000;                                           // 0x00171088: ori $v0, $v0, 0x2000
    v1 = v1 | 0x2010;                                           // 0x0017108c: ori $v1, $v1, 0x2010
    g_10000000 = s6;  // Global at 0x10000000                   // 0x00171090: sw $s6, 0($v0)
    /* nop */                                                   // 0x00171094: nop 
label_0x171098:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00171098: lw $v0, 0($v1)
    /* nop */                                                   // 0x0017109c: nop 
    /* nop */                                                   // 0x001710a0: nop 
    /* nop */                                                   // 0x001710a4: nop 
    /* nop */                                                   // 0x001710a8: nop 
    if (v0 < 0) goto label_0x171098;                            // 0x001710ac: bltz $v0, 0x171098
    v0 = 0x1000 << 16;                                          // 0x001710b0: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x001710b4: lui $v1, 0x1000
    a0 = 0x1000 << 16;                                          // 0x001710b8: lui $a0, 0x1000
    v0 = v0 | 0xb410;                                           // 0x001710bc: ori $v0, $v0, 0xb410
    v1 = v1 | 0xb430;                                           // 0x001710c0: ori $v1, $v1, 0xb430
    a0 = a0 | 0xb420;                                           // 0x001710c4: ori $a0, $a0, 0xb420
    g_10000000 = s2;  // Global at 0x10000000                   // 0x001710c8: sw $s2, 0($v0)
    g_10000000 = s4;  // Global at 0x10000000                   // 0x001710cc: sw $s4, 0($v1)
    g_10000000 = s5;  // Global at 0x10000000                   // 0x001710d0: sw $s5, 0($a0)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001710d4: lw $v0, 0x10($s0)
    /* beqzl $v0, 0x1710ec */                                   // 0x001710d8: beqzl $v0, 0x1710ec
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x001710dc: lw $v0, 0x3c($s0)
    func_00170718();  // 170718                                // 0x001710e0: jal 0x170718
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x001710e8: lw $v0, 0x3c($s0)
    v1 = 0x1000 << 16;                                          // 0x001710ec: lui $v1, 0x1000
    v1 = v1 | 0x2010;                                           // 0x001710f0: ori $v1, $v1, 0x2010
    a0 = 1;                                                     // 0x001710f4: addiu $a0, $zero, 1
    g_10000000 = v0;  // Global at 0x10000000                   // 0x001710f8: sw $v0, 0($v1)
    *(uint32_t*)((s0) + 0x44) = a0;                             // 0x001710fc: sw $a0, 0x44($s0)
    iSignalSema();  // 0x114300                                 // 0x00171100: jal 0x114300
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00171104: lw $a0, 0x40($s0)
    v0 = 1;                                                     // 0x00171108: addiu $v0, $zero, 1
    return;                                                     // 0x0017112c: jr $ra
    sp = sp + 0x40;                                             // 0x00171130: addiu $sp, $sp, 0x40
}