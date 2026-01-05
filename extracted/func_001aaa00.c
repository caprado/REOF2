void func_001aaa00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x350;                                           // 0x001aaa00: addiu $sp, $sp, -0x350
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001aaa08: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aaa10: addu.qb $zero, $sp, $s1
    a0 = sp + 0x250;                                            // 0x001aaa1c: addiu $a0, $sp, 0x250
    func_0010ac68();  // 10ac68                                // 0x001aaa24: jal 0x10ac68
    func_0010ca50();  // 10ca50                                // 0x001aaa2c: jal 0x10ca50
    a0 = sp + 0x250;                                            // 0x001aaa30: addiu $a0, $sp, 0x250
    s0 = sp + 0x250;                                            // 0x001aaa34: addiu $s0, $sp, 0x250
    func_0010ae00();  // 10ae00                                // 0x001aaa38: jal 0x10ae00
    t6 = 0x5c;                                                  // 0x001aaa48: addiu $t6, $zero, 0x5c
    t5 = 0x2f;                                                  // 0x001aaa4c: addiu $t5, $zero, 0x2f
    v1 = 0x4d;                                                  // 0x001aaa50: addiu $v1, $zero, 0x4d
    a0 = 0x4f;                                                  // 0x001aaa54: addiu $a0, $zero, 0x4f
    a1 = 0x52;                                                  // 0x001aaa58: addiu $a1, $zero, 0x52
    t3 = 0x54;                                                  // 0x001aaa5c: addiu $t3, $zero, 0x54
    t4 = 0x44;                                                  // 0x001aaa60: addiu $t4, $zero, 0x44
    t1 = 0x49;                                                  // 0x001aaa64: addiu $t1, $zero, 0x49
    goto label_0x1aab54;                                        // 0x001aaa68: b 0x1aab54
    t2 = 0x45;                                                  // 0x001aaa6c: addiu $t2, $zero, 0x45
label_0x1aaa70:
    if (t7 != a1) goto label_0x1aaab4;                          // 0x001aaa74: bne $t7, $a1, 0x1aaab4
    /* nop */                                                   // 0x001aaa78: nop 
    t0 = *(int8_t*)((s0) + 1);                                  // 0x001aaa7c: lb $t0, 1($s0)
    if (t0 != a0) goto label_0x1aaab4;                          // 0x001aaa80: bne $t0, $a0, 0x1aaab4
    /* nop */                                                   // 0x001aaa84: nop 
    t0 = *(int8_t*)((s0) + 2);                                  // 0x001aaa88: lb $t0, 2($s0)
    if (t0 != v1) goto label_0x1aaab4;                          // 0x001aaa8c: bne $t0, $v1, 0x1aaab4
    /* nop */                                                   // 0x001aaa90: nop 
    t0 = *(int8_t*)((s0) + 3);                                  // 0x001aaa94: lb $t0, 3($s0)
    if (t0 == t6) goto label_0x1aaaa8;                          // 0x001aaa98: beq $t0, $t6, 0x1aaaa8
    /* nop */                                                   // 0x001aaa9c: nop 
    if (t0 != t5) goto label_0x1aaab4;                          // 0x001aaaa0: bne $t0, $t5, 0x1aaab4
    /* nop */                                                   // 0x001aaaa4: nop 
label_0x1aaaa8:
    a3 = 1;                                                     // 0x001aaaa8: addiu $a3, $zero, 1
    goto label_0x1aab60;                                        // 0x001aaaac: b 0x1aab60
    s0 = s0 + 4;                                                // 0x001aaab0: addiu $s0, $s0, 4
label_0x1aaab4:
    if (t7 != a1) goto label_0x1aaaf4;                          // 0x001aaab4: bne $t7, $a1, 0x1aaaf4
    /* nop */                                                   // 0x001aaab8: nop 
    t0 = *(int8_t*)((s0) + 1);                                  // 0x001aaabc: lb $t0, 1($s0)
    if (t0 != t4) goto label_0x1aaaf4;                          // 0x001aaac0: bne $t0, $t4, 0x1aaaf4
    /* nop */                                                   // 0x001aaac4: nop 
    t0 = *(int8_t*)((s0) + 2);                                  // 0x001aaac8: lb $t0, 2($s0)
    if (t0 != t3) goto label_0x1aaaf4;                          // 0x001aaacc: bne $t0, $t3, 0x1aaaf4
    /* nop */                                                   // 0x001aaad0: nop 
    t0 = *(int8_t*)((s0) + 3);                                  // 0x001aaad4: lb $t0, 3($s0)
    if (t0 == t6) goto label_0x1aaae8;                          // 0x001aaad8: beq $t0, $t6, 0x1aaae8
    /* nop */                                                   // 0x001aaadc: nop 
    if (t0 != t5) goto label_0x1aaaf4;                          // 0x001aaae0: bne $t0, $t5, 0x1aaaf4
    /* nop */                                                   // 0x001aaae4: nop 
