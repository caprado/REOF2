void func_001d5f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 != 0) goto label_0x1d5f6c;                           // 0x001d5f60: bnez $a0, 0x1d5f6c
    v0 = 0x8000 << 16;                                          // 0x001d5f64: lui $v0, 0x8000
    a3 = a3 | v0;                                               // 0x001d5f68: or $a3, $a3, $v0
label_0x1d5f6c:
    return func_001d5f60();  // Tail call                        // 0x001d5f6c: j 0x1d5d00
    /* nop */                                                   // 0x001d5f70: nop 
    /* nop */                                                   // 0x001d5f74: nop 
    /* nop */                                                   // 0x001d5f78: nop 
    /* nop */                                                   // 0x001d5f7c: nop 
    sp = sp + -0x1a0;                                           // 0x001d5f80: addiu $sp, $sp, -0x1a0
    v0 = t0 & 0x80;                                             // 0x001d5f84: andi $v0, $t0, 0x80
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001d5f90: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d5fa0: subu.qb $zero, $sp, $s5
    a2 = 1;                                                     // 0x001d5fac: addiu $a2, $zero, 1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d5fb0: dpa.w.ph $ac0, $sp, $s3
    a1 = a0 & 0xffff;                                           // 0x001d5fbc: andi $a1, $a0, 0xffff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d5fc0: addu.qb $zero, $sp, $s1
    s5 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d5fd0: lw $s5, -0x7ae4($gp)
    s0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001d5fd4: sltu $s0, $zero, $v0
    func_001d4a40();  // 0x1d4140                                // 0x001d5fdc: jal 0x1d4140
    if (s2 == 0) goto label_0x1d6184;                           // 0x001d5fe8: beqz $s2, 0x1d6184
    at = 0x31 << 16;                                            // 0x001d5fec: lui $at, 0x31
    v1 = g_003137b7;  // Global at 0x003137b7                   // 0x001d5ff0: lb $v1, 0x37b7($at)
    if (v1 == 0) goto label_0x1d6098;                           // 0x001d5ff4: beqz $v1, 0x1d6098
    v1 = s1 & 0x7f;                                             // 0x001d5ff8: andi $v1, $s1, 0x7f
    func_0010b4b0();  // 0x10b460                                // 0x001d6000: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001d6004: addiu $a1, $zero, 0x5c
    if (v0 == 0) goto label_0x1d6014;                           // 0x001d6008: beqz $v0, 0x1d6014
    /* nop */                                                   // 0x001d600c: nop 
    v0 = v0 + 1;                                                // 0x001d6010: addiu $v0, $v0, 1
label_0x1d6014:
    a0 = g_80000001;  // Global at 0x80000001                   // 0x001d6014: lb $a0, 0($v0)
    v1 = 0x48;                                                  // 0x001d6018: addiu $v1, $zero, 0x48
    if (a0 != v1) goto label_0x1d6028;                          // 0x001d601c: bne $a0, $v1, 0x1d6028
    v1 = v0 + 1;                                                // 0x001d6024: addiu $v1, $v0, 1
label_0x1d6028:
    a0 = g_80000002;  // Global at 0x80000002                   // 0x001d6028: lb $a0, 0($v1)
    v1 = 0x45;                                                  // 0x001d602c: addiu $v1, $zero, 0x45
    if (a0 != v1) goto label_0x1d6054;                          // 0x001d6030: bne $a0, $v1, 0x1d6054
    a1 = 0x24 << 16;                                            // 0x001d6034: lui $a1, 0x24
    a1 = 0x24 << 16;                                            // 0x001d6038: lui $a1, 0x24
    a0 = sp + 0xa0;                                             // 0x001d6040: addiu $a0, $sp, 0xa0
    func_0010a570();  // 0x10a4d8                                // 0x001d6044: jal 0x10a4d8
    a1 = &str_00247418;  // "NPC\\%s"                           // 0x001d6048: addiu $a1, $a1, 0x7418
    goto label_0x1d6068;                                        // 0x001d604c: b 0x1d6068
    v0 = 1;                                                     // 0x001d6050: addiu $v0, $zero, 1
label_0x1d6054:
    a0 = sp + 0xa0;                                             // 0x001d6058: addiu $a0, $sp, 0xa0
    func_0010a570();  // 0x10a4d8                                // 0x001d605c: jal 0x10a4d8
    a1 = a1 + 0x7420;                                           // 0x001d6060: addiu $a1, $a1, 0x7420
    v0 = 1;                                                     // 0x001d6064: addiu $v0, $zero, 1
label_0x1d6068:
    if (s0 == v0) goto label_0x1d6074;                          // 0x001d6068: beq $s0, $v0, 0x1d6074
    *(uint8_t*)((s4) + 0x81c) = fp;                             // 0x001d6070: sb $fp, 0x81c($s4)
