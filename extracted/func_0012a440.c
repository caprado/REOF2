void func_0012a440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012a440: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x12a478;                           // 0x0012a454: bnez $s0, 0x12a478
    s1 = *(int32_t*)((s0) + 0x94);                              // 0x0012a458: lw $s1, 0x94($s0)
    a0 = 0x22 << 16;                                            // 0x0012a45c: lui $a0, 0x22
    a0 = &str_00222c18;  // "E02080851 ADXT_SetSeamlessLp: parameter error" // 0x0012a468: addiu $a0, $a0, 0x2c18
    return func_00127de8();  // Tail call                        // 0x0012a470: j 0x127d90
    sp = sp + 0x20;                                             // 0x0012a474: addiu $sp, $sp, 0x20
label_0x12a478:
    func_00131a58();  // 131a58                                // 0x0012a478: jal 0x131a58
    /* nop */                                                   // 0x0012a47c: nop 
    func_001261a0();  // 1261a0                                // 0x0012a480: jal 0x1261a0
    /* nop */                                                   // 0x0012a484: nop 
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0012a488: lw $a1, 0x10($s0)
    func_00131820();  // 131820                                // 0x0012a48c: jal 0x131820
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x0012a494: lw $a0, 0x14($s0)
    v1 = str_00222c18;  // "E02080851 ADXT_SetSeamlessLp: parameter error" // 0x0012a498: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x0012a49c: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x0012a4a0: jalr $v0
    /* nop */                                                   // 0x0012a4a4: nop 
    v1 = 4;                                                     // 0x0012a4a8: addiu $v1, $zero, 4
    a1 = *(int16_t*)((s0) + 0x3e);                              // 0x0012a4ac: lh $a1, 0x3e($s0)
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x0012a4b4: sb $v1, 2($s0)
    func_0013d018();  // 13d018                                // 0x0012a4b8: jal 0x13d018
    a1 = a1 << 0xb;                                             // 0x0012a4bc: sll $a1, $a1, 0xb
    func_001261b8();  // 1261b8                                // 0x0012a4c0: jal 0x1261b8
    /* nop */                                                   // 0x0012a4c4: nop 
    func_0013cbd0();  // 13cbd0                                // 0x0012a4c8: jal 0x13cbd0
    v0 = 1;                                                     // 0x0012a4d0: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 0x98) = v0;                              // 0x0012a4d4: sb $v0, 0x98($s0)
    return;                                                     // 0x0012a4e4: jr $ra
    sp = sp + 0x20;                                             // 0x0012a4e8: addiu $sp, $sp, 0x20
}