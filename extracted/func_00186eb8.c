void func_00186eb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00186eb8: addiu $sp, $sp, -0x60
    v1 = 0x184;                                                 // 0x00186ebc: addiu $v1, $zero, 0x184
    v0 = 0x2010;                                                // 0x00186ec4: addiu $v0, $zero, 0x2010
    /* multiply: s3 * v1 -> hi:lo */                            // 0x00186ed0: mult $ac3, $s3, $v1
    a0 = 0x21 << 16;                                            // 0x00186ed4: lui $a0, 0x21
    a0 = a0 + 0x6018;                                           // 0x00186edc: addiu $a0, $a0, 0x6018
    v1 = v1 + a0;                                               // 0x00186ef4: addu $v1, $v1, $a0
    s4 = 0x28 << 16;                                            // 0x00186ef8: lui $s4, 0x28
    a3 = -1;                                                    // 0x00186efc: addiu $a3, $zero, -1
    a1 = g_00278841;  // Global at 0x00278841                   // 0x00186f00: lw $a1, 0x34($v1)
    t1 = s4 + -0x7800;                                          // 0x00186f04: addiu $t1, $s4, -0x7800
    a0 = g_00278837;  // Global at 0x00278837                   // 0x00186f08: lhu $a0, 0x2a($v1)
    t2 = t0 + t1;                                               // 0x00186f0c: addu $t2, $t0, $t1
    s0 = a2 + a1;                                               // 0x00186f10: addu $s0, $a2, $a1
    v0 = g_00278839;  // Global at 0x00278839                   // 0x00186f14: lhu $v0, 0x2c($v1)
    /* beqzl $v0, 0x186f24 */                                   // 0x00186f1c: beqzl $v0, 0x186f24
    /* break (trap) */                                          // 0x00186f20: break 0, 7
    v1 = *(int32_t*)(t2);                                       // 0x00186f24: lw $v1, 0($t2)
    /* divide: a0 / v0 -> hi:lo */                              // 0x00186f28: div $zero, $a0, $v0
    /* mflo $s2 */                                              // 0x00186f2c
    if (v1 != a3) goto label_0x187018;                          // 0x00186f30: bnel $v1, $a3, 0x187018
    v1 = t1 + 4;                                                // 0x00186f34: addiu $v1, $t1, 4
    v0 = t1 + 0x10;                                             // 0x00186f38: addiu $v0, $t1, 0x10
    v1 = t1 + t0;                                               // 0x00186f3c: addu $v1, $t1, $t0
    *(uint32_t*)(t2) = s0;                                      // 0x00186f40: sw $s0, 0($t2)
    a2 = t0 + v0;                                               // 0x00186f44: addu $a2, $t0, $v0
    g_00278808 = s0;  // Global at 0x00278808                   // 0x00186f48: sw $s0, 4($v1)
    g_00278818 = s2;  // Global at 0x00278818                   // 0x00186f50: sw $s2, 8($v0)
    v0 = s1 | a2;                                               // 0x00186f54: or $v0, $s1, $a2
    g_00278810 = 0;  // Global at 0x00278810                    // 0x00186f58: sw $zero, 0xc($v1)
    v0 = v0 & 7;                                                // 0x00186f5c: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x186fc8;                           // 0x00186f60: beqz $v0, 0x186fc8
    v0 = s1 + 0x400;                                            // 0x00186f68: addiu $v0, $s1, 0x400
label_0x186f6c:
    v1 = v1 + 0x20;                                             // 0x00186fac: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x00186fb0: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00186fb4: nop 
    if (v1 != v0) goto label_0x186f6c;                          // 0x00186fb8: bne $v1, $v0, 0x186f6c
    /* nop */                                                   // 0x00186fbc: nop 
    goto label_0x187004;                                        // 0x00186fc0: b 0x187004
    a1 = 0x2010;                                                // 0x00186fc4: addiu $a1, $zero, 0x2010
label_0x186fc8:
    v0 = s1 + 0x400;                                            // 0x00186fc8: addiu $v0, $s1, 0x400