label_0x1aaae8:
    a3 = 1;                                                     // 0x001aaae8: addiu $a3, $zero, 1
    goto label_0x1aab60;                                        // 0x001aaaec: b 0x1aab60
    s0 = s0 + 4;                                                // 0x001aaaf0: addiu $s0, $s0, 4
label_0x1aaaf4:
    if (t7 != t2) goto label_0x1aab40;                          // 0x001aaaf4: bne $t7, $t2, 0x1aab40
    /* nop */                                                   // 0x001aaaf8: nop 
    t0 = *(int8_t*)((s0) + 1);                                  // 0x001aaafc: lb $t0, 1($s0)
    if (t0 != t4) goto label_0x1aab40;                          // 0x001aab00: bne $t0, $t4, 0x1aab40
    /* nop */                                                   // 0x001aab04: nop 
    t0 = *(int8_t*)((s0) + 2);                                  // 0x001aab08: lb $t0, 2($s0)
    if (t0 != t1) goto label_0x1aab40;                          // 0x001aab0c: bne $t0, $t1, 0x1aab40
    /* nop */                                                   // 0x001aab10: nop 
    t0 = *(int8_t*)((s0) + 3);                                  // 0x001aab14: lb $t0, 3($s0)
    if (t0 != t3) goto label_0x1aab40;                          // 0x001aab18: bne $t0, $t3, 0x1aab40
    /* nop */                                                   // 0x001aab1c: nop 
    t0 = *(int8_t*)((s0) + 4);                                  // 0x001aab20: lb $t0, 4($s0)
    if (t0 == t6) goto label_0x1aab34;                          // 0x001aab24: beq $t0, $t6, 0x1aab34
    /* nop */                                                   // 0x001aab28: nop 
    if (t0 != t5) goto label_0x1aab40;                          // 0x001aab2c: bne $t0, $t5, 0x1aab40
    /* nop */                                                   // 0x001aab30: nop 
label_0x1aab34:
    a3 = 1;                                                     // 0x001aab34: addiu $a3, $zero, 1
    goto label_0x1aab60;                                        // 0x001aab38: b 0x1aab60
    s0 = s0 + 5;                                                // 0x001aab3c: addiu $s0, $s0, 5
label_0x1aab40:
    a2 = a2 + 1;                                                // 0x001aab40: addiu $a2, $a2, 1
    t0 = a2 + 3;                                                // 0x001aab44: addiu $t0, $a2, 3
    at = (t0 < v0) ? 1 : 0;                                     // 0x001aab48: slt $at, $t0, $v0
    if (at == 0) goto label_0x1aab60;                           // 0x001aab4c: beqz $at, 0x1aab60
    s0 = s0 + 1;                                                // 0x001aab50: addiu $s0, $s0, 1
label_0x1aab54:
    t0 = *(int8_t*)(s0);                                        // 0x001aab54: lb $t0, 0($s0)
    if (t0 != 0) goto label_0x1aaa70;                           // 0x001aab58: bnez $t0, 0x1aaa70
label_0x1aab60:
    if (a3 != 0) goto label_0x1aab70;                           // 0x001aab60: bnez $a3, 0x1aab70
    s0 = sp + 0x250;                                            // 0x001aab68: addiu $s0, $sp, 0x250
label_0x1aab70:
    func_0010ac68();  // 10ac68                                // 0x001aab70: jal 0x10ac68
    a0 = sp + 0x150;                                            // 0x001aab74: addiu $a0, $sp, 0x150
    t0 = sp + 0x150;                                            // 0x001aab78: addiu $t0, $sp, 0x150
    a2 = 0x5f;                                                  // 0x001aab7c: addiu $a2, $zero, 0x5f
    a3 = 0x5c;                                                  // 0x001aab80: addiu $a3, $zero, 0x5c
    a1 = 0x2f;                                                  // 0x001aab84: addiu $a1, $zero, 0x2f
    a0 = 0x2e;                                                  // 0x001aab88: addiu $a0, $zero, 0x2e
    goto label_0x1aabdc;                                        // 0x001aab8c: b 0x1aabdc
    v0 = 0x2d;                                                  // 0x001aab90: addiu $v0, $zero, 0x2d
label_0x1aab94:
    if (v1 != a3) goto label_0x1aaba8;                          // 0x001aab9c: bne $v1, $a3, 0x1aaba8
    /* nop */                                                   // 0x001aaba0: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001aaba4: sb $a2, 0($t0)
