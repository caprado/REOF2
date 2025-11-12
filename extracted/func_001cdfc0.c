void func_001cdfc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c;
    
    sp = sp + -0x60;                                            // 0x001cdfc0: addiu $sp, $sp, -0x60
    at = 0x32 << 16;                                            // 0x001cdfc4: lui $at, 0x32
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cdfcc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cdfd4: addu.qb $zero, $sp, $s1
    s3 = *(int32_t*)((a0) + 8);                                 // 0x001cdfdc: lw $s3, 8($a0)
    a0 = g_003257d0;  // Global at 0x003257d0                   // 0x001cdfe4: lw $a0, 0x57d0($at)
    func_001c91f0();  // 0x1c90c0                                // 0x001cdfe8: jal 0x1c90c0
    a1 = sp + 0x58;                                             // 0x001cdfec: addiu $a1, $sp, 0x58
    if (v0 >= 0) goto label_0x1ce000;                           // 0x001cdff0: bgez $v0, 0x1ce000
    /* nop */                                                   // 0x001cdff4: nop 
    goto label_0x1ce0c8;                                        // 0x001cdff8: b 0x1ce0c8
label_0x1ce000:
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x001ce000: lw $v0, 0xc($s0)
    at = (v0 < 0xc8) ? 1 : 0;                                   // 0x001ce004: slti $at, $v0, 0xc8
    if (at == 0) goto label_0x1ce030;                           // 0x001ce008: beqz $at, 0x1ce030
    /* nop */                                                   // 0x001ce00c: nop 
    v1 = local_5c;                                              // 0x001ce010: lhu $v1, 0x5c($sp)
    v1 = v1 - v0;                                               // 0x001ce014: subu $v1, $v1, $v0
    at = (v1 < 0x1e02) ? 1 : 0;                                 // 0x001ce018: slti $at, $v1, 0x1e02
    if (at == 0) goto label_0x1ce028;                           // 0x001ce01c: beqz $at, 0x1ce028
    /* nop */                                                   // 0x001ce020: nop 
label_0x1ce028:
    goto label_0x1ce0cc;                                        // 0x001ce028: b 0x1ce0cc
label_0x1ce030:
    goto label_0x1ce0ac;                                        // 0x001ce034: b 0x1ce0ac
    s2 = sp + 0x5c;                                             // 0x001ce038: addiu $s2, $sp, 0x5c
label_0x1ce03c:
    if (s0 == v0) goto label_0x1ce0c8;                          // 0x001ce03c: beq $s0, $v0, 0x1ce0c8
    v0 = *(uint16_t*)(s2);                                      // 0x001ce044: lhu $v0, 0($s2)
    v0 = v0 - v1;                                               // 0x001ce048: subu $v0, $v0, $v1
    at = (v0 < 0x1e02) ? 1 : 0;                                 // 0x001ce04c: slti $at, $v0, 0x1e02
    if (at == 0) goto label_0x1ce060;                           // 0x001ce050: beqz $at, 0x1ce060
    v0 = 0x28;                                                  // 0x001ce054: addiu $v0, $zero, 0x28
    goto label_0x1ce0c8;                                        // 0x001ce058: b 0x1ce0c8
label_0x1ce060:
    if (a0 != v0) goto label_0x1ce0a4;                          // 0x001ce060: bne $a0, $v0, 0x1ce0a4
    /* nop */                                                   // 0x001ce064: nop 
    a0 = 5;                                                     // 0x001ce068: addiu $a0, $zero, 5
    func_001cdfc0();  // 0x1cdf70                                // 0x001ce070: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001ce078: lui $at, 0x32
    v0 = 0x15;                                                  // 0x001ce07c: addiu $v0, $zero, 0x15
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001ce080: lhu $v1, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001ce084: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001ce088: sw $v0, 0x5930($at)
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001ce08c: lw $v0, -0x7b94($gp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001ce090: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1ce0a4;                           // 0x001ce094: bnez $v0, 0x1ce0a4
    v0 = 0x10;                                                  // 0x001ce098: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001ce09c: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001ce0a0: sw $v0, 0x5930($at)
label_0x1ce0a4:
    v0 = *(uint8_t*)(s1);                                       // 0x001ce0a4: lbu $v0, 0($s1)
    s0 = s0 + v0;                                               // 0x001ce0a8: addu $s0, $s0, $v0
label_0x1ce0ac:
    s1 = s3 + s0;                                               // 0x001ce0ac: addu $s1, $s3, $s0
    a0 = *(uint8_t*)(s1);                                       // 0x001ce0b0: lbu $a0, 0($s1)
    v1 = s0 + a0;                                               // 0x001ce0b4: addu $v1, $s0, $a0
    at = (v1 < 0xc9) ? 1 : 0;                                   // 0x001ce0b8: slti $at, $v1, 0xc9
    if (at != 0) goto label_0x1ce03c;                           // 0x001ce0bc: bnez $at, 0x1ce03c
    v0 = 0xc8;                                                  // 0x001ce0c0: addiu $v0, $zero, 0xc8
label_0x1ce0c8:
label_0x1ce0cc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ce0d0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ce0d4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce0d8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce0dc: jr $ra
    sp = sp + 0x60;                                             // 0x001ce0e0: addiu $sp, $sp, 0x60
}