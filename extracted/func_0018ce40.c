void func_0018ce40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0018ce40: addiu $sp, $sp, -0x60
    v0 = 2;                                                     // 0x0018ce44: addiu $v0, $zero, 2
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018ce50: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018ce60: addu.qb $zero, $sp, $s1
    if (a0 != v0) goto label_0x18ceec;                          // 0x0018ce68: bne $a0, $v0, 0x18ceec
label_0x18ce70:
    at = 0x29 << 16;                                            // 0x0018ce70: lui $at, 0x29
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0018ce74: lw $v0, 4($s2)
    v1 = g_00290374;  // Global at 0x00290374                   // 0x0018ce78: lw $v1, 0x374($at)
    v0 = v0 + -1;                                               // 0x0018ce7c: addiu $v0, $v0, -1
    s0 = v1 << 2;                                               // 0x0018ce80: sll $s0, $v1, 2
    a0 = s0 + s2;                                               // 0x0018ce84: addu $a0, $s0, $s2
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x0018ce88: lw $v1, 0x14($a0)
    at = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0018ce8c: sltu $at, $v0, $v1
    if (at != 0) goto label_0x18cfc4;                           // 0x0018ce90: bnez $at, 0x18cfc4
    s1 = a0 + 0x14;                                             // 0x0018ce94: addiu $s1, $a0, 0x14
    func_0018db10();  // 0x18db00                                // 0x0018ce98: jal 0x18db00
    a0 = *(int32_t*)((a0) + 0xc);                               // 0x0018ce9c: lw $a0, 0xc($a0)
    v1 = *(int32_t*)(s1);                                       // 0x0018cea0: lw $v1, 0($s1)
    a1 = s0 + s2;                                               // 0x0018cea4: addu $a1, $s0, $s2
    v1 = v1 + 1;                                                // 0x0018cea8: addiu $v1, $v1, 1
    *(uint32_t*)(s1) = v1;                                      // 0x0018ceac: sw $v1, 0($s1)
    v1 = g_7000001c;  // Global at 0x7000001c                   // 0x0018ceb0: lw $v1, 0x1c($a1)
    a0 = v1 + 1;                                                // 0x0018ceb4: addiu $a0, $v1, 1
    v1 = v1 << 2;                                               // 0x0018ceb8: sll $v1, $v1, 2
    g_7000001c = a0;  // Global at 0x7000001c                   // 0x0018cebc: sw $a0, 0x1c($a1)
    v0 = v0 + v1;                                               // 0x0018cec0: addu $v0, $v0, $v1
    *(uint32_t*)(v0) = s4;                                      // 0x0018cec4: sw $s4, 0($v0)
    v1 = g_7000001c;  // Global at 0x7000001c                   // 0x0018cec8: lw $v1, 0x1c($a1)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0018cecc: lw $v0, 4($s2)
    if (v1 != v0) goto label_0x18cedc;                          // 0x0018ced0: bne $v1, $v0, 0x18cedc
    a2 = a1 + 0x1c;                                             // 0x0018ced4: addiu $a2, $a1, 0x1c
    g_7000001c = 0;  // Global at 0x7000001c                    // 0x0018ced8: sw $zero, 0($a2)
label_0x18cedc:
    *(uint32_t*)((s2) + 0x34) = s4;                             // 0x0018cedc: sw $s4, 0x34($s2)
    goto label_0x18cfd0;                                        // 0x0018cee4: b 0x18cfd0
    *(uint32_t*)((s2) + 0x38) = s3;                             // 0x0018cee8: sw $s3, 0x38($s2)
