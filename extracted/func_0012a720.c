void func_0012a720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0012a720: addiu $sp, $sp, -0x30
    if (s1 == 0) goto label_0x12a7d8;                           // 0x0012a740: beqz $s1, 0x12a7d8
    v0 = 0x1f << 16;                                            // 0x0012a748: lui $v0, 0x1f
    s0 = 0x1f << 16;                                            // 0x0012a74c: lui $s0, 0x1f
    a1 = g_001f6a60;  // Global at 0x001f6a60                   // 0x0012a750: lw $a1, 0x6a60($v0)
    v0 = 1;                                                     // 0x0012a754: addiu $v0, $zero, 1
    s0 = s0 + 0x6a84;                                           // 0x0012a758: addiu $s0, $s0, 0x6a84
    s2 = 0xbeb << 16;                                           // 0x0012a75c: lui $s2, 0xbeb
    g_001f6a84 = v0;  // Global at 0x001f6a84                   // 0x0012a760: sw $v0, 0($s0)
    s2 = s2 | 0xc1ff;                                           // 0x0012a768: ori $s2, $s2, 0xc1ff
    iChangeThreadPriority();  // 0x114170                       // 0x0012a76c: jal 0x114170
    goto label_0x12a784;                                        // 0x0012a774: b 0x12a784
    v0 = (s2 < s0) ? 1 : 0;                                     // 0x0012a778: slt $v0, $s2, $s0
    /* nop */                                                   // 0x0012a77c: nop 
    v0 = (s2 < s0) ? 1 : 0;                                     // 0x0012a780: slt $v0, $s2, $s0
label_0x12a784:
    /* bnezl $v0, 0x12a7ac */                                   // 0x0012a784: bnezl $v0, 0x12a7ac
    v0 = 0xbeb << 16;                                           // 0x0012a788: lui $v0, 0xbeb
    func_0012ad48();  // 12ad48                                // 0x0012a78c: jal 0x12ad48
    func_0012adb0();  // 12adb0                                // 0x0012a794: jal 0x12adb0
    v1 = *(int32_t*)(s3);                                       // 0x0012a79c: lw $v1, 0($s3)
    /* bnezl $v1, 0x12a780 */                                   // 0x0012a7a0: bnezl $v1, 0x12a780
    s0 = s0 + 1;                                                // 0x0012a7a4: addiu $s0, $s0, 1
    v0 = 0xbeb << 16;                                           // 0x0012a7a8: lui $v0, 0xbeb
    v0 = v0 | 0xc200;                                           // 0x0012a7ac: ori $v0, $v0, 0xc200
    if (s0 != v0) goto label_0x12a7c8;                          // 0x0012a7b0: bnel $s0, $v0, 0x12a7c8
    a0 = 0x22 << 16;                                            // 0x0012a7b8: lui $a0, 0x22
    func_00141568();  // 141568                                // 0x0012a7bc: jal 0x141568
    a0 = &str_00222d38;  // "ADXRNA_GetStat: not implemented\n" // 0x0012a7c0: addiu $a0, $a0, 0x2d38
label_0x12a7c8:
    iChangeThreadPriority();  // 0x114170                       // 0x0012a7c8: jal 0x114170
    func_0012ae18();  // 12ae18                                // 0x0012a7d0: jal 0x12ae18
label_0x12a7d8:
    return;                                                     // 0x0012a7f0: jr $ra
    sp = sp + 0x30;                                             // 0x0012a7f4: addiu $sp, $sp, 0x30
}