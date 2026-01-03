void func_001b8840() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x001b8840: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b8848: addu.qb $zero, $sp, $s1
    if (s0 == 0) goto label_0x1b88a0;                           // 0x001b8854: beqz $s0, 0x1b88a0
    a0 = *(uint8_t*)((s1) + 0xc8c);                             // 0x001b885c: lbu $a0, 0xc8c($s1)
    v1 = 0xff;                                                  // 0x001b8860: addiu $v1, $zero, 0xff
    if (a0 == v1) goto label_0x1b8938;                          // 0x001b8864: beq $a0, $v1, 0x1b8938
    /* nop */                                                   // 0x001b8868: nop 
    func_005895c0();  // 0x5895c0                               // 0x001b886c: jal 0x5895c0
    a0 = a0 & 0xff;                                             // 0x001b8870: andi $a0, $a0, 0xff
    v1 = -1;                                                    // 0x001b8878: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1b8938;                          // 0x001b8880: beq $a0, $v1, 0x1b8938
    v1 = 0x22 << 16;                                            // 0x001b8884: lui $v1, 0x22
    v1 = v1 + -0x3690;                                          // 0x001b8888: addiu $v1, $v1, -0x3690
    v1 = v1 + a0;                                               // 0x001b888c: addu $v1, $v1, $a0
    s0 = g_0021c970;  // Global at 0x0021c970                   // 0x001b8890: lbu $s0, 0($v1)
    at = (s0 < 4) ? 1 : 0;                                      // 0x001b8894: slti $at, $s0, 4
    if (at == 0) goto label_0x1b8938;                           // 0x001b8898: beqz $at, 0x1b8938
    /* nop */                                                   // 0x001b889c: nop 
label_0x1b88a0:
    at = 0x49 << 16;                                            // 0x001b88a0: lui $at, 0x49
    v1 = 0x48 << 16;                                            // 0x001b88a4: lui $v1, 0x48
    a2 = g_004912bd;  // Global at 0x004912bd                   // 0x001b88a8: lbu $a2, 0x12bd($at)
    v1 = v1 + -0x40ee;                                          // 0x001b88ac: addiu $v1, $v1, -0x40ee
    a0 = *(uint16_t*)((s1) + 0x1e2);                            // 0x001b88b0: lhu $a0, 0x1e2($s1)
    a1 = a2 << 4;                                               // 0x001b88b4: sll $a1, $a2, 4
    a1 = a1 + a2;                                               // 0x001b88b8: addu $a1, $a1, $a2
    a2 = a1 << 8;                                               // 0x001b88bc: sll $a2, $a1, 8
    v1 = v1 + a2;                                               // 0x001b88c0: addu $v1, $v1, $a2
    v1 = g_0047bf12;  // Global at 0x0047bf12                   // 0x001b88c4: lhu $v1, 0($v1)
    if (a0 == v1) goto label_0x1b8938;                          // 0x001b88c8: beq $a0, $v1, 0x1b8938
    /* nop */                                                   // 0x001b88cc: nop 
    v0 = 0x48 << 16;                                            // 0x001b88d0: lui $v0, 0x48
    a1 = s1 + 0x38;                                             // 0x001b88d4: addiu $a1, $s1, 0x38
    v0 = v0 + -0x42d0;                                          // 0x001b88d8: addiu $v0, $v0, -0x42d0
    func_00639af0();  // 0x639af0                               // 0x001b88dc: jal 0x639af0
    a0 = v0 + a2;                                               // 0x001b88e0: addu $a0, $v0, $a2
    v1 = 0x44fa << 16;                                          // 0x001b88e4: lui $v1, 0x44fa
    /* move to FPU: $v1, $f1 */                                 // 0x001b88e8: mtc1 $v1, $f1
    /* nop */                                                   // 0x001b88ec: nop 
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001b88f0: c.olt.s $f1, $f0
    /* bc1t 0x1b8938 */                                         // 0x001b88f4: bc1t 0x1b8938
    at = 0x22 << 16;                                            // 0x001b88f8: lui $at, 0x22
    a0 = s1 + 0x38;                                             // 0x001b88fc: addiu $a0, $s1, 0x38
    a1 = g_0021c968;  // Global at 0x0021c968                   // 0x001b8900: lw $a1, -0x3698($at)
    a2 = sp + 0x38;                                             // 0x001b8904: addiu $a2, $sp, 0x38
    func_001b8c20();  // 1b8c20                                // 0x001b8908: jal 0x1b8c20
    a3 = sp + 0x3c;                                             // 0x001b890c: addiu $a3, $sp, 0x3c
    if (v0 == 0) goto label_0x1b8938;                           // 0x001b8910: beqz $v0, 0x1b8938
    /* nop */                                                   // 0x001b8914: nop 
    a3 = local_38;                                              // 0x001b8918: lw $a3, 0x38($sp)
    a1 = s0 + 4;                                                // 0x001b891c: addiu $a1, $s0, 4
    t0 = local_3c;                                              // 0x001b8920: lw $t0, 0x3c($sp)
    a0 = 1;                                                     // 0x001b8924: addiu $a0, $zero, 1
    t1 = -1;                                                    // 0x001b892c: addiu $t1, $zero, -1
    func_001ac220();  // 1ac220                                // 0x001b8930: jal 0x1ac220
label_0x1b8938:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b893c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b8940: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b8944: jr $ra
    sp = sp + 0x40;                                             // 0x001b8948: addiu $sp, $sp, 0x40
}