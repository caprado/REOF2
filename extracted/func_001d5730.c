void func_001d5730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x370;                                           // 0x001d5730: addiu $sp, $sp, -0x370
    v0 = -1;                                                    // 0x001d5734: addiu $v0, $zero, -1
    a1 = a1 & 0xffff;                                           // 0x001d573c: andi $a1, $a1, 0xffff
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d5740: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d574c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d5754: addu.qb $zero, $sp, $s1
    *(uint16_t*)(a2) = v0;                                      // 0x001d575c: sh $v0, 0($a2)
    s2 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d5764: lw $s2, -0x7ae4($gp)
    func_001d4140();  // 1d4140                                // 0x001d576c: jal 0x1d4140
    if (s1 == 0) goto label_0x1d596c;                           // 0x001d5778: beqz $s1, 0x1d596c
    at = 0x31 << 16;                                            // 0x001d577c: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d5780: lb $v0, 0x37b7($at)
    if (v0 == 0) goto label_0x1d5824;                           // 0x001d5784: beqz $v0, 0x1d5824
    a0 = sp + 0x270;                                            // 0x001d5788: addiu $a0, $sp, 0x270
    func_0010b460();  // 10b460                                // 0x001d5790: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001d5794: addiu $a1, $zero, 0x5c
    if (v0 == 0) goto label_0x1d57a4;                           // 0x001d5798: beqz $v0, 0x1d57a4
    /* nop */                                                   // 0x001d579c: nop 
    v0 = v0 + 1;                                                // 0x001d57a0: addiu $v0, $v0, 1
label_0x1d57a4:
    a0 = *(int8_t*)(v0);                                        // 0x001d57a4: lb $a0, 0($v0)
    v1 = 0x48;                                                  // 0x001d57a8: addiu $v1, $zero, 0x48
    if (a0 != v1) goto label_0x1d57b8;                          // 0x001d57ac: bne $a0, $v1, 0x1d57b8
    v1 = v0 + 1;                                                // 0x001d57b4: addiu $v1, $v0, 1
label_0x1d57b8:
    a0 = *(int8_t*)(v1);                                        // 0x001d57b8: lb $a0, 0($v1)
    v1 = 0x45;                                                  // 0x001d57bc: addiu $v1, $zero, 0x45
    if (a0 != v1) goto label_0x1d57e4;                          // 0x001d57c0: bne $a0, $v1, 0x1d57e4
    a1 = 0x24 << 16;                                            // 0x001d57c4: lui $a1, 0x24
    a1 = 0x24 << 16;                                            // 0x001d57c8: lui $a1, 0x24
    a0 = sp + 0x170;                                            // 0x001d57d0: addiu $a0, $sp, 0x170
    func_0010a4d8();  // 10a4d8                                // 0x001d57d4: jal 0x10a4d8
    a1 = &str_00247418;  // "NPC\\%s"                           // 0x001d57d8: addiu $a1, $a1, 0x7418
    goto label_0x1d57f8;                                        // 0x001d57dc: b 0x1d57f8
    a0 = sp + 0x170;                                            // 0x001d57e0: addiu $a0, $sp, 0x170
label_0x1d57e4:
    a0 = sp + 0x170;                                            // 0x001d57e8: addiu $a0, $sp, 0x170
    func_0010a4d8();  // 10a4d8                                // 0x001d57ec: jal 0x10a4d8
    a1 = a1 + 0x7420;                                           // 0x001d57f0: addiu $a1, $a1, 0x7420
    a0 = sp + 0x170;                                            // 0x001d57f4: addiu $a0, $sp, 0x170
label_0x1d57f8:
    func_0010b460();  // 10b460                                // 0x001d57f8: jal 0x10b460
    a1 = 0x2e;                                                  // 0x001d57fc: addiu $a1, $zero, 0x2e
    if (v0 == 0) goto label_0x1d580c;                           // 0x001d5800: beqz $v0, 0x1d580c
    *(uint8_t*)(v0) = 0;                                        // 0x001d5808: sb $zero, 0($v0)