label_0x186fcc:
    v1 = v1 + 0x20;                                             // 0x00186fec: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x00186ff0: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00186ff4: nop 
    if (v1 != v0) goto label_0x186fcc;                          // 0x00186ff8: bne $v1, $v0, 0x186fcc
    /* nop */                                                   // 0x00186ffc: nop 
    a1 = 0x2010;                                                // 0x00187000: addiu $a1, $zero, 0x2010
label_0x187004:
    a0 = s4 + -0x7800;                                          // 0x00187004: addiu $a0, $s4, -0x7800
    a0 = a0 + 0xc;                                              // 0x0018700c: addiu $a0, $a0, 0xc
    goto label_0x18721c;                                        // 0x00187010: b 0x18721c
    v0 = 1;                                                     // 0x00187014: addiu $v0, $zero, 1
label_0x187018:
    a1 = t0 + v1;                                               // 0x00187018: addu $a1, $t0, $v1
    v0 = *(int32_t*)(a1);                                       // 0x0018701c: lw $v0, 0($a1)
    v0 = v0 + 1;                                                // 0x00187020: addiu $v0, $v0, 1
    if (s0 != v0) goto label_0x187120;                          // 0x00187024: bne $s0, $v0, 0x187120
    v1 = t1 + 0xc;                                              // 0x00187028: addiu $v1, $t1, 0xc
    a0 = t0 + v1;                                               // 0x0018702c: addu $a0, $t0, $v1
    v0 = g_0027880c;  // Global at 0x0027880c                   // 0x00187030: lw $v0, 0($a0)
    v0 = (v0 < 8) ? 1 : 0;                                      // 0x00187034: slti $v0, $v0, 8
    if (v0 == 0) goto label_0x187120;                           // 0x00187038: beqz $v0, 0x187120
    v0 = t1 + t0;                                               // 0x0018703c: addu $v0, $t1, $t0
    v1 = g_00278819;  // Global at 0x00278819                   // 0x00187040: lw $v1, 8($v0)
    if (v1 != s2) goto label_0x187120;                          // 0x00187044: bne $v1, $s2, 0x187120
    v0 = t1 + 0x10;                                             // 0x00187048: addiu $v0, $t1, 0x10
    *(uint32_t*)(a1) = s0;                                      // 0x0018704c: sw $s0, 0($a1)
    v1 = g_0027880c;  // Global at 0x0027880c                   // 0x00187050: lw $v1, 0($a0)
    v1 = v1 << 0xa;                                             // 0x00187054: sll $v1, $v1, 0xa
    v1 = t0 + v1;                                               // 0x00187058: addu $v1, $t0, $v1
    v0 = v1 + v0;                                               // 0x0018705c: addu $v0, $v1, $v0
    a0 = s1 | v0;                                               // 0x00187060: or $a0, $s1, $v0
    a0 = a0 & 7;                                                // 0x00187064: andi $a0, $a0, 7
    if (a0 == 0) goto label_0x1870d0;                           // 0x00187068: beqz $a0, 0x1870d0
    a0 = s1 + 0x400;                                            // 0x00187070: addiu $a0, $s1, 0x400
label_0x187074:
    a2 = a2 + 0x20;                                             // 0x001870b4: addiu $a2, $a2, 0x20
    v0 = v0 + 0x20;                                             // 0x001870b8: addiu $v0, $v0, 0x20
    /* nop */                                                   // 0x001870bc: nop 
    if (a2 != a0) goto label_0x187074;                          // 0x001870c0: bne $a2, $a0, 0x187074
    /* nop */                                                   // 0x001870c4: nop 
    goto label_0x18710c;                                        // 0x001870c8: b 0x18710c
    a1 = 0x2010;                                                // 0x001870cc: addiu $a1, $zero, 0x2010
label_0x1870d0:
    a0 = s1 + 0x400;                                            // 0x001870d0: addiu $a0, $s1, 0x400
label_0x1870d4:
    a2 = a2 + 0x20;                                             // 0x001870f4: addiu $a2, $a2, 0x20
    v0 = v0 + 0x20;                                             // 0x001870f8: addiu $v0, $v0, 0x20
    /* nop */                                                   // 0x001870fc: nop 
    if (a2 != a0) goto label_0x1870d4;                          // 0x00187100: bne $a2, $a0, 0x1870d4
    /* nop */                                                   // 0x00187104: nop 
    a1 = 0x2010;                                                // 0x00187108: addiu $a1, $zero, 0x2010
