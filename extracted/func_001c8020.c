void func_001c8020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c8020: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8028: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8030: jal 0x1c7770
    v0 = *(uint8_t*)((s1) + 1);                                 // 0x001c8038: lbu $v0, 1($s1)
    at = 0x31 << 16;                                            // 0x001c803c: lui $at, 0x31
    s0 = 0x31 << 16;                                            // 0x001c8040: lui $s0, 0x31
    s0 = s0 + 0x669c;                                           // 0x001c8048: addiu $s0, $s0, 0x669c
    a2 = 0x30e;                                                 // 0x001c804c: addiu $a2, $zero, 0x30e
    g_00316680 = v0;  // Global at 0x00316680                   // 0x001c8054: sw $v0, 0x6680($at)
    v0 = *(uint8_t*)((s1) + 0x26);                              // 0x001c8058: lbu $v0, 0x26($s1)
    at = 0x31 << 16;                                            // 0x001c805c: lui $at, 0x31
    g_00316684 = v0;  // Global at 0x00316684                   // 0x001c8060: sw $v0, 0x6684($at)
    v0 = *(uint8_t*)((s1) + 0x27);                              // 0x001c8064: lbu $v0, 0x27($s1)
    at = 0x31 << 16;                                            // 0x001c8068: lui $at, 0x31
    func_00107d30();  // 0x107c70                                // 0x001c806c: jal 0x107c70
    g_00316688 = v0;  // Global at 0x00316688                   // 0x001c8070: sw $v0, 0x6688($at)
    v0 = *(uint8_t*)(s1);                                       // 0x001c8074: lbu $v0, 0($s1)
    g_0031669c = v0;  // Global at 0x0031669c                   // 0x001c8078: sh $v0, 0($s0)
    a1 = *(int32_t*)((s1) + 4);                                 // 0x001c807c: lw $a1, 4($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001c8080: jal 0x10ac68
    a0 = s0 + 4;                                                // 0x001c8084: addiu $a0, $s0, 4
    a1 = *(int32_t*)((s1) + 8);                                 // 0x001c8088: lw $a1, 8($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001c808c: jal 0x10ac68
    a0 = s0 + 0x104;                                            // 0x001c8090: addiu $a0, $s0, 0x104
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x001c8094: lw $a1, 0xc($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001c8098: jal 0x10ac68
    a0 = s0 + 0x204;                                            // 0x001c809c: addiu $a0, $s0, 0x204
    a1 = *(int32_t*)((s1) + 0x10);                              // 0x001c80a0: lw $a1, 0x10($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001c80a4: jal 0x10ac68
    a0 = s0 + 0x244;                                            // 0x001c80a8: addiu $a0, $s0, 0x244
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x001c80ac: lw $a1, 0x14($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001c80b0: jal 0x10ac68
    a0 = s0 + 0x284;                                            // 0x001c80b4: addiu $a0, $s0, 0x284
    v0 = *(int16_t*)((s1) + 2);                                 // 0x001c80b8: lh $v0, 2($s1)
    g_0031669e = v0;  // Global at 0x0031669e                   // 0x001c80bc: sh $v0, 2($s0)
    a1 = *(int32_t*)((s1) + 0x18);                              // 0x001c80c0: lw $a1, 0x18($s1)
    func_0010ae00();  // 0x10ac68                                // 0x001c80c4: jal 0x10ac68
    a0 = s0 + 0x2c4;                                            // 0x001c80c8: addiu $a0, $s0, 0x2c4
    v0 = *(int16_t*)((s1) + 0x1c);                              // 0x001c80cc: lh $v0, 0x1c($s1)
    a0 = 0x23;                                                  // 0x001c80d0: addiu $a0, $zero, 0x23
    a1 = 0x32e;                                                 // 0x001c80d4: addiu $a1, $zero, 0x32e
    a2 = 0x20;                                                  // 0x001c80d8: addiu $a2, $zero, 0x20
    g_003169a0 = v0;  // Global at 0x003169a0                   // 0x001c80dc: sh $v0, 0x304($s0)
    v0 = *(int16_t*)((s1) + 0x1e);                              // 0x001c80e0: lh $v0, 0x1e($s1)
    g_003169a2 = v0;  // Global at 0x003169a2                   // 0x001c80e4: sh $v0, 0x306($s0)
    v0 = *(int16_t*)((s1) + 0x20);                              // 0x001c80e8: lh $v0, 0x20($s1)
    g_003169a4 = v0;  // Global at 0x003169a4                   // 0x001c80ec: sh $v0, 0x308($s0)
    v0 = *(int16_t*)((s1) + 0x22);                              // 0x001c80f0: lh $v0, 0x22($s1)
    g_003169a6 = v0;  // Global at 0x003169a6                   // 0x001c80f4: sh $v0, 0x30a($s0)
    v0 = *(int16_t*)((s1) + 0x24);                              // 0x001c80f8: lh $v0, 0x24($s1)
    func_001c7670();  // 0x1c75b0                                // 0x001c80fc: jal 0x1c75b0
    g_003169a8 = v0;  // Global at 0x003169a8                   // 0x001c8100: sh $v0, 0x30c($s0)
    func_001c7790();  // 0x1c7780                                // 0x001c8108: jal 0x1c7780
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8118: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c811c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8120: jr $ra
    sp = sp + 0x30;                                             // 0x001c8124: addiu $sp, $sp, 0x30
}