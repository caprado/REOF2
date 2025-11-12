void func_001d01e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c;
    
    sp = sp + -0x60;                                            // 0x001d01e0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d01ec: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d01f8: addu.qb $zero, $sp, $s1
    a0 = *(int32_t*)((gp) + -0x7b84);                           // 0x001d0200: lw $a0, -0x7b84($gp)
    func_001d0560();  // 0x1d0490                                // 0x001d0208: jal 0x1d0490
    a1 = 2;                                                     // 0x001d020c: addiu $a1, $zero, 2
    if (v0 <= 0) goto label_0x1d022c;                           // 0x001d0210: blez $v0, 0x1d022c
    a0 = *(int32_t*)((gp) + -0x7b84);                           // 0x001d0218: lw $a0, -0x7b84($gp)
    a1 = 0x33 << 16;                                            // 0x001d021c: lui $a1, 0x33
    func_001d01a0();  // 0x1d0140                                // 0x001d0220: jal 0x1d0140
    a1 = a1 + -0x4200;                                          // 0x001d0224: addiu $a1, $a1, -0x4200
label_0x1d022c:
    if (s1 < 0) goto label_0x1d037c;                            // 0x001d022c: bltz $s1, 0x1d037c
    a0 = 0x33 << 16;                                            // 0x001d0234: lui $a0, 0x33
    func_001ce6d0();  // 0x1ce6c0                                // 0x001d0238: jal 0x1ce6c0
    a0 = a0 + -0x4200;                                          // 0x001d023c: addiu $a0, $a0, -0x4200
    if (v0 == 0) goto label_0x1d0378;                           // 0x001d0240: beqz $v0, 0x1d0378
    /* nop */                                                   // 0x001d0244: nop 
    goto label_0x1d0344;                                        // 0x001d0254: b 0x1d0344
    s2 = 1;                                                     // 0x001d0258: addiu $s2, $zero, 1
label_0x1d025c:
    a1 = sp + 0x5c;                                             // 0x001d025c: addiu $a1, $sp, 0x5c
    a0 = a0 + -0x4200;                                          // 0x001d0260: addiu $a0, $a0, -0x4200
    func_001d0490();  // 0x1d03a0                                // 0x001d0264: jal 0x1d03a0
    local_5c = 0;                                               // 0x001d0268: sw $zero, 0x5c($sp)
    if (v0 >= 0) goto label_0x1d027c;                           // 0x001d026c: bgez $v0, 0x1d027c
    v1 = 2;                                                     // 0x001d0270: addiu $v1, $zero, 2
    goto label_0x1d037c;                                        // 0x001d0274: b 0x1d037c
    v0 = -0x10;                                                 // 0x001d0278: addiu $v0, $zero, -0x10
label_0x1d027c:
    if (v0 == v1) goto label_0x1d0300;                          // 0x001d027c: beq $v0, $v1, 0x1d0300
    /* nop */                                                   // 0x001d0280: nop 
    v1 = 1;                                                     // 0x001d0284: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1d0298;                          // 0x001d0288: beq $v0, $v1, 0x1d0298
    /* nop */                                                   // 0x001d028c: nop 
    goto label_0x1d0344;                                        // 0x001d0290: b 0x1d0344
label_0x1d0298:
    v1 = local_5c;                                              // 0x001d0298: lw $v1, 0x5c($sp)
    at = (v1 < 0xc) ? 1 : 0;                                    // 0x001d029c: slti $at, $v1, 0xc
    if (at == 0) goto label_0x1d02b0;                           // 0x001d02a0: beqz $at, 0x1d02b0
    v0 = s1 + v1;                                               // 0x001d02a4: addu $v0, $s1, $v1
    goto label_0x1d037c;                                        // 0x001d02a8: b 0x1d037c
    v0 = -0x10;                                                 // 0x001d02ac: addiu $v0, $zero, -0x10