label_0x18710c:
    a0 = s4 + -0x7800;                                          // 0x0018710c: addiu $a0, $s4, -0x7800
    a0 = a0 + 0xc;                                              // 0x00187114: addiu $a0, $a0, 0xc
    goto label_0x18721c;                                        // 0x00187118: b 0x18721c
    v0 = 1;                                                     // 0x0018711c: addiu $v0, $zero, 1
label_0x187120:
    func_00186e48();  // 186e48                                // 0x00187120: jal 0x186e48
    v1 = 0x2010;                                                // 0x00187128: addiu $v1, $zero, 0x2010
    a0 = s4 + -0x7800;                                          // 0x0018712c: addiu $a0, $s4, -0x7800
    /* multiply: s3 * v1 -> hi:lo */                            // 0x00187130: mult $ac3, $s3, $v1
    a2 = a0 + 0x10;                                             // 0x00187138: addiu $a2, $a0, 0x10
    v0 = v1 + a0;                                               // 0x00187140: addu $v0, $v1, $a0
    a1 = a0 + v1;                                               // 0x00187144: addu $a1, $a0, $v1
    g_00278850 = s0;  // Global at 0x00278850                   // 0x00187148: sw $s0, 0($v0)
    a2 = v1 + a2;                                               // 0x0018714c: addu $a2, $v1, $a2
    *(uint32_t*)((a1) + 4) = s0;                                // 0x00187154: sw $s0, 4($a1)
    g_00278858 = s2;  // Global at 0x00278858                   // 0x00187158: sw $s2, 8($v0)
    v0 = a3 | a2;                                               // 0x00187160: or $v0, $a3, $a2
    v0 = v0 & 7;                                                // 0x00187164: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x1871d0;                           // 0x00187168: beqz $v0, 0x1871d0
    g_0027880c = 0;  // Global at 0x0027880c                    // 0x0018716c: sw $zero, 0xc($a0)
    v0 = a3 + 0x400;                                            // 0x00187170: addiu $v0, $a3, 0x400
label_0x187174:
    a3 = a3 + 0x20;                                             // 0x001871b4: addiu $a3, $a3, 0x20
    a2 = a2 + 0x20;                                             // 0x001871b8: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x001871bc: nop 
    if (a3 != v0) goto label_0x187174;                          // 0x001871c0: bne $a3, $v0, 0x187174
    /* nop */                                                   // 0x001871c4: nop 
    goto label_0x18720c;                                        // 0x001871c8: b 0x18720c
    a1 = 0x2010;                                                // 0x001871cc: addiu $a1, $zero, 0x2010
label_0x1871d0:
    v0 = a3 + 0x400;                                            // 0x001871d0: addiu $v0, $a3, 0x400
label_0x1871d4:
    a3 = a3 + 0x20;                                             // 0x001871f4: addiu $a3, $a3, 0x20
    a2 = a2 + 0x20;                                             // 0x001871f8: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x001871fc: nop 
    if (a3 != v0) goto label_0x1871d4;                          // 0x00187200: bne $a3, $v0, 0x1871d4
    /* nop */                                                   // 0x00187204: nop 
    a1 = 0x2010;                                                // 0x00187208: addiu $a1, $zero, 0x2010
label_0x18720c:
    a0 = s4 + -0x7800;                                          // 0x0018720c: addiu $a0, $s4, -0x7800
    a0 = a0 + 0xc;                                              // 0x00187214: addiu $a0, $a0, 0xc
label_0x18721c:
    a1 = a1 + a0;                                               // 0x0018721c: addu $a1, $a1, $a0
    v1 = *(int32_t*)(a1);                                       // 0x00187220: lw $v1, 0($a1)
    v1 = v1 + 1;                                                // 0x00187224: addiu $v1, $v1, 1
    *(uint32_t*)(a1) = v1;                                      // 0x00187228: sw $v1, 0($a1)
    return;                                                     // 0x00187244: jr $ra
    sp = sp + 0x60;                                             // 0x00187248: addiu $sp, $sp, 0x60
}