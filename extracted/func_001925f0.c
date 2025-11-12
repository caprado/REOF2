void func_001925f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001925f0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001925f8: addu.qb $zero, $sp, $s1
label_0x192608:
    v0 = *(int16_t*)((s1) + 0xc4);                              // 0x00192608: lh $v0, 0xc4($s1)
    at = 0x7000 << 16;                                          // 0x0019260c: lui $at, 0x7000
    at = at | 0x3700;                                           // 0x00192610: ori $at, $at, 0x3700
    a1 = s1 + 0x80;                                             // 0x00192614: addiu $a1, $s1, 0x80
    v0 = v0 << 6;                                               // 0x0019261c: sll $v0, $v0, 6
    func_001910b0();  // 0x191030                                // 0x00192620: jal 0x191030
    a0 = v0 + at;                                               // 0x00192624: addu $a0, $v0, $at
    v1 = *(int32_t*)((s1) + 0xd0);                              // 0x00192628: lw $v1, 0xd0($s1)
    if (v1 == 0) goto label_0x19263c;                           // 0x0019262c: beqz $v1, 0x19263c
    /* nop */                                                   // 0x00192630: nop 
    goto label_0x192608;                                        // 0x00192634: b 0x192608
label_0x19263c:
    v1 = *(int32_t*)((s1) + 0xcc);                              // 0x0019263c: lw $v1, 0xcc($s1)
    if (v1 == 0) goto label_0x192668;                           // 0x00192640: beqz $v1, 0x192668
    /* nop */                                                   // 0x00192644: nop 
    goto label_0x192608;                                        // 0x00192648: b 0x192608
label_0x192650:
    v1 = *(int32_t*)((s1) + 0xcc);                              // 0x00192650: lw $v1, 0xcc($s1)
    if (v1 == 0) goto label_0x192664;                           // 0x00192654: beqz $v1, 0x192664
    /* nop */                                                   // 0x00192658: nop 
    goto label_0x192608;                                        // 0x0019265c: b 0x192608
label_0x192664:
    s1 = *(int32_t*)((s1) + 0xc8);                              // 0x00192664: lw $s1, 0xc8($s1)
label_0x192668:
    if (s1 != s0) goto label_0x192650;                          // 0x00192668: bne $s1, $s0, 0x192650
    /* nop */                                                   // 0x0019266c: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00192674: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00192678: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019267c: jr $ra
    sp = sp + 0x30;                                             // 0x00192680: addiu $sp, $sp, 0x30
}