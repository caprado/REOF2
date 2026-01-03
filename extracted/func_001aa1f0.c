void func_001aa1f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_194, local_19c;
    
    sp = sp + -0x210;                                           // 0x001aa1f0: addiu $sp, $sp, -0x210
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001aa1f8: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001aa200: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001aa208: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aa210: addu.qb $zero, $sp, $s1
    v0 = g_002358d3;  // Global at 0x002358d3                   // 0x001aa218: lbu $v0, 3($a1)
    v0 = (v0 < 0x14) ? 1 : 0;                                   // 0x001aa21c: slti $v0, $v0, 0x14
    if (v0 != 0) goto label_0x1aa238;                           // 0x001aa220: bnez $v0, 0x1aa238
    v0 = *(int32_t*)((s5) + 0x34);                              // 0x001aa228: lw $v0, 0x34($s5)
    g_00181460 = 0;  // Global at 0x00181460                    // 0x001aa22c: sw $zero, 0x1460($v0)
    v0 = *(int32_t*)((s5) + 0x34);                              // 0x001aa230: lw $v0, 0x34($s5)
    g_00181464 = 0;  // Global at 0x00181464                    // 0x001aa234: sw $zero, 0x1464($v0)
label_0x1aa238:
    at = 0x31 << 16;                                            // 0x001aa238: lui $at, 0x31
    a0 = *(uint16_t*)((s5) + 0xbc8);                            // 0x001aa23c: lhu $a0, 0xbc8($s5)
    if (a0 == 0) goto label_0x1aa2cc;                           // 0x001aa240: beqz $a0, 0x1aa2cc
    s3 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa244: lw $s3, 0x37fc($at)
    v1 = *(uint8_t*)((s5) + 0x549);                             // 0x001aa248: lbu $v1, 0x549($s5)
    v0 = 1;                                                     // 0x001aa24c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1aa260;                          // 0x001aa250: beq $v1, $v0, 0x1aa260
    /* nop */                                                   // 0x001aa254: nop 
    goto label_0x1aa284;                                        // 0x001aa258: b 0x1aa284
    a3 = a0 + -1;                                               // 0x001aa25c: addiu $a3, $a0, -1
label_0x1aa260:
    a3 = *(uint8_t*)((s5) + 0x30);                              // 0x001aa260: lbu $a3, 0x30($s5)
    a1 = 0x23 << 16;                                            // 0x001aa264: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001aa268: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001aa26c: addiu $a0, $sp, 0x90
    a1 = &str_00235870;  // "COMMON\\"                          // 0x001aa270: addiu $a1, $a1, 0x5870
    func_0010a4d8();  // 10a4d8                                // 0x001aa274: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa278: addiu $a2, $a2, 0x5880
    goto label_0x1aa354;                                        // 0x001aa27c: b 0x1aa354
    a0 = sp + 0x90;                                             // 0x001aa280: addiu $a0, $sp, 0x90
label_0x1aa284:
    at = (a3 < 0xa) ? 1 : 0;                                    // 0x001aa284: slti $at, $a3, 0xa
    if (at == 0) goto label_0x1aa2b0;                           // 0x001aa288: beqz $at, 0x1aa2b0
    a1 = 0x23 << 16;                                            // 0x001aa28c: lui $a1, 0x23
    a1 = 0x23 << 16;                                            // 0x001aa290: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001aa294: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001aa298: addiu $a0, $sp, 0x90
    a1 = &str_00235890;  // "%sNPC\\N%d.NBD"                    // 0x001aa29c: addiu $a1, $a1, 0x5890
    func_0010a4d8();  // 10a4d8                                // 0x001aa2a0: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa2a4: addiu $a2, $a2, 0x5880
    goto label_0x1aa350;                                        // 0x001aa2a8: b 0x1aa350
    /* nop */                                                   // 0x001aa2ac: nop 
label_0x1aa2b0:
    a2 = 0x23 << 16;                                            // 0x001aa2b0: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001aa2b4: addiu $a0, $sp, 0x90
    a1 = a1 + 0x58a0;                                           // 0x001aa2b8: addiu $a1, $a1, 0x58a0
    func_0010a4d8();  // 10a4d8                                // 0x001aa2bc: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa2c0: addiu $a2, $a2, 0x5880
    goto label_0x1aa350;                                        // 0x001aa2c4: b 0x1aa350
    /* nop */                                                   // 0x001aa2c8: nop 
