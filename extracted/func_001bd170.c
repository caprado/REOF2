void func_001bd170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bd170: addiu $sp, $sp, -0x20
    a2 = 0x44;                                                  // 0x001bd17c: addiu $a2, $zero, 0x44
    func_00107c70();  // 107c70                                // 0x001bd188: jal 0x107c70
    *(uint32_t*)((gp) + -0x6324) = s0;                          // 0x001bd18c: sw $s0, -0x6324($gp)
    a0 = 1;                                                     // 0x001bd190: addiu $a0, $zero, 1
    v1 = s0 + 0x100;                                            // 0x001bd194: addiu $v1, $s0, 0x100
    *(uint32_t*)((s0) + 8) = a0;                                // 0x001bd198: sw $a0, 8($s0)
    a0 = 0x22 << 16;                                            // 0x001bd19c: lui $a0, 0x22
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x001bd1a0: sw $v1, 0xc($s0)
    a0 = a0 + -0x3380;                                          // 0x001bd1a4: addiu $a0, $a0, -0x3380
    v1 = 2 << 16;                                               // 0x001bd1a8: lui $v1, 2
    *(uint32_t*)((s0) + 0x18) = a0;                             // 0x001bd1ac: sw $a0, 0x18($s0)
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001bd1b0: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x001bd1b4: sw $v1, 0x14($s0)
    goto label_0x1bd230;                                        // 0x001bd1b8: b 0x1bd230
    a1 = *(int32_t*)((s0) + 0x18);                              // 0x001bd1bc: lw $a1, 0x18($s0)
label_0x1bd1c0:
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x001bd1c0: lw $v1, 0x1c($s0)
    v1 = v1 + 1;                                                // 0x001bd1c4: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 0x1c) = v1;                             // 0x001bd1c8: sw $v1, 0x1c($s0)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001bd1cc: lw $v1, 0x10($s0)
    if (v1 >= 0) goto label_0x1bd1e0;                           // 0x001bd1d0: bgez $v1, 0x1bd1e0
    a0 = v1 >> 9;                                               // 0x001bd1d4: sra $a0, $v1, 9
    v1 = v1 + 0x1ff;                                            // 0x001bd1d8: addiu $v1, $v1, 0x1ff
    a0 = v1 >> 9;                                               // 0x001bd1dc: sra $a0, $v1, 9
label_0x1bd1e0:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001bd1e0: lw $v1, 0x20($s0)
    v1 = v1 + a0;                                               // 0x001bd1e4: addu $v1, $v1, $a0
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001bd1e8: sw $v1, 0x20($s0)
    a0 = *(int32_t*)((s0) + 0x10);                              // 0x001bd1ec: lw $a0, 0x10($s0)
    v1 = *(int32_t*)((a1) + 4);                                 // 0x001bd1f0: lw $v1, 4($a1)
    v1 = v1 + a0;                                               // 0x001bd1f4: addu $v1, $v1, $a0
    v1 = v1 + -1;                                               // 0x001bd1f8: addiu $v1, $v1, -1
    /* divide: v1 / a0 -> hi:lo */                              // 0x001bd1fc: div $zero, $v1, $a0
    /* nop */                                                   // 0x001bd200: nop 
    /* nop */                                                   // 0x001bd204: nop 
    /* mflo $v1 */                                              // 0x001bd208
    /* multiply: a0 * v1 -> hi:lo */                            // 0x001bd20c: mult $ac3, $a0, $v1
    if (v1 >= 0) goto label_0x1bd220;                           // 0x001bd210: bgez $v1, 0x1bd220
    a0 = v1 >> 9;                                               // 0x001bd214: sra $a0, $v1, 9
    v1 = v1 + 0x1ff;                                            // 0x001bd218: addiu $v1, $v1, 0x1ff
    a0 = v1 >> 9;                                               // 0x001bd21c: sra $a0, $v1, 9
label_0x1bd220:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001bd220: lw $v1, 0x20($s0)
    a1 = a1 + 0xc;                                              // 0x001bd224: addiu $a1, $a1, 0xc
    v1 = v1 + a0;                                               // 0x001bd228: addu $v1, $v1, $a0
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001bd22c: sw $v1, 0x20($s0)
label_0x1bd230:
    v1 = *(int32_t*)(a1);                                       // 0x001bd230: lw $v1, 0($a1)
    if (v1 != 0) goto label_0x1bd1c0;                           // 0x001bd234: bnez $v1, 0x1bd1c0
    /* nop */                                                   // 0x001bd238: nop 
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001bd23c: lw $v1, 0x10($s0)
    if (v1 >= 0) goto label_0x1bd250;                           // 0x001bd240: bgez $v1, 0x1bd250
    a0 = v1 >> 9;                                               // 0x001bd244: sra $a0, $v1, 9
    v1 = v1 + 0x1ff;                                            // 0x001bd248: addiu $v1, $v1, 0x1ff
    a0 = v1 >> 9;                                               // 0x001bd24c: sra $a0, $v1, 9
label_0x1bd250:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001bd250: lw $v1, 0x20($s0)
    v1 = v1 + a0;                                               // 0x001bd254: addu $v1, $v1, $a0
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001bd258: sw $v1, 0x20($s0)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001bd25c: lw $v1, 0x10($s0)
    if (v1 >= 0) goto label_0x1bd270;                           // 0x001bd260: bgez $v1, 0x1bd270
    a0 = v1 >> 9;                                               // 0x001bd264: sra $a0, $v1, 9
    v1 = v1 + 0x1ff;                                            // 0x001bd268: addiu $v1, $v1, 0x1ff
    a0 = v1 >> 9;                                               // 0x001bd26c: sra $a0, $v1, 9
label_0x1bd270:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001bd270: lw $v1, 0x20($s0)
    v1 = v1 + a0;                                               // 0x001bd274: addu $v1, $v1, $a0
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001bd278: sw $v1, 0x20($s0)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001bd27c: lw $v1, 0x10($s0)
    if (v1 >= 0) goto label_0x1bd290;                           // 0x001bd280: bgez $v1, 0x1bd290
    a0 = v1 >> 9;                                               // 0x001bd284: sra $a0, $v1, 9
    v1 = v1 + 0x1ff;                                            // 0x001bd288: addiu $v1, $v1, 0x1ff
    a0 = v1 >> 9;                                               // 0x001bd28c: sra $a0, $v1, 9
label_0x1bd290:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001bd290: lw $v1, 0x20($s0)
    v1 = v1 + a0;                                               // 0x001bd294: addu $v1, $v1, $a0
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001bd298: sw $v1, 0x20($s0)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001bd29c: lw $v1, 0x10($s0)
    if (v1 >= 0) goto label_0x1bd2b0;                           // 0x001bd2a0: bgez $v1, 0x1bd2b0
    a0 = v1 >> 9;                                               // 0x001bd2a4: sra $a0, $v1, 9
    v1 = v1 + 0x1ff;                                            // 0x001bd2a8: addiu $v1, $v1, 0x1ff
    a0 = v1 >> 9;                                               // 0x001bd2ac: sra $a0, $v1, 9
label_0x1bd2b0:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001bd2b0: lw $v1, 0x20($s0)
    v1 = v1 + a0;                                               // 0x001bd2b4: addu $v1, $v1, $a0
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001bd2b8: sw $v1, 0x20($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd2c0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd2c4: jr $ra
    sp = sp + 0x20;                                             // 0x001bd2c8: addiu $sp, $sp, 0x20
}