label_0x18ceec:
    a1 = *(int32_t*)((s2) + 0x34);                              // 0x0018ceec: lw $a1, 0x34($s2)
    if (a1 == 0) goto label_0x18ce70;                           // 0x0018cef0: beqz $a1, 0x18ce70
    /* nop */                                                   // 0x0018cef4: nop 
    v0 = *(int32_t*)((s2) + 0x38);                              // 0x0018cef8: lw $v0, 0x38($s2)
    if (v0 == 0) goto label_0x18ce70;                           // 0x0018cefc: beqz $v0, 0x18ce70
    /* nop */                                                   // 0x0018cf00: nop 
    v1 = 0xf000 << 16;                                          // 0x0018cf04: lui $v1, 0xf000
    v1 = a1 & v1;                                               // 0x0018cf08: and $v1, $a1, $v1
    v1 = (unsigned)v1 >> 0x1c;                                  // 0x0018cf0c: srl $v1, $v1, 0x1c
    at = ((unsigned)v1 < (unsigned)6) ? 1 : 0;                  // 0x0018cf10: sltiu $at, $v1, 6
    if (at == 0) goto label_0x18ce70;                           // 0x0018cf14: beqz $at, 0x18ce70
    /* nop */                                                   // 0x0018cf18: nop 
    a1 = 0x23 << 16;                                            // 0x0018cf1c: lui $a1, 0x23
    v1 = v1 << 2;                                               // 0x0018cf20: sll $v1, $v1, 2
    a1 = a1 + -0x5c50;                                          // 0x0018cf24: addiu $a1, $a1, -0x5c50
    v1 = v1 + a1;                                               // 0x0018cf28: addu $v1, $v1, $a1
    v1 = g_f0000000;  // Global at 0xf0000000                   // 0x0018cf2c: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x0018cf30: jr $v1
    /* nop */                                                   // 0x0018cf34: nop 
    a2 = *(int32_t*)(v0);                                       // 0x0018cf38: lw $a2, 0($v0)
    a1 = 0x7000 << 16;                                          // 0x0018cf3c: lui $a1, 0x7000
    v1 = a2 & a1;                                               // 0x0018cf40: and $v1, $a2, $a1
    if (v1 == a1) goto label_0x18cf54;                          // 0x0018cf44: beq $v1, $a1, 0x18cf54
    a1 = a2 & 0xffff;                                           // 0x0018cf48: andi $a1, $a2, 0xffff
    goto label_0x18ce70;                                        // 0x0018cf4c: b 0x18ce70
    /* nop */                                                   // 0x0018cf50: nop 
label_0x18cf54:
    v1 = 0x2000 << 16;                                          // 0x0018cf54: lui $v1, 0x2000
    a1 = a1 + v1;                                               // 0x0018cf58: addu $a1, $a1, $v1
    *(uint32_t*)(v0) = a1;                                      // 0x0018cf60: sw $a1, 0($v0)
    goto label_0x18cf9c;                                        // 0x0018cf68: b 0x18cf9c
    *(uint32_t*)((v0) + 4) = v1;                                // 0x0018cf6c: sw $v1, 4($v0)
    a1 = *(int32_t*)(v0);                                       // 0x0018cf70: lw $a1, 0($v0)
    v1 = 0x7000 << 16;                                          // 0x0018cf74: lui $v1, 0x7000
    v1 = a1 & v1;                                               // 0x0018cf78: and $v1, $a1, $v1
    if (v1 == 0) goto label_0x18cf8c;                           // 0x0018cf7c: beqz $v1, 0x18cf8c
    /* nop */                                                   // 0x0018cf80: nop 
    goto label_0x18ce70;                                        // 0x0018cf84: b 0x18ce70
    /* nop */                                                   // 0x0018cf88: nop 
label_0x18cf8c:
    a1 = a1 & 0xffff;                                           // 0x0018cf8c: andi $a1, $a1, 0xffff
    v1 = 0x3000 << 16;                                          // 0x0018cf90: lui $v1, 0x3000
    v1 = a1 + v1;                                               // 0x0018cf94: addu $v1, $a1, $v1
    *(uint32_t*)(v0) = v1;                                      // 0x0018cf98: sw $v1, 0($v0)
label_0x18cf9c:
    v0 = 1;                                                     // 0x0018cf9c: addiu $v0, $zero, 1
    if (a0 != v0) goto label_0x18cfb4;                          // 0x0018cfa0: bne $a0, $v0, 0x18cfb4
    /* nop */                                                   // 0x0018cfa4: nop 
    *(uint32_t*)((s2) + 0x34) = 0;                              // 0x0018cfa8: sw $zero, 0x34($s2)
    goto label_0x18cfbc;                                        // 0x0018cfac: b 0x18cfbc
    *(uint32_t*)((s2) + 0x38) = 0;                              // 0x0018cfb0: sw $zero, 0x38($s2)
label_0x18cfb4:
    *(uint32_t*)((s2) + 0x34) = s4;                             // 0x0018cfb4: sw $s4, 0x34($s2)
    *(uint32_t*)((s2) + 0x38) = s3;                             // 0x0018cfb8: sw $s3, 0x38($s2)
label_0x18cfbc:
    goto label_0x18cfd0;                                        // 0x0018cfbc: b 0x18cfd0
label_0x18cfc4:
    *(uint32_t*)((s2) + 0x34) = 0;                              // 0x0018cfc4: sw $zero, 0x34($s2)
    v0 = -1;                                                    // 0x0018cfc8: addiu $v0, $zero, -1
    *(uint32_t*)((s2) + 0x38) = 0;                              // 0x0018cfcc: sw $zero, 0x38($s2)
label_0x18cfd0:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018cfd4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018cfdc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018cfe0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018cfe4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018cfe8: jr $ra
    sp = sp + 0x60;                                             // 0x0018cfec: addiu $sp, $sp, 0x60
}