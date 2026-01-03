void func_001bd900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x140;                                           // 0x001bd900: addiu $sp, $sp, -0x140
    v1 = 2;                                                     // 0x001bd904: addiu $v1, $zero, 2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bd910: addu.qb $zero, $sp, $s1
    a0 = g_42c80005;  // Global at 0x42c80005                   // 0x001bd91c: lw $a0, 4($a0)
    if (a0 == v1) goto label_0x1bdab0;                          // 0x001bd920: beq $a0, $v1, 0x1bdab0
    v1 = 1;                                                     // 0x001bd924: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1bd9d0;                          // 0x001bd928: beq $a0, $v1, 0x1bd9d0
    /* nop */                                                   // 0x001bd92c: nop 
    if (a0 == 0) goto label_0x1bd940;                           // 0x001bd930: beqz $a0, 0x1bd940
    /* nop */                                                   // 0x001bd934: nop 
    goto label_0x1bdb0c;                                        // 0x001bd938: b 0x1bdb0c
label_0x1bd940:
    a1 = *(int32_t*)((s1) + 0x24);                              // 0x001bd940: lw $a1, 0x24($s1)
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x001bd944: lw $v0, 0x18($s1)
    v1 = a1 << 1;                                               // 0x001bd948: sll $v1, $a1, 1
    v1 = v1 + a1;                                               // 0x001bd94c: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001bd950: sll $v1, $v1, 2
    s0 = v0 + v1;                                               // 0x001bd954: addu $s0, $v0, $v1
    a1 = *(int32_t*)(s0);                                       // 0x001bd958: lw $a1, 0($s0)
    func_001bdd90();  // 1bdd90                                // 0x001bd95c: jal 0x1bdd90
    a0 = sp + 0x40;                                             // 0x001bd960: addiu $a0, $sp, 0x40
    a0 = sp + 0x40;                                             // 0x001bd964: addiu $a0, $sp, 0x40
    a1 = 1;                                                     // 0x001bd968: addiu $a1, $zero, 1
    func_00118730();  // 118730                                // 0x001bd96c: jal 0x118730
    if (v0 >= 0) goto label_0x1bd990;                           // 0x001bd974: bgez $v0, 0x1bd990
label_0x1bd97c:
    func_001bd340();  // 1bd340                                // 0x001bd980: jal 0x1bd340
    goto label_0x1bdb08;                                        // 0x001bd988: b 0x1bdb08
    /* nop */                                                   // 0x001bd98c: nop 
label_0x1bd990:
    *(uint32_t*)((s1) + 0x28) = a2;                             // 0x001bd990: sw $a2, 0x28($s1)
    a1 = *(int32_t*)(s0);                                       // 0x001bd994: lw $a1, 0($s0)
    func_001bddd0();  // 1bddd0                                // 0x001bd998: jal 0x1bddd0
    a0 = sp + 0x40;                                             // 0x001bd99c: addiu $a0, $sp, 0x40
    a0 = sp + 0x40;                                             // 0x001bd9a0: addiu $a0, $sp, 0x40
    a1 = 0x602;                                                 // 0x001bd9a4: addiu $a1, $zero, 0x602
    func_00118730();  // 118730                                // 0x001bd9a8: jal 0x118730
    a2 = 0x1b6;                                                 // 0x001bd9ac: addiu $a2, $zero, 0x1b6
    if (v0 < 0) goto label_0x1bd97c;                            // 0x001bd9b0: bltz $v0, 0x1bd97c
    *(uint32_t*)((s1) + 0x2c) = a2;                             // 0x001bd9b8: sw $a2, 0x2c($s1)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x001bd9bc: lw $v1, 4($s1)
    v1 = v1 + 1;                                                // 0x001bd9c0: addiu $v1, $v1, 1
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001bd9c4: sw $v1, 4($s1)
    goto label_0x1bdb08;                                        // 0x001bd9c8: b 0x1bdb08
    *(uint32_t*)((s1) + 0x30) = 0;                              // 0x001bd9cc: sw $zero, 0x30($s1)
