void func_001aa480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1a4, local_1ac, local_1b4, local_1c4, local_b0;
    
    sp = sp + -0x1d0;                                           // 0x001aa480: addiu $sp, $sp, -0x1d0
    at = 0x31 << 16;                                            // 0x001aa484: lui $at, 0x31
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001aa490: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001aa498: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001aa4a8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aa4b0: addu.qb $zero, $sp, $s1
    s3 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa4b8: lw $s3, 0x37fc($at)
    if (a0 == 0) goto label_0x1aa4d8;                           // 0x001aa4bc: beqz $a0, 0x1aa4d8
    v1 = -1;                                                    // 0x001aa4c4: addiu $v1, $zero, -1
    if (s5 != v1) goto label_0x1aa578;                          // 0x001aa4c8: bne $s5, $v1, 0x1aa578
    /* nop */                                                   // 0x001aa4cc: nop 
    goto label_0x1aa698;                                        // 0x001aa4d0: b 0x1aa698
label_0x1aa4d8:
    func_001d3c30();  // 1d3c30                                // 0x001aa4d8: jal 0x1d3c30
    v1 = -1;                                                    // 0x001aa4e4: addiu $v1, $zero, -1
    if (s5 == v1) goto label_0x1aa694;                          // 0x001aa4e8: beq $s5, $v1, 0x1aa694
    func_001d4140();  // 1d4140                                // 0x001aa4f8: jal 0x1d4140
    if (s0 == 0) goto label_0x1aa694;                           // 0x001aa504: beqz $s0, 0x1aa694
    func_0010ae00();  // 10ae00                                // 0x001aa50c: jal 0x10ae00
    /* nop */                                                   // 0x001aa510: nop 
    if (v0 == 0) goto label_0x1aa694;                           // 0x001aa514: beqz $v0, 0x1aa694
    func_0010b460();  // 10b460                                // 0x001aa51c: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001aa520: addiu $a1, $zero, 0x5c
    if (v0 == 0) goto label_0x1aa694;                           // 0x001aa524: beqz $v0, 0x1aa694
    a1 = v0 + 1;                                                // 0x001aa528: addiu $a1, $v0, 1
    func_0010ac68();  // 10ac68                                // 0x001aa52c: jal 0x10ac68
    a0 = sp + 0xa0;                                             // 0x001aa530: addiu $a0, $sp, 0xa0
    a0 = sp + 0xa0;                                             // 0x001aa534: addiu $a0, $sp, 0xa0
    func_0010b460();  // 10b460                                // 0x001aa538: jal 0x10b460
    a1 = 0x2e;                                                  // 0x001aa53c: addiu $a1, $zero, 0x2e
    if (v0 == 0) goto label_0x1aa54c;                           // 0x001aa540: beqz $v0, 0x1aa54c
    a1 = 0x23 << 16;                                            // 0x001aa544: lui $a1, 0x23
    g_00180000 = 0;  // Global at 0x00180000                    // 0x001aa548: sb $zero, 0($v0)
label_0x1aa54c:
    a0 = sp + 0xa0;                                             // 0x001aa54c: addiu $a0, $sp, 0xa0
    func_0010a860();  // 10a860                                // 0x001aa550: jal 0x10a860
    a1 = a1 + 0x58e8;                                           // 0x001aa554: addiu $a1, $a1, 0x58e8
    a0 = sp + 0xa0;                                             // 0x001aa558: addiu $a0, $sp, 0xa0
    func_001a9b30();  // 1a9b30                                // 0x001aa560: jal 0x1a9b30
    local_b0 = 0;                                               // 0x001aa564: sb $zero, 0xb0($sp)
    if (v0 > 0) goto label_0x1aa5e0;                            // 0x001aa568: bgtz $v0, 0x1aa5e0
    a0 = sp + 0x1a0;                                            // 0x001aa56c: addiu $a0, $sp, 0x1a0
    goto label_0x1aa694;                                        // 0x001aa570: b 0x1aa694
    /* nop */                                                   // 0x001aa574: nop 
label_0x1aa578:
    v0 = 1 << 16;                                               // 0x001aa578: lui $v0, 1
    v0 = s4 & v0;                                               // 0x001aa57c: and $v0, $s4, $v0
    if (v0 == 0) goto label_0x1aa5b0;                           // 0x001aa580: beqz $v0, 0x1aa5b0
    a1 = 0x23 << 16;                                            // 0x001aa58c: lui $a1, 0x23
    a0 = sp + 0xa0;                                             // 0x001aa590: addiu $a0, $sp, 0xa0
    func_0010a4d8();  // 10a4d8                                // 0x001aa594: jal 0x10a4d8
    a1 = &str_002358f0;  // "%s%s.NBD"                          // 0x001aa598: addiu $a1, $a1, 0x58f0
    a0 = sp + 0xa0;                                             // 0x001aa59c: addiu $a0, $sp, 0xa0
    func_001a9b30();  // 1a9b30                                // 0x001aa5a0: jal 0x1a9b30
    goto label_0x1aa5d4;                                        // 0x001aa5a8: b 0x1aa5d4
    /* nop */                                                   // 0x001aa5ac: nop 
