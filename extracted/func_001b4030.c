void func_001b4030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a2 + a3;                                               // 0x001b4030: addu $a1, $a2, $a3
    t1 = 0x30 << 16;                                            // 0x001b4034: lui $t1, 0x30
    t0 = 0x30 << 16;                                            // 0x001b4038: lui $t0, 0x30
    t1 = t1 + 0x6c00;                                           // 0x001b403c: addiu $t1, $t1, 0x6c00
    t0 = t0 + 0x6c10;                                           // 0x001b4040: addiu $t0, $t0, 0x6c10
    goto label_0x1b409c;                                        // 0x001b4044: b 0x1b409c
label_0x1b404c:
    v0 = g_00306c10;  // Global at 0x00306c10                   // 0x001b404c: lh $v0, 0($t0)
    if (v0 == 0) goto label_0x1b4094;                           // 0x001b4050: beqz $v0, 0x1b4094
    /* nop */                                                   // 0x001b4054: nop 
    v0 = g_00306c1b;  // Global at 0x00306c1b                   // 0x001b4058: lbu $v0, 0xb($t0)
    at = (v0 < a0) ? 1 : 0;                                     // 0x001b405c: slt $at, $v0, $a0
    if (at == 0) goto label_0x1b4094;                           // 0x001b4060: beqz $at, 0x1b4094
    /* nop */                                                   // 0x001b4064: nop 
    v1 = g_00306c14;  // Global at 0x00306c14                   // 0x001b4068: lh $v1, 4($t0)
    at = (v1 < a1) ? 1 : 0;                                     // 0x001b406c: slt $at, $v1, $a1
    if (at == 0) goto label_0x1b4094;                           // 0x001b4070: beqz $at, 0x1b4094
    /* nop */                                                   // 0x001b4074: nop 
    v0 = g_00306c18;  // Global at 0x00306c18                   // 0x001b4078: lbu $v0, 8($t0)
    v0 = v1 + v0;                                               // 0x001b407c: addu $v0, $v1, $v0
    at = (a2 < v0) ? 1 : 0;                                     // 0x001b4080: slt $at, $a2, $v0
    if (at == 0) goto label_0x1b4094;                           // 0x001b4084: beqz $at, 0x1b4094
    goto label_0x1b40dc;                                        // 0x001b408c: b 0x1b40dc
    /* nop */                                                   // 0x001b4090: nop 
label_0x1b4094:
    a3 = a3 + 1;                                                // 0x001b4094: addiu $a3, $a3, 1
    t0 = t0 + 0x8c;                                             // 0x001b4098: addiu $t0, $t0, 0x8c
label_0x1b409c:
    v0 = (a3 < 0x20) ? 1 : 0;                                   // 0x001b409c: slti $v0, $a3, 0x20
    if (v0 != 0) goto label_0x1b404c;                           // 0x001b40a0: bnez $v0, 0x1b404c
    /* nop */                                                   // 0x001b40a4: nop 
    a0 = t1 + 0x10;                                             // 0x001b40a8: addiu $a0, $t1, 0x10
    goto label_0x1b40d0;                                        // 0x001b40ac: b 0x1b40d0
label_0x1b40b4:
    v0 = g_00306c10;  // Global at 0x00306c10                   // 0x001b40b4: lh $v0, 0($a0)
    if (v0 != 0) goto label_0x1b40c8;                           // 0x001b40b8: bnez $v0, 0x1b40c8
    v0 = 1;                                                     // 0x001b40bc: addiu $v0, $zero, 1
    goto label_0x1b40dc;                                        // 0x001b40c0: b 0x1b40dc
    /* nop */                                                   // 0x001b40c4: nop 
label_0x1b40c8:
    v1 = v1 + 1;                                                // 0x001b40c8: addiu $v1, $v1, 1
    a0 = a0 + 0x8c;                                             // 0x001b40cc: addiu $a0, $a0, 0x8c
label_0x1b40d0:
    v0 = (v1 < 0x20) ? 1 : 0;                                   // 0x001b40d0: slti $v0, $v1, 0x20
    if (v0 != 0) goto label_0x1b40b4;                           // 0x001b40d4: bnez $v0, 0x1b40b4
label_0x1b40dc:
    return;                                                     // 0x001b40dc: jr $ra
    /* nop */                                                   // 0x001b40e0: nop 
}