label_0x1d6074:
    func_001aa960();  // 0x1aa830                                // 0x001d6088: jal 0x1aa830
    a0 = sp + 0xa0;                                             // 0x001d608c: addiu $a0, $sp, 0xa0
    goto label_0x1d6188;                                        // 0x001d6090: b 0x1d6188
label_0x1d6098:
    at = (v1 < 2) ? 1 : 0;                                      // 0x001d6098: slti $at, $v1, 2
    if (at == 0) goto label_0x1d60b4;                           // 0x001d609c: beqz $at, 0x1d60b4
    a0 = sp + 0xa0;                                             // 0x001d60a0: addiu $a0, $sp, 0xa0
    if (s3 != 0) goto label_0x1d612c;                           // 0x001d60a4: bnez $s3, 0x1d612c
    /* nop */                                                   // 0x001d60a8: nop 
    goto label_0x1d6184;                                        // 0x001d60ac: b 0x1d6184
    /* nop */                                                   // 0x001d60b0: nop 
label_0x1d60b4:
    func_0010ae00();  // 0x10ac68                                // 0x001d60b4: jal 0x10ac68
    if (s0 != 0) goto label_0x1d60dc;                           // 0x001d60bc: bnez $s0, 0x1d60dc
    a1 = 0x24 << 16;                                            // 0x001d60c0: lui $a1, 0x24
    a1 = 0x24 << 16;                                            // 0x001d60c4: lui $a1, 0x24
    a0 = sp + 0xa0;                                             // 0x001d60c8: addiu $a0, $sp, 0xa0
    func_0010a990();  // 0x10a860                                // 0x001d60cc: jal 0x10a860
    a1 = a1 + 0x7378;                                           // 0x001d60d0: addiu $a1, $a1, 0x7378
    goto label_0x1d60ec;                                        // 0x001d60d4: b 0x1d60ec
    s1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d60d8: lw $s1, -0x6234($gp)
label_0x1d60dc:
    a0 = sp + 0xa0;                                             // 0x001d60dc: addiu $a0, $sp, 0xa0
    func_0010a990();  // 0x10a860                                // 0x001d60e0: jal 0x10a860
    a1 = a1 + 0x7428;                                           // 0x001d60e4: addiu $a1, $a1, 0x7428
    s1 = *(int32_t*)((gp) + -0x6234);                           // 0x001d60e8: lw $s1, -0x6234($gp)
label_0x1d60ec:
    a0 = sp + 0xa0;                                             // 0x001d60ec: addiu $a0, $sp, 0xa0
    a2 = 1;                                                     // 0x001d60f0: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d60f8: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d612c;                           // 0x001d6100: blez $v0, 0x1d612c
    func_001d96b0();  // 0x1d9490                                // 0x001d610c: jal 0x1d9490
    func_001b29f0();  // 0x1b29e0                                // 0x001d6114: jal 0x1b29e0
    a2 = s7 & 0xff;                                             // 0x001d611c: andi $a2, $s7, 0xff
    func_001d98d0();  // 0x1d96b0                                // 0x001d6124: jal 0x1d96b0
label_0x1d612c:
    if (s3 == 0) goto label_0x1d6184;                           // 0x001d612c: beqz $s3, 0x1d6184
    v1 = 1;                                                     // 0x001d6130: addiu $v1, $zero, 1
    if (s0 == v1) goto label_0x1d6184;                          // 0x001d6134: beq $s0, $v1, 0x1d6184
    func_0010ae00();  // 0x10ac68                                // 0x001d613c: jal 0x10ac68
    a0 = sp + 0xa0;                                             // 0x001d6140: addiu $a0, $sp, 0xa0
    a1 = 0x24 << 16;                                            // 0x001d6144: lui $a1, 0x24
    a0 = sp + 0xa0;                                             // 0x001d6148: addiu $a0, $sp, 0xa0
    func_0010a990();  // 0x10a860                                // 0x001d614c: jal 0x10a860
    a1 = a1 + 0x7380;                                           // 0x001d6150: addiu $a1, $a1, 0x7380
    s0 = *(int32_t*)((gp) + -0x6234);                           // 0x001d6154: lw $s0, -0x6234($gp)
    a0 = sp + 0xa0;                                             // 0x001d6158: addiu $a0, $sp, 0xa0
    a2 = 1;                                                     // 0x001d615c: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d6164: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d6184;                           // 0x001d616c: blez $v0, 0x1d6184
    func_001d4db0();  // 0x1d4c80                                // 0x001d617c: jal 0x1d4c80
    *(uint8_t*)((s4) + 0x81c) = fp;                             // 0x001d6180: sb $fp, 0x81c($s4)
label_0x1d6184:
label_0x1d6188:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001d6188: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d6190: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d6194: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d6198: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d61a0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d61a4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d61a8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d61ac: jr $ra
    sp = sp + 0x1a0;                                            // 0x001d61b0: addiu $sp, $sp, 0x1a0
}