label_0x1bd9d0:
    a3 = *(int32_t*)((s1) + 0x24);                              // 0x001bd9d0: lw $a3, 0x24($s1)
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x001bd9d4: lw $v0, 0x18($s1)
    a0 = *(int32_t*)((s1) + 0x28);                              // 0x001bd9d8: lw $a0, 0x28($s1)
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x001bd9dc: lw $a1, 0xc($s1)
    a2 = *(int32_t*)((s1) + 0x14);                              // 0x001bd9e0: lw $a2, 0x14($s1)
    v1 = a3 << 1;                                               // 0x001bd9e4: sll $v1, $a3, 1
    v1 = v1 + a3;                                               // 0x001bd9e8: addu $v1, $v1, $a3
    v1 = v1 << 2;                                               // 0x001bd9ec: sll $v1, $v1, 2
    func_00118d70();  // 118d70                                // 0x001bd9f0: jal 0x118d70
    s0 = v0 + v1;                                               // 0x001bd9f4: addu $s0, $v0, $v1
    if (v0 < 0) goto label_0x1bd97c;                            // 0x001bd9f8: bltz $v0, 0x1bd97c
    a0 = *(int32_t*)((s1) + 0x2c);                              // 0x001bda00: lw $a0, 0x2c($s1)
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x001bda04: lw $a1, 0xc($s1)
    func_00118fd0();  // 118fd0                                // 0x001bda08: jal 0x118fd0
    if (v0 < 0) goto label_0x1bd97c;                            // 0x001bda10: bltz $v0, 0x1bd97c
    a0 = *(int32_t*)((s1) + 0x30);                              // 0x001bda18: lw $a0, 0x30($s1)
    v1 = 0x42c8 << 16;                                          // 0x001bda1c: lui $v1, 0x42c8
    /* move to FPU: $v1, $f0 */                                 // 0x001bda20: mtc1 $v1, $f0
    v1 = a0 + s2;                                               // 0x001bda24: addu $v1, $a0, $s2
    *(uint32_t*)((s1) + 0x30) = v1;                             // 0x001bda28: sw $v1, 0x30($s1)
    v1 = *(int32_t*)((s1) + 0x34);                              // 0x001bda2c: lw $v1, 0x34($s1)
    v1 = v1 + s2;                                               // 0x001bda30: addu $v1, $v1, $s2
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x001bda34: sw $v1, 0x34($s1)
    FPU_F1 = *(float*)((s1) + 0x34);  // Load float             // 0x001bda38: lwc1 $f1, 0x34($s1)
    v1 = *(int32_t*)((s1) + 0x20);                              // 0x001bda3c: lw $v1, 0x20($s1)
    /* FPU: cvt.s.w $f2, $f1 */                                 // 0x001bda40: cvt.s.w $f2, $f1
    v1 = v1 << 9;                                               // 0x001bda44: sll $v1, $v1, 9
    /* move to FPU: $v1, $f1 */                                 // 0x001bda48: mtc1 $v1, $f1
    /* nop */                                                   // 0x001bda4c: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001bda50: cvt.s.w $f1, $f1
    /* FPU: div.s $f1, $f2, $f1 */                              // 0x001bda54: div.s $f1, $f2, $f1
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001bda58: mul.s $f0, $f0, $f1
    *(float*)((s1) + 0x38) = FPU_F0;  // Store float            // 0x001bda5c: swc1 $f0, 0x38($s1)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001bda60: lw $a0, 4($s0)
    v1 = *(int32_t*)((s1) + 0x30);                              // 0x001bda64: lw $v1, 0x30($s1)
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x001bda68: slt $v1, $v1, $a0
    if (v1 != 0) goto label_0x1bdb08;                           // 0x001bda6c: bnez $v1, 0x1bdb08
    /* nop */                                                   // 0x001bda70: nop 
    *(uint32_t*)((s0) + 8) = a0;                                // 0x001bda74: sw $a0, 8($s0)
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x001bda78: lw $a0, 0x10($s1)
    v1 = *(int32_t*)((s1) + 0x34);                              // 0x001bda7c: lw $v1, 0x34($s1)
    v1 = v1 + a0;                                               // 0x001bda80: addu $v1, $v1, $a0
    v1 = v1 + -1;                                               // 0x001bda84: addiu $v1, $v1, -1
    /* divide: v1 / a0 -> hi:lo */                              // 0x001bda88: div $zero, $v1, $a0
    /* nop */                                                   // 0x001bda8c: nop 
    /* nop */                                                   // 0x001bda90: nop 
    /* mflo $v1 */                                              // 0x001bda94
    /* multiply: a0 * v1 -> hi:lo */                            // 0x001bda98: mult $ac3, $a0, $v1
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x001bda9c: sw $v1, 0x34($s1)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x001bdaa0: lw $v1, 4($s1)
    v1 = v1 + 1;                                                // 0x001bdaa4: addiu $v1, $v1, 1
    goto label_0x1bdb08;                                        // 0x001bdaa8: b 0x1bdb08
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001bdaac: sw $v1, 4($s1)
label_0x1bdab0:
    func_001189b8();  // 1189b8                                // 0x001bdab0: jal 0x1189b8
    a0 = *(int32_t*)((s1) + 0x28);                              // 0x001bdab4: lw $a0, 0x28($s1)
    func_001189b8();  // 1189b8                                // 0x001bdab8: jal 0x1189b8
    a0 = *(int32_t*)((s1) + 0x2c);                              // 0x001bdabc: lw $a0, 0x2c($s1)
    *(uint32_t*)((s1) + 0x28) = 0;                              // 0x001bdac0: sw $zero, 0x28($s1)
    *(uint32_t*)((s1) + 0x2c) = 0;                              // 0x001bdac4: sw $zero, 0x2c($s1)
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x001bdac8: lw $v1, 0x24($s1)
    a0 = v1 + 1;                                                // 0x001bdacc: addiu $a0, $v1, 1
    *(uint32_t*)((s1) + 0x24) = a0;                             // 0x001bdad0: sw $a0, 0x24($s1)
    v1 = *(int32_t*)((s1) + 0x1c);                              // 0x001bdad4: lw $v1, 0x1c($s1)
    at = (a0 < v1) ? 1 : 0;                                     // 0x001bdad8: slt $at, $a0, $v1
    if (at == 0) goto label_0x1bdaec;                           // 0x001bdadc: beqz $at, 0x1bdaec
    /* nop */                                                   // 0x001bdae0: nop 
    goto label_0x1bdb08;                                        // 0x001bdae4: b 0x1bdb08
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001bdae8: sw $zero, 4($s1)
label_0x1bdaec:
    func_001bdd80();  // 1bdd80                                // 0x001bdaec: jal 0x1bdd80
    /* nop */                                                   // 0x001bdaf0: nop 
    if (v0 < 0) goto label_0x1bd97c;                            // 0x001bdaf4: bltz $v0, 0x1bd97c
    v1 = *(int32_t*)(s1);                                       // 0x001bdafc: lw $v1, 0($s1)
    v1 = v1 + 1;                                                // 0x001bdb00: addiu $v1, $v1, 1
    *(uint32_t*)(s1) = v1;                                      // 0x001bdb04: sw $v1, 0($s1)
label_0x1bdb08:
label_0x1bdb0c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bdb0c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bdb10: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bdb14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bdb18: jr $ra
    sp = sp + 0x140;                                            // 0x001bdb1c: addiu $sp, $sp, 0x140
}