void func_001b6150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_3c;
    
    sp = sp + -0x40;                                            // 0x001b6150: addiu $sp, $sp, -0x40
    at = 0x2b << 16;                                            // 0x001b6154: lui $at, 0x2b
    v0 = 2;                                                     // 0x001b615c: addiu $v0, $zero, 2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b6160: addu.qb $zero, $sp, $s1
    v1 = g_002ac548;  // Global at 0x002ac548                   // 0x001b6168: lw $v1, -0x3ab8($at)
    s0 = 0x2b << 16;                                            // 0x001b616c: lui $s0, 0x2b
    if (v1 == v0) goto label_0x1b6188;                          // 0x001b6170: beq $v1, $v0, 0x1b6188
    s0 = s0 + -0x3ac0;                                          // 0x001b6174: addiu $s0, $s0, -0x3ac0
    func_0010af38();  // 0x10ae00                                // 0x001b6178: jal 0x10ae00
    /* nop */                                                   // 0x001b617c: nop 
    goto label_0x1b620c;                                        // 0x001b6180: b 0x1b620c
label_0x1b6188:
    local_3c = a0;                                              // 0x001b6188: sw $a0, 0x3c($sp)
label_0x1b6190:
    func_001b60d0();  // 0x1b5fa0                                // 0x001b6190: jal 0x1b5fa0
    a0 = sp + 0x3c;                                             // 0x001b6194: addiu $a0, $sp, 0x3c
    if (v0 == 0) goto label_0x1b6204;                           // 0x001b6198: beqz $v0, 0x1b6204
    /* nop */                                                   // 0x001b619c: nop 
    v1 = g_002ac5d4;  // Global at 0x002ac5d4                   // 0x001b61a0: lw $v1, 0x94($s0)
    if (v1 != 0) goto label_0x1b61d4;                           // 0x001b61a4: bnez $v1, 0x1b61d4
    at = (v0 < 0x10) ? 1 : 0;                                   // 0x001b61ac: slti $at, $v0, 0x10
    if (at == 0) goto label_0x1b61c0;                           // 0x001b61b0: beqz $at, 0x1b61c0
    at = (v0 < 0x80) ? 1 : 0;                                   // 0x001b61b4: slti $at, $v0, 0x80
    goto label_0x1b6190;                                        // 0x001b61b8: b 0x1b6190
    s1 = s1 + 2;                                                // 0x001b61bc: addiu $s1, $s1, 2
label_0x1b61c0:
    if (at == 0) goto label_0x1b61d0;                           // 0x001b61c0: beqz $at, 0x1b61d0
    /* nop */                                                   // 0x001b61c4: nop 
    goto label_0x1b6190;                                        // 0x001b61c8: b 0x1b6190
    s1 = s1 + 1;                                                // 0x001b61cc: addiu $s1, $s1, 1
label_0x1b61d0:
label_0x1b61d4:
    func_001b6140();  // 0x1b60d0                                // 0x001b61d4: jal 0x1b60d0
    func_001b6150();  // 0x1b6140                                // 0x001b61e0: jal 0x1b6140
    if (v0 != 0) goto label_0x1b61f8;                           // 0x001b61e8: bnez $v0, 0x1b61f8
    /* nop */                                                   // 0x001b61ec: nop 
    goto label_0x1b61fc;                                        // 0x001b61f0: b 0x1b61fc
    v0 = 2;                                                     // 0x001b61f4: addiu $v0, $zero, 2
label_0x1b61f8:
    v0 = 1;                                                     // 0x001b61f8: addiu $v0, $zero, 1
label_0x1b61fc:
    goto label_0x1b6190;                                        // 0x001b61fc: b 0x1b6190
    s1 = s1 + v0;                                               // 0x001b6200: addu $s1, $s1, $v0
label_0x1b6204:
label_0x1b620c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b620c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b6210: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b6214: jr $ra
    sp = sp + 0x40;                                             // 0x001b6218: addiu $sp, $sp, 0x40
}