label_0x1d02b0:
    v0 = v0 + 2;                                                // 0x001d02b0: addiu $v0, $v0, 2
    at = (v0 < s0) ? 1 : 0;                                     // 0x001d02b4: slt $at, $v0, $s0
    if (at == 0) goto label_0x1d02f8;                           // 0x001d02b8: beqz $at, 0x1d02f8
    /* nop */                                                   // 0x001d02bc: nop 
    v1 = v1 + 2;                                                // 0x001d02c0: addiu $v1, $v1, 2
    a0 = 0x33 << 16;                                            // 0x001d02c4: lui $a0, 0x33
    v0 = 0x60;                                                  // 0x001d02c8: addiu $v0, $zero, 0x60
    *(uint8_t*)(s3) = v1;                                       // 0x001d02cc: sb $v1, 0($s3)
    *(uint8_t*)((s3) + 1) = v0;                                 // 0x001d02d0: sb $v0, 1($s3)
    a0 = a0 + -0x4200;                                          // 0x001d02d4: addiu $a0, $a0, -0x4200
    a2 = local_5c;                                              // 0x001d02d8: lw $a2, 0x5c($sp)
    thunk_func_001cff10();  // 0x1ce7c0                          // 0x001d02dc: jal 0x1ce7c0
    a1 = s3 + 2;                                                // 0x001d02e0: addiu $a1, $s3, 2
    v0 = local_5c;                                              // 0x001d02e4: lw $v0, 0x5c($sp)
    v0 = v0 + 2;                                                // 0x001d02e8: addiu $v0, $v0, 2
    s1 = s1 + v0;                                               // 0x001d02ec: addu $s1, $s1, $v0
    goto label_0x1d0344;                                        // 0x001d02f0: b 0x1d0344
    s3 = s3 + v0;                                               // 0x001d02f4: addu $s3, $s3, $v0
label_0x1d02f8:
    goto label_0x1d0344;                                        // 0x001d02f8: b 0x1d0344
label_0x1d0300:
    a2 = local_5c;                                              // 0x001d0300: lw $a2, 0x5c($sp)
    at = (a2 < 2) ? 1 : 0;                                      // 0x001d0304: slti $at, $a2, 2
    if (at == 0) goto label_0x1d0318;                           // 0x001d0308: beqz $at, 0x1d0318
    v0 = s1 + a2;                                               // 0x001d030c: addu $v0, $s1, $a2
    goto label_0x1d037c;                                        // 0x001d0310: b 0x1d037c
    v0 = -0x10;                                                 // 0x001d0314: addiu $v0, $zero, -0x10
label_0x1d0318:
    at = (v0 < s0) ? 1 : 0;                                     // 0x001d0318: slt $at, $v0, $s0
    if (at == 0) goto label_0x1d0340;                           // 0x001d031c: beqz $at, 0x1d0340
    a0 = 0x33 << 16;                                            // 0x001d0320: lui $a0, 0x33
    thunk_func_001cff10();  // 0x1ce7c0                          // 0x001d0328: jal 0x1ce7c0
    a0 = a0 + -0x4200;                                          // 0x001d032c: addiu $a0, $a0, -0x4200
    v0 = local_5c;                                              // 0x001d0330: lw $v0, 0x5c($sp)
    s1 = s1 + v0;                                               // 0x001d0334: addu $s1, $s1, $v0
    goto label_0x1d0344;                                        // 0x001d0338: b 0x1d0344
    s3 = s3 + v0;                                               // 0x001d033c: addu $s3, $s3, $v0
label_0x1d0340:
label_0x1d0344:
    v0 = ((unsigned)0 < (unsigned)s2) ? 1 : 0;                  // 0x001d0344: sltu $v0, $zero, $s2
    v0 = v0 ^ 1;                                                // 0x001d0348: xori $v0, $v0, 1
    if (v0 != 0) goto label_0x1d0368;                           // 0x001d034c: bnez $v0, 0x1d0368
    /* nop */                                                   // 0x001d0350: nop 
    a0 = 0x33 << 16;                                            // 0x001d0354: lui $a0, 0x33
    func_001ce6d0();  // 0x1ce6c0                                // 0x001d0358: jal 0x1ce6c0
    a0 = a0 + -0x4200;                                          // 0x001d035c: addiu $a0, $a0, -0x4200
    if (v0 != 0) goto label_0x1d025c;                           // 0x001d0360: bnez $v0, 0x1d025c
    a0 = 0x33 << 16;                                            // 0x001d0364: lui $a0, 0x33
label_0x1d0368:
    a0 = 0x33 << 16;                                            // 0x001d0368: lui $a0, 0x33
    a1 = -1;                                                    // 0x001d036c: addiu $a1, $zero, -1
    func_001ce8a0();  // 0x1ce830                                // 0x001d0370: jal 0x1ce830
    a0 = a0 + -0x4200;                                          // 0x001d0374: addiu $a0, $a0, -0x4200
label_0x1d0378:
label_0x1d037c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d0384: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d0388: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d038c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d0390: jr $ra
    sp = sp + 0x60;                                             // 0x001d0394: addiu $sp, $sp, 0x60
}