label_0x1aa5b0:
    a1 = 0x23 << 16;                                            // 0x001aa5b0: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001aa5b4: lui $a2, 0x23
    a0 = sp + 0xa0;                                             // 0x001aa5b8: addiu $a0, $sp, 0xa0
    a1 = &str_002358f8;  // "adxsnd.afs"                        // 0x001aa5bc: addiu $a1, $a1, 0x58f8
    func_0010a4d8();  // 10a4d8                                // 0x001aa5c0: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa5c4: addiu $a2, $a2, 0x5880
    a0 = sp + 0xa0;                                             // 0x001aa5c8: addiu $a0, $sp, 0xa0
    func_001a9bd0();  // 1a9bd0                                // 0x001aa5cc: jal 0x1a9bd0
label_0x1aa5d4:
    if (v0 <= 0) goto label_0x1aa694;                           // 0x001aa5d4: blez $v0, 0x1aa694
    /* nop */                                                   // 0x001aa5d8: nop 
    a0 = sp + 0x1a0;                                            // 0x001aa5dc: addiu $a0, $sp, 0x1a0
label_0x1aa5e0:
    func_00107ab8();  // 107ab8                                // 0x001aa5e4: jal 0x107ab8
    a2 = 0x30;                                                  // 0x001aa5e8: addiu $a2, $zero, 0x30
    func_001d3c20();  // 1d3c20                                // 0x001aa5ec: jal 0x1d3c20
    v1 = local_1a4;                                             // 0x001aa5f4: lw $v1, 0x1a4($sp)
    if (v1 == 0) goto label_0x1aa694;                           // 0x001aa5f8: beqz $v1, 0x1aa694
    fp = local_1ac;                                             // 0x001aa5fc: lw $fp, 0x1ac($sp)
    s1 = s3 + v1;                                               // 0x001aa600: addu $s1, $s3, $v1
    at = 0x31 << 16;                                            // 0x001aa604: lui $at, 0x31
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa608: lw $v1, 0x37fc($at)
    v0 = 0x18 << 16;                                            // 0x001aa60c: lui $v0, 0x18
    goto label_0x1aa648;                                        // 0x001aa614: b 0x1aa648
    s2 = v1 + v0;                                               // 0x001aa618: addu $s2, $v1, $v0
label_0x1aa61c:
    s7 = *(int32_t*)(s1);                                       // 0x001aa61c: lw $s7, 0($s1)
    a0 = s1 + 4;                                                // 0x001aa620: addiu $a0, $s1, 4
    func_001aee20();  // 1aee20                                // 0x001aa624: jal 0x1aee20
    func_001d3a30();  // 1d3a30                                // 0x001aa630: jal 0x1d3a30
    v0 = s1 + 4;                                                // 0x001aa638: addiu $v0, $s1, 4
    s5 = s5 + 1;                                                // 0x001aa63c: addiu $s5, $s5, 1
    s1 = v0 + s7;                                               // 0x001aa640: addu $s1, $v0, $s7
    s0 = s0 + 1;                                                // 0x001aa644: addiu $s0, $s0, 1
label_0x1aa648:
    v0 = (s0 < fp) ? 1 : 0;                                     // 0x001aa648: slt $v0, $s0, $fp
    if (v0 != 0) goto label_0x1aa61c;                           // 0x001aa64c: bnez $v0, 0x1aa61c
    /* nop */                                                   // 0x001aa650: nop 
    func_0018db10();  // 18db10                                // 0x001aa654: jal 0x18db10
    /* nop */                                                   // 0x001aa658: nop 
    v1 = local_1b4;                                             // 0x001aa65c: lw $v1, 0x1b4($sp)
    if (v1 == 0) goto label_0x1aa694;                           // 0x001aa660: beqz $v1, 0x1aa694
    /* nop */                                                   // 0x001aa664: nop 
    a0 = local_1c4;                                             // 0x001aa668: lw $a0, 0x1c4($sp)
    if (a0 == 0) goto label_0x1aa694;                           // 0x001aa66c: beqz $a0, 0x1aa694
    a3 = s3 + a0;                                               // 0x001aa674: addu $a3, $s3, $a0
    a2 = s3 + v1;                                               // 0x001aa67c: addu $a2, $s3, $v1
    func_001d61c0();  // 1d61c0                                // 0x001aa684: jal 0x1d61c0
    func_0018db10();  // 18db10                                // 0x001aa68c: jal 0x18db10
    /* nop */                                                   // 0x001aa690: nop 
label_0x1aa694:
label_0x1aa698:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001aa698: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001aa6a0: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001aa6a4: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001aa6a8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aa6b0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aa6b4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aa6b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aa6bc: jr $ra
    sp = sp + 0x1d0;                                            // 0x001aa6c0: addiu $sp, $sp, 0x1d0
}