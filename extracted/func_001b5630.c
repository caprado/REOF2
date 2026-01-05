void func_001b5630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b5630: addiu $sp, $sp, -0x20
    a2 = *(int32_t*)((a0) + 0x20);                              // 0x001b563c: lw $a2, 0x20($a0)
    v0 = *(int32_t*)((a0) + 0x28);                              // 0x001b5640: lw $v0, 0x28($a0)
    t0 = *(int32_t*)((a0) + 0x10);                              // 0x001b5644: lw $t0, 0x10($a0)
    /* multiply: a1 * a2 -> hi:lo */                            // 0x001b5648: mult $ac3, $a1, $a2
    if (t0 != 0) goto label_0x1b566c;                           // 0x001b564c: bnez $t0, 0x1b566c
    v0 = v0 + v1;                                               // 0x001b5650: addu $v0, $v0, $v1
    a1 = *(int32_t*)((a0) + 0x14);                              // 0x001b5654: lw $a1, 0x14($a0)
    v1 = 1;                                                     // 0x001b5658: addiu $v1, $zero, 1
    if (a1 != v1) goto label_0x1b566c;                          // 0x001b565c: bne $a1, $v1, 0x1b566c
    /* nop */                                                   // 0x001b5660: nop 
    goto label_0x1b5718;                                        // 0x001b5664: b 0x1b5718
label_0x1b566c:
    a1 = *(int32_t*)((a0) + 0x18);                              // 0x001b566c: lw $a1, 0x18($a0)
    v1 = *(int32_t*)((a0) + 0x64);                              // 0x001b5670: lw $v1, 0x64($a0)
    a3 = *(int32_t*)((a0) + 0x48);                              // 0x001b5674: lw $a3, 0x48($a0)
    a3 = a3 << 2;                                               // 0x001b567c: sll $a3, $a3, 2
    a3 = a3 + a0;                                               // 0x001b5680: addu $a3, $a3, $a0
    v1 = *(int32_t*)((a3) + 0x2c);                              // 0x001b5684: lw $v1, 0x2c($a3)
    if (t0 != 0) goto label_0x1b56a4;                           // 0x001b5688: bnez $t0, 0x1b56a4
    s0 = v1 + a1;                                               // 0x001b568c: addu $s0, $v1, $a1
    func_00107ab8();  // 107ab8                                // 0x001b5694: jal 0x107ab8
    goto label_0x1b5714;                                        // 0x001b569c: b 0x1b5714
label_0x1b56a4:
    a1 = *(int32_t*)((a0) + 0xc);                               // 0x001b56a4: lw $a1, 0xc($a0)
    v1 = -4;                                                    // 0x001b56a8: addiu $v1, $zero, -4
    a0 = a1 + 3;                                                // 0x001b56b4: addiu $a0, $a1, 3
    v1 = a0 & v1;                                               // 0x001b56b8: and $v1, $a0, $v1
    /* multiply: a1 * v1 -> hi:lo */                            // 0x001b56bc: mult $ac3, $a1, $v1
    goto label_0x1b5704;                                        // 0x001b56c0: b 0x1b5704
    t0 = (unsigned)v1 >> 2;                                     // 0x001b56c4: srl $t0, $v1, 2
label_0x1b56c8:
    a2 = *(uint8_t*)(v0);                                       // 0x001b56c8: lbu $a2, 0($v0)
    t1 = t1 + 1;                                                // 0x001b56cc: addiu $t1, $t1, 1
    v1 = a2 & 0xc0;                                             // 0x001b56d0: andi $v1, $a2, 0xc0
    v0 = v0 + 1;                                                // 0x001b56d4: addiu $v0, $v0, 1
    a0 = v1 >> 6;                                               // 0x001b56d8: sra $a0, $v1, 6
    v1 = a2 & 0x30;                                             // 0x001b56dc: andi $v1, $a2, 0x30
    a1 = a0 | v1;                                               // 0x001b56e0: or $a1, $a0, $v1
    v1 = a2 & 0xc;                                              // 0x001b56e4: andi $v1, $a2, 0xc
    a0 = v1 << 6;                                               // 0x001b56e8: sll $a0, $v1, 6
    v1 = a2 & 3;                                                // 0x001b56ec: andi $v1, $a2, 3
    a0 = a0 | a1;                                               // 0x001b56f0: or $a0, $a0, $a1
    v1 = v1 << 0xc;                                             // 0x001b56f4: sll $v1, $v1, 0xc
    v1 = v1 | a0;                                               // 0x001b56f8: or $v1, $v1, $a0
    *(uint16_t*)(s0) = v1;                                      // 0x001b56fc: sh $v1, 0($s0)
    s0 = s0 + 2;                                                // 0x001b5700: addiu $s0, $s0, 2
label_0x1b5704:
    v1 = (t1 < t0) ? 1 : 0;                                     // 0x001b5704: slt $v1, $t1, $t0
    if (v1 != 0) goto label_0x1b56c8;                           // 0x001b5708: bnez $v1, 0x1b56c8
    /* nop */                                                   // 0x001b570c: nop 
label_0x1b5714:
label_0x1b5718:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b5718: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b571c: jr $ra
    sp = sp + 0x20;                                             // 0x001b5720: addiu $sp, $sp, 0x20
}