label_0x1d580c:
    a0 = sp + 0x170;                                            // 0x001d5810: addiu $a0, $sp, 0x170
    func_001aa6d0();  // 1aa6d0                                // 0x001d5814: jal 0x1aa6d0
    goto label_0x1d5970;                                        // 0x001d581c: b 0x1d5970
label_0x1d5824:
    func_0010ac68();  // 10ac68                                // 0x001d5824: jal 0x10ac68
    a0 = sp + 0x270;                                            // 0x001d582c: addiu $a0, $sp, 0x270
    func_0010b460();  // 10b460                                // 0x001d5830: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001d5834: addiu $a1, $zero, 0x5c
    *(uint8_t*)((v0) + 1) = 0;                                  // 0x001d583c: sb $zero, 1($v0)
    s1 = *(int32_t*)((gp) + -0x6230);                           // 0x001d5840: lw $s1, -0x6230($gp)
    a2 = 1;                                                     // 0x001d5844: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d584c: jal 0x1d3390
    if (s5 <= 0) goto label_0x1d596c;                           // 0x001d5858: blez $s5, 0x1d596c
label_0x1d5864:
    a0 = sp + 0x170;                                            // 0x001d5864: addiu $a0, $sp, 0x170
    func_0010ac68();  // 10ac68                                // 0x001d5868: jal 0x10ac68
    a1 = sp + 0x270;                                            // 0x001d586c: addiu $a1, $sp, 0x270
    a0 = sp + 0x70;                                             // 0x001d5870: addiu $a0, $sp, 0x70
    goto label_0x1d5894;                                        // 0x001d5874: b 0x1d5894
    v1 = 0xa;                                                   // 0x001d5878: addiu $v1, $zero, 0xa
label_0x1d587c:
    s4 = s4 + 1;                                                // 0x001d587c: addiu $s4, $s4, 1
    *(uint8_t*)(a0) = a1;                                       // 0x001d5880: sb $a1, 0($a0)
    at = (s4 < s5) ? 1 : 0;                                     // 0x001d5884: slt $at, $s4, $s5
    s1 = s1 + 1;                                                // 0x001d5888: addiu $s1, $s1, 1
    if (at == 0) goto label_0x1d595c;                           // 0x001d588c: beqz $at, 0x1d595c
    a0 = a0 + 1;                                                // 0x001d5890: addiu $a0, $a0, 1
label_0x1d5894:
    a1 = *(int8_t*)(s1);                                        // 0x001d5894: lb $a1, 0($s1)
    if (a1 == v1) goto label_0x1d58a8;                          // 0x001d5898: beq $a1, $v1, 0x1d58a8
    /* nop */                                                   // 0x001d589c: nop 
    if (a1 != 0) goto label_0x1d587c;                           // 0x001d58a0: bnez $a1, 0x1d587c
    /* nop */                                                   // 0x001d58a4: nop 
label_0x1d58a8:
    *(uint8_t*)(a0) = 0;                                        // 0x001d58a8: sb $zero, 0($a0)
    a1 = 0x2e;                                                  // 0x001d58ac: addiu $a1, $zero, 0x2e
    a0 = sp + 0x70;                                             // 0x001d58b0: addiu $a0, $sp, 0x70
    s1 = s1 + 1;                                                // 0x001d58b4: addiu $s1, $s1, 1
    func_0010b460();  // 10b460                                // 0x001d58b8: jal 0x10b460
    s4 = s4 + 1;                                                // 0x001d58bc: addiu $s4, $s4, 1
    if (v0 != 0) goto label_0x1d58e0;                           // 0x001d58c0: bnez $v0, 0x1d58e0
    a0 = sp + 0x70;                                             // 0x001d58c4: addiu $a0, $sp, 0x70
    func_0010b460();  // 10b460                                // 0x001d58c8: jal 0x10b460
    a1 = 0x2c;                                                  // 0x001d58cc: addiu $a1, $zero, 0x2c
    if (v0 == 0) goto label_0x1d58e8;                           // 0x001d58d0: beqz $v0, 0x1d58e8
    a0 = sp + 0x70;                                             // 0x001d58d4: addiu $a0, $sp, 0x70
    goto label_0x1d58e4;                                        // 0x001d58d8: b 0x1d58e4
    *(uint8_t*)(v0) = 0;                                        // 0x001d58dc: sb $zero, 0($v0)