label_0x1aa2cc:
    v1 = *(uint8_t*)((s5) + 0x549);                             // 0x001aa2cc: lbu $v1, 0x549($s5)
    if (v1 == 0) goto label_0x1aa30c;                           // 0x001aa2d0: beqz $v1, 0x1aa30c
    v0 = 1;                                                     // 0x001aa2d4: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1aa2e8;                          // 0x001aa2d8: beq $v1, $v0, 0x1aa2e8
    /* nop */                                                   // 0x001aa2dc: nop 
    goto label_0x1aa334;                                        // 0x001aa2e0: b 0x1aa334
    a3 = *(uint8_t*)((s5) + 0x30);                              // 0x001aa2e4: lbu $a3, 0x30($s5)
label_0x1aa2e8:
    a3 = *(uint8_t*)((s5) + 0x30);                              // 0x001aa2e8: lbu $a3, 0x30($s5)
    a1 = 0x23 << 16;                                            // 0x001aa2ec: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001aa2f0: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001aa2f4: addiu $a0, $sp, 0x90
    a1 = &str_00235870;  // "COMMON\\"                          // 0x001aa2f8: addiu $a1, $a1, 0x5870
    func_0010a4d8();  // 10a4d8                                // 0x001aa2fc: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa300: addiu $a2, $a2, 0x5880
    goto label_0x1aa350;                                        // 0x001aa304: b 0x1aa350
    /* nop */                                                   // 0x001aa308: nop 
label_0x1aa30c:
    a3 = *(uint8_t*)((s5) + 0x30);                              // 0x001aa30c: lbu $a3, 0x30($s5)
    a1 = 0x23 << 16;                                            // 0x001aa310: lui $a1, 0x23
    t0 = *(uint8_t*)((s5) + 0xbd0);                             // 0x001aa314: lbu $t0, 0xbd0($s5)
    a2 = 0x23 << 16;                                            // 0x001aa318: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001aa31c: addiu $a0, $sp, 0x90
    a1 = &str_002358b0;  // "%sPL\\EP%02d_%02d.NBD"             // 0x001aa320: addiu $a1, $a1, 0x58b0
    func_0010a4d8();  // 10a4d8                                // 0x001aa324: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa328: addiu $a2, $a2, 0x5880
    goto label_0x1aa350;                                        // 0x001aa32c: b 0x1aa350
    /* nop */                                                   // 0x001aa330: nop 
label_0x1aa334:
    a1 = 0x23 << 16;                                            // 0x001aa334: lui $a1, 0x23
    t0 = *(uint8_t*)((s5) + 0xbd0);                             // 0x001aa338: lbu $t0, 0xbd0($s5)
    a2 = 0x23 << 16;                                            // 0x001aa33c: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001aa340: addiu $a0, $sp, 0x90
    a1 = &str_002358d0;  // "%s.NBD"                            // 0x001aa344: addiu $a1, $a1, 0x58d0
    func_0010a4d8();  // 10a4d8                                // 0x001aa348: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa34c: addiu $a2, $a2, 0x5880
label_0x1aa350:
    a0 = sp + 0x90;                                             // 0x001aa350: addiu $a0, $sp, 0x90
label_0x1aa354:
    func_001a9bd0();  // 1a9bd0                                // 0x001aa354: jal 0x1a9bd0
    if (v0 <= 0) goto label_0x1aa44c;                           // 0x001aa35c: blez $v0, 0x1aa44c
    a0 = sp + 0x190;                                            // 0x001aa360: addiu $a0, $sp, 0x190
    func_00107ab8();  // 107ab8                                // 0x001aa368: jal 0x107ab8
    a2 = 0x80;                                                  // 0x001aa36c: addiu $a2, $zero, 0x80
    func_001d3c30();  // 1d3c30                                // 0x001aa370: jal 0x1d3c30
    /* nop */                                                   // 0x001aa374: nop 
    v0 = local_194;                                             // 0x001aa37c: lw $v0, 0x194($sp)
    if (v0 == 0) goto label_0x1aa444;                           // 0x001aa380: beqz $v0, 0x1aa444
    s7 = local_19c;                                             // 0x001aa384: lw $s7, 0x19c($sp)
    at = 0x31 << 16;                                            // 0x001aa388: lui $at, 0x31
    s1 = s3 + v0;                                               // 0x001aa38c: addu $s1, $s3, $v0
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa390: lw $v1, 0x37fc($at)
    v0 = 0x18 << 16;                                            // 0x001aa394: lui $v0, 0x18
    goto label_0x1aa3d0;                                        // 0x001aa39c: b 0x1aa3d0
    s2 = v1 + v0;                                               // 0x001aa3a0: addu $s2, $v1, $v0