label_0x1aaba8:
    v1 = *(int8_t*)(t0);                                        // 0x001aaba8: lb $v1, 0($t0)
    if (v1 != a1) goto label_0x1aabb8;                          // 0x001aabac: bne $v1, $a1, 0x1aabb8
    /* nop */                                                   // 0x001aabb0: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001aabb4: sb $a2, 0($t0)
label_0x1aabb8:
    v1 = *(int8_t*)(t0);                                        // 0x001aabb8: lb $v1, 0($t0)
    if (v1 != a0) goto label_0x1aabc8;                          // 0x001aabbc: bne $v1, $a0, 0x1aabc8
    /* nop */                                                   // 0x001aabc0: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001aabc4: sb $a2, 0($t0)
label_0x1aabc8:
    v1 = *(int8_t*)(t0);                                        // 0x001aabc8: lb $v1, 0($t0)
    if (v1 != v0) goto label_0x1aabd8;                          // 0x001aabcc: bne $v1, $v0, 0x1aabd8
    /* nop */                                                   // 0x001aabd0: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001aabd4: sb $a2, 0($t0)
label_0x1aabd8:
    t0 = t0 + 1;                                                // 0x001aabd8: addiu $t0, $t0, 1
label_0x1aabdc:
    v1 = *(int8_t*)(t0);                                        // 0x001aabdc: lb $v1, 0($t0)
    if (v1 != 0) goto label_0x1aab94;                           // 0x001aabe0: bnez $v1, 0x1aab94
    goto label_0x1aac58;                                        // 0x001aabe8: b 0x1aac58
    v0 = (s3 < s1) ? 1 : 0;                                     // 0x001aabec: slt $v0, $s3, $s1
label_0x1aabf0:
    s0 = *(int32_t*)(s2);                                       // 0x001aabf0: lw $s0, 0($s2)
    func_0010ae00();  // 10ae00                                // 0x001aabf4: jal 0x10ae00
    goto label_0x1aac1c;                                        // 0x001aabfc: b 0x1aac1c
label_0x1aac04:
    a0 = *(int8_t*)(s0);                                        // 0x001aac04: lb $a0, 0($s0)
    v1 = a1 + sp;                                               // 0x001aac08: addu $v1, $a1, $sp
    a1 = a1 + 1;                                                // 0x001aac0c: addiu $a1, $a1, 1
    a0 = a0 ^ 0xff;                                             // 0x001aac10: xori $a0, $a0, 0xff
    s0 = s0 + 1;                                                // 0x001aac14: addiu $s0, $s0, 1
    *(uint8_t*)((v1) + 0x50) = a0;                              // 0x001aac18: sb $a0, 0x50($v1)
label_0x1aac1c:
    v1 = (a1 < v0) ? 1 : 0;                                     // 0x001aac1c: slt $v1, $a1, $v0
    if (v1 != 0) goto label_0x1aac04;                           // 0x001aac20: bnez $v1, 0x1aac04
    /* nop */                                                   // 0x001aac24: nop 
    v0 = a1 + sp;                                               // 0x001aac28: addu $v0, $a1, $sp
    a0 = sp + 0x150;                                            // 0x001aac2c: addiu $a0, $sp, 0x150
    *(uint8_t*)((v0) + 0x50) = 0;                               // 0x001aac30: sb $zero, 0x50($v0)
    func_0010ab20();  // 10ab20                                // 0x001aac34: jal 0x10ab20
    a1 = sp + 0x50;                                             // 0x001aac38: addiu $a1, $sp, 0x50
    if (v0 != 0) goto label_0x1aac4c;                           // 0x001aac3c: bnez $v0, 0x1aac4c
    /* nop */                                                   // 0x001aac40: nop 
    goto label_0x1aac60;                                        // 0x001aac44: b 0x1aac60
label_0x1aac4c:
    s2 = s2 + 4;                                                // 0x001aac4c: addiu $s2, $s2, 4
    s3 = s3 + 1;                                                // 0x001aac50: addiu $s3, $s3, 1
    v0 = (s3 < s1) ? 1 : 0;                                     // 0x001aac54: slt $v0, $s3, $s1
label_0x1aac58:
    if (v0 != 0) goto label_0x1aabf0;                           // 0x001aac58: bnez $v0, 0x1aabf0
    v0 = -1;                                                    // 0x001aac5c: addiu $v0, $zero, -1
label_0x1aac60:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aac68: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aac6c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aac70: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aac74: jr $ra
    sp = sp + 0x350;                                            // 0x001aac78: addiu $sp, $sp, 0x350
}