label_0x1d58e0:
    *(uint8_t*)(v0) = 0;                                        // 0x001d58e0: sb $zero, 0($v0)
label_0x1d58e4:
    a0 = sp + 0x70;                                             // 0x001d58e4: addiu $a0, $sp, 0x70
label_0x1d58e8:
    func_0010ae00();  // 10ae00                                // 0x001d58e8: jal 0x10ae00
    /* nop */                                                   // 0x001d58ec: nop 
    if (v0 == 0) goto label_0x1d5960;                           // 0x001d58f0: beqz $v0, 0x1d5960
    at = (s3 < 7) ? 1 : 0;                                      // 0x001d58f4: slti $at, $s3, 7
    a0 = sp + 0x70;                                             // 0x001d58f8: addiu $a0, $sp, 0x70
    func_0010b460();  // 10b460                                // 0x001d58fc: jal 0x10b460
    a1 = 0x2f;                                                  // 0x001d5900: addiu $a1, $zero, 0x2f
    if (v0 == 0) goto label_0x1d5920;                           // 0x001d5904: beqz $v0, 0x1d5920
    a0 = sp + 0x170;                                            // 0x001d5908: addiu $a0, $sp, 0x170
    a1 = v0 + 1;                                                // 0x001d590c: addiu $a1, $v0, 1
    func_0010a860();  // 10a860                                // 0x001d5910: jal 0x10a860
    a0 = sp + 0x170;                                            // 0x001d5914: addiu $a0, $sp, 0x170
    goto label_0x1d5928;                                        // 0x001d5918: b 0x1d5928
    /* nop */                                                   // 0x001d591c: nop 
label_0x1d5920:
    func_0010a860();  // 10a860                                // 0x001d5920: jal 0x10a860
    a1 = sp + 0x70;                                             // 0x001d5924: addiu $a1, $sp, 0x70
label_0x1d5928:
    a1 = 0x24 << 16;                                            // 0x001d5928: lui $a1, 0x24
    a0 = sp + 0x170;                                            // 0x001d592c: addiu $a0, $sp, 0x170
    func_0010a860();  // 10a860                                // 0x001d5930: jal 0x10a860
    a1 = a1 + 0x7370;                                           // 0x001d5934: addiu $a1, $a1, 0x7370
    a0 = sp + 0x170;                                            // 0x001d5938: addiu $a0, $sp, 0x170
    func_001d3800();  // 1d3800                                // 0x001d5940: jal 0x1d3800
    a2 = 4;                                                     // 0x001d5944: addiu $a2, $zero, 4
    s3 = s3 + 1;                                                // 0x001d5948: addiu $s3, $s3, 1
    *(uint16_t*)(s0) = v0;                                      // 0x001d594c: sh $v0, 0($s0)
    at = (s3 < 7) ? 1 : 0;                                      // 0x001d5950: slti $at, $s3, 7
    if (at != 0) goto label_0x1d5864;                           // 0x001d5954: bnez $at, 0x1d5864
    s0 = s0 + 2;                                                // 0x001d5958: addiu $s0, $s0, 2
label_0x1d595c:
    at = (s3 < 7) ? 1 : 0;                                      // 0x001d595c: slti $at, $s3, 7
label_0x1d5960:
    if (at == 0) goto label_0x1d596c;                           // 0x001d5960: beqz $at, 0x1d596c
    v1 = -1;                                                    // 0x001d5964: addiu $v1, $zero, -1
    *(uint16_t*)(s0) = v1;                                      // 0x001d5968: sh $v1, 0($s0)
label_0x1d596c:
label_0x1d5970:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d5970: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d5974: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d597c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d5980: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5984: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5988: jr $ra
    sp = sp + 0x370;                                            // 0x001d598c: addiu $sp, $sp, 0x370
}