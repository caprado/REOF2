void func_001d5070() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x250;                                           // 0x001d5070: addiu $sp, $sp, -0x250
    a3 = a1 & 0xff;                                             // 0x001d5074: andi $a3, $a1, 0xff
    a1 = 0x24 << 16;                                            // 0x001d507c: lui $a1, 0x24
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d5080: dpa.w.ph $ac0, $sp, $s3
    t0 = a2 & 0xff;                                             // 0x001d5084: andi $t0, $a2, 0xff
    a1 = &str_002473a0;  // "DATA\\ROM\\MODEL\\ST_HIT\\r%03d\\w%s" // 0x001d508c: addiu $a1, $a1, 0x73a0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d5090: addu.qb $zero, $sp, $s1
    s0 = a0 & 0xff;                                             // 0x001d5098: andi $s0, $a0, 0xff
    a0 = sp + 0x150;                                            // 0x001d509c: addiu $a0, $sp, 0x150
    func_0010a4d8();  // 10a4d8                                // 0x001d50a0: jal 0x10a4d8
    at = 0x31 << 16;                                            // 0x001d50a8: lui $at, 0x31
    s2 = g_0031381c;  // Global at 0x0031381c                   // 0x001d50b0: lw $s2, 0x381c($at)
    at = 0x31 << 16;                                            // 0x001d50b4: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d50b8: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d5108;                           // 0x001d50bc: bnez $v0, 0x1d5108
    a1 = 0x24 << 16;                                            // 0x001d50c4: lui $a1, 0x24
    a0 = sp + 0x50;                                             // 0x001d50c8: addiu $a0, $sp, 0x50
    a1 = &str_002473c0;  // "DATA\\ROM\\MODEL\\ST_HIT\\r%03d\\g%s" // 0x001d50cc: addiu $a1, $a1, 0x73c0
    func_0010a4d8();  // 10a4d8                                // 0x001d50d4: jal 0x10a4d8
    a3 = sp + 0x150;                                            // 0x001d50d8: addiu $a3, $sp, 0x150
    a0 = sp + 0x50;                                             // 0x001d50dc: addiu $a0, $sp, 0x50
    a2 = 1;                                                     // 0x001d50e4: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d50e8: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d5148;                           // 0x001d50f0: blez $v0, 0x1d5148
    /* nop */                                                   // 0x001d50f4: nop 
    v1 = v0 + 0x3f;                                             // 0x001d50f8: addiu $v1, $v0, 0x3f
    v0 = -0x40;                                                 // 0x001d50fc: addiu $v0, $zero, -0x40
    goto label_0x1d513c;                                        // 0x001d5100: b 0x1d513c
    s3 = v1 & v0;                                               // 0x001d5104: and $s3, $v1, $v0
label_0x1d5108:
    a1 = 0x24 << 16;                                            // 0x001d5108: lui $a1, 0x24
    a0 = sp + 0x50;                                             // 0x001d510c: addiu $a0, $sp, 0x50
    a1 = a1 + 0x73e0;                                           // 0x001d5110: addiu $a1, $a1, 0x73e0
    func_0010a4d8();  // 10a4d8                                // 0x001d5114: jal 0x10a4d8
    a2 = sp + 0x150;                                            // 0x001d5118: addiu $a2, $sp, 0x150
    a0 = sp + 0x50;                                             // 0x001d511c: addiu $a0, $sp, 0x50
    func_001a9b30();  // 1a9b30                                // 0x001d5120: jal 0x1a9b30
    if (v0 <= 0) goto label_0x1d5148;                           // 0x001d5128: blez $v0, 0x1d5148
    /* nop */                                                   // 0x001d512c: nop 
    v1 = v0 + 0x3f;                                             // 0x001d5130: addiu $v1, $v0, 0x3f
    v0 = -0x40;                                                 // 0x001d5134: addiu $v0, $zero, -0x40
    s3 = v1 & v0;                                               // 0x001d5138: and $s3, $v1, $v0
label_0x1d513c:
    func_005f1e20();  // 0x5f1e20                               // 0x001d513c: jal 0x5f1e20
    s1 = 1;                                                     // 0x001d5144: addiu $s1, $zero, 1
label_0x1d5148:
    at = 0x31 << 16;                                            // 0x001d5148: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d514c: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d5194;                           // 0x001d5150: bnez $v0, 0x1d5194
    s2 = s2 + s3;                                               // 0x001d5154: addu $s2, $s2, $s3
    a1 = 0x24 << 16;                                            // 0x001d5158: lui $a1, 0x24
    a0 = sp + 0x50;                                             // 0x001d5160: addiu $a0, $sp, 0x50
    a1 = &str_002473f0;  // "EM\\%s"                            // 0x001d5164: addiu $a1, $a1, 0x73f0
    func_0010a4d8();  // 10a4d8                                // 0x001d5168: jal 0x10a4d8
    a3 = sp + 0x150;                                            // 0x001d516c: addiu $a3, $sp, 0x150
    a0 = sp + 0x50;                                             // 0x001d5170: addiu $a0, $sp, 0x50
    a2 = 1;                                                     // 0x001d5178: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d517c: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d51cc;                           // 0x001d5184: blez $v0, 0x1d51cc
    /* nop */                                                   // 0x001d5188: nop 
    goto label_0x1d51c0;                                        // 0x001d518c: b 0x1d51c0
label_0x1d5194:
    a1 = 0x24 << 16;                                            // 0x001d5194: lui $a1, 0x24
    a0 = sp + 0x50;                                             // 0x001d5198: addiu $a0, $sp, 0x50
    a1 = a1 + 0x7410;                                           // 0x001d519c: addiu $a1, $a1, 0x7410
    func_0010a4d8();  // 10a4d8                                // 0x001d51a0: jal 0x10a4d8
    a2 = sp + 0x150;                                            // 0x001d51a4: addiu $a2, $sp, 0x150
    a0 = sp + 0x50;                                             // 0x001d51a8: addiu $a0, $sp, 0x50
    func_001a9b30();  // 1a9b30                                // 0x001d51ac: jal 0x1a9b30
    if (v0 <= 0) goto label_0x1d51cc;                           // 0x001d51b4: blez $v0, 0x1d51cc
    /* nop */                                                   // 0x001d51b8: nop 
label_0x1d51c0:
    func_005f1f50();  // 0x5f1f50                               // 0x001d51c0: jal 0x5f1f50
    /* nop */                                                   // 0x001d51c4: nop 
    s1 = s1 + 2;                                                // 0x001d51c8: addiu $s1, $s1, 2
label_0x1d51cc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d51d8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d51dc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d51e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d51e4: jr $ra
    sp = sp + 0x250;                                            // 0x001d51e8: addiu $sp, $sp, 0x250
}