label_0x1aa3a4:
    s6 = *(int32_t*)(s1);                                       // 0x001aa3a4: lw $s6, 0($s1)
    a0 = s1 + 4;                                                // 0x001aa3a8: addiu $a0, $s1, 4
    func_001aee20();  // 1aee20                                // 0x001aa3ac: jal 0x1aee20
    func_001d3a30();  // 1d3a30                                // 0x001aa3b8: jal 0x1d3a30
    v0 = s1 + 4;                                                // 0x001aa3c0: addiu $v0, $s1, 4
    s0 = s0 + 1;                                                // 0x001aa3c4: addiu $s0, $s0, 1
    s1 = v0 + s6;                                               // 0x001aa3c8: addu $s1, $v0, $s6
    s4 = s4 + 1;                                                // 0x001aa3cc: addiu $s4, $s4, 1
label_0x1aa3d0:
    v0 = (s4 < s7) ? 1 : 0;                                     // 0x001aa3d0: slt $v0, $s4, $s7
    if (v0 != 0) goto label_0x1aa3a4;                           // 0x001aa3d4: bnez $v0, 0x1aa3a4
    /* nop */                                                   // 0x001aa3d8: nop 
    func_0018db10();  // 18db10                                // 0x001aa3dc: jal 0x18db10
    /* nop */                                                   // 0x001aa3e0: nop 
    s0 = sp + 0x1a4;                                            // 0x001aa3e4: addiu $s0, $sp, 0x1a4
    v0 = *(int32_t*)(s0);                                       // 0x001aa3e8: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x1aa444;                           // 0x001aa3ec: beqz $v0, 0x1aa444
    s1 = sp + 0x1b4;                                            // 0x001aa3f0: addiu $s1, $sp, 0x1b4
    v0 = *(int32_t*)(s1);                                       // 0x001aa3f4: lw $v0, 0($s1)
    if (v0 == 0) goto label_0x1aa444;                           // 0x001aa3f8: beqz $v0, 0x1aa444
    /* nop */                                                   // 0x001aa3fc: nop 
    a1 = *(uint8_t*)((s5) + 0x30);                              // 0x001aa400: lbu $a1, 0x30($s5)
    a2 = *(uint8_t*)((s5) + 0xbd0);                             // 0x001aa404: lbu $a2, 0xbd0($s5)
    func_001d71b0();  // 1d71b0                                // 0x001aa408: jal 0x1d71b0
    a3 = *(uint8_t*)((s5) + 3);                                 // 0x001aa410: lbu $a3, 3($s5)
    a2 = 0x1468;                                                // 0x001aa414: addiu $a2, $zero, 0x1468
    a0 = 0x48 << 16;                                            // 0x001aa418: lui $a0, 0x48
    v1 = *(int32_t*)(s0);                                       // 0x001aa41c: lw $v1, 0($s0)
    v0 = *(int32_t*)(s1);                                       // 0x001aa420: lw $v0, 0($s1)
    a0 = a0 + 0x4530;                                           // 0x001aa424: addiu $a0, $a0, 0x4530
    a1 = 2;                                                     // 0x001aa428: addiu $a1, $zero, 2
    a2 = s3 + v1;                                               // 0x001aa434: addu $a2, $s3, $v1
    a3 = s3 + v0;                                               // 0x001aa438: addu $a3, $s3, $v0
    func_001d61c0();  // 1d61c0                                // 0x001aa43c: jal 0x1d61c0
    a0 = a0 + t1;                                               // 0x001aa440: addu $a0, $a0, $t1
label_0x1aa444:
    func_0018db10();  // 18db10                                // 0x001aa444: jal 0x18db10
    /* nop */                                                   // 0x001aa448: nop 
label_0x1aa44c:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001aa454: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001aa458: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001aa45c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aa464: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aa468: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aa46c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aa470: jr $ra
    sp = sp + 0x210;                                            // 0x001aa474: addiu $sp, $sp, 0x210
}