void func_001aa6d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_184, local_18c;
    
    sp = sp + -0x1b0;                                           // 0x001aa6d0: addiu $sp, $sp, -0x1b0
    v1 = -1;                                                    // 0x001aa6d4: addiu $v1, $zero, -1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001aa6e4: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001aa6ec: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aa6f4: addu.qb $zero, $sp, $s1
    if (s1 == v1) goto label_0x1aa800;                          // 0x001aa704: beq $s1, $v1, 0x1aa800
    str_002358f8 = v1;  // Global at 0x002358f8                 // 0x001aa708: sh $v1, 0($a1)
    at = 0x31 << 16;                                            // 0x001aa70c: lui $at, 0x31
    a1 = 0x23 << 16;                                            // 0x001aa710: lui $a1, 0x23
    s2 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa714: lw $s2, 0x37fc($at)
    a2 = 0x23 << 16;                                            // 0x001aa718: lui $a2, 0x23
    a0 = sp + 0x80;                                             // 0x001aa71c: addiu $a0, $sp, 0x80
    a1 = &str_002358f8;  // "adxsnd.afs"                        // 0x001aa720: addiu $a1, $a1, 0x58f8
    func_0010a4d8();  // 10a4d8                                // 0x001aa724: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa728: addiu $a2, $a2, 0x5880
    a0 = sp + 0x80;                                             // 0x001aa72c: addiu $a0, $sp, 0x80
    func_001a9bd0();  // 1a9bd0                                // 0x001aa730: jal 0x1a9bd0
    if (v0 <= 0) goto label_0x1aa800;                           // 0x001aa738: blez $v0, 0x1aa800
    /* nop */                                                   // 0x001aa73c: nop 
    a0 = sp + 0x180;                                            // 0x001aa740: addiu $a0, $sp, 0x180
    func_00107ab8();  // 107ab8                                // 0x001aa748: jal 0x107ab8
    a2 = 0x30;                                                  // 0x001aa74c: addiu $a2, $zero, 0x30
    func_001d3c20();  // 1d3c20                                // 0x001aa750: jal 0x1d3c20
    v1 = local_184;                                             // 0x001aa758: lw $v1, 0x184($sp)
    if (v1 == 0) goto label_0x1aa800;                           // 0x001aa75c: beqz $v1, 0x1aa800
    s1 = local_18c;                                             // 0x001aa760: lw $s1, 0x18c($sp)
    s3 = s2 + v1;                                               // 0x001aa764: addu $s3, $s2, $v1
    at = 0x31 << 16;                                            // 0x001aa768: lui $at, 0x31
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa76c: lw $v1, 0x37fc($at)
    v0 = 0x18 << 16;                                            // 0x001aa770: lui $v0, 0x18
    goto label_0x1aa7ec;                                        // 0x001aa778: b 0x1aa7ec
    s4 = v1 + v0;                                               // 0x001aa77c: addu $s4, $v1, $v0
label_0x1aa780:
    s5 = *(int32_t*)(s3);                                       // 0x001aa780: lw $s5, 0($s3)
    a0 = s3 + 4;                                                // 0x001aa784: addiu $a0, $s3, 4
    func_001aee20();  // 1aee20                                // 0x001aa788: jal 0x1aee20
    a1 = *(int32_t*)(s2);                                       // 0x001aa790: lw $a1, 0($s2)
    func_001d3a30();  // 1d3a30                                // 0x001aa794: jal 0x1d3a30
    if (v0 == 0) goto label_0x1aa7ac;                           // 0x001aa79c: beqz $v0, 0x1aa7ac
    /* nop */                                                   // 0x001aa7a0: nop 
    v0 = *(int32_t*)(s2);                                       // 0x001aa7a4: lw $v0, 0($s2)
    *(uint16_t*)(s0) = v0;                                      // 0x001aa7a8: sh $v0, 0($s0)
label_0x1aa7ac:
    v0 = s3 + 4;                                                // 0x001aa7ac: addiu $v0, $s3, 4
    s0 = s0 + 2;                                                // 0x001aa7b0: addiu $s0, $s0, 2
    s3 = v0 + s5;                                               // 0x001aa7b4: addu $s3, $v0, $s5
    s6 = s6 + 1;                                                // 0x001aa7b8: addiu $s6, $s6, 1
label_0x1aa7bc:
    v0 = (s6 < s1) ? 1 : 0;                                     // 0x001aa7bc: slt $v0, $s6, $s1
    if (v0 != 0) goto label_0x1aa780;                           // 0x001aa7c0: bnez $v0, 0x1aa780
    /* nop */                                                   // 0x001aa7c4: nop 
    at = (s6 < 7) ? 1 : 0;                                      // 0x001aa7c8: slti $at, $s6, 7
label_0x1aa7cc:
    if (at == 0) goto label_0x1aa7dc;                           // 0x001aa7cc: beqz $at, 0x1aa7dc
    /* nop */                                                   // 0x001aa7d0: nop 
    v0 = -1;                                                    // 0x001aa7d4: addiu $v0, $zero, -1
    *(uint16_t*)(s0) = v0;                                      // 0x001aa7d8: sh $v0, 0($s0)
label_0x1aa7dc:
    func_0018db10();  // 18db10                                // 0x001aa7dc: jal 0x18db10
    /* nop */                                                   // 0x001aa7e0: nop 
    goto label_0x1aa804;                                        // 0x001aa7e4: b 0x1aa804
label_0x1aa7ec:
    at = (0 < s1) ? 1 : 0;                                      // 0x001aa7ec: slt $at, $zero, $s1
    if (at == 0) goto label_0x1aa7cc;                           // 0x001aa7f0: beqz $at, 0x1aa7cc
    at = (s6 < 7) ? 1 : 0;                                      // 0x001aa7f4: slti $at, $s6, 7
    goto label_0x1aa7bc;                                        // 0x001aa7f8: b 0x1aa7bc
    s2 = s4 + 8;                                                // 0x001aa7fc: addiu $s2, $s4, 8
label_0x1aa800:
label_0x1aa804:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001aa804: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001aa808: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001aa80c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aa814: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aa818: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aa81c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aa820: jr $ra
    sp = sp + 0x1b0;                                            // 0x001aa824: addiu $sp, $sp, 0x1b0
}