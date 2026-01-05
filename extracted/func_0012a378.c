void func_0012a378() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_18;
    
    sp = sp + -0x40;                                            // 0x0012a378: addiu $sp, $sp, -0x40
    if (v0 != 0) goto label_0x12a3c0;                           // 0x0012a3a0: bnez $v0, 0x12a3c0
    s2 = *(int32_t*)((v0) + 0x94);                              // 0x0012a3a4: lw $s2, 0x94($v0)
    a0 = 0x22 << 16;                                            // 0x0012a3a8: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x0012a3ac: jal 0x127d90
    a0 = &str_00222bc0;  // "E0071301 ADXT_EntryAfs: can't entry " // 0x0012a3b0: addiu $a0, $a0, 0x2bc0
    goto label_0x12a42c;                                        // 0x0012a3b4: b 0x12a42c
    /* nop */                                                   // 0x0012a3bc: nop 
label_0x12a3c0:
    a2 = *(int32_t*)((v0) + 0xb0);                              // 0x0012a3c0: lw $a2, 0xb0($v0)
    a3 = sp + 0x10;                                             // 0x0012a3c4: addiu $a3, $sp, 0x10
    t0 = sp + 0x14;                                             // 0x0012a3c8: addiu $t0, $sp, 0x14
    func_00129ad8();  // 129ad8                                // 0x0012a3cc: jal 0x129ad8
    t1 = sp + 0x18;                                             // 0x0012a3d0: addiu $t1, $sp, 0x18
    if (v0 != 0) goto label_0x12a410;                           // 0x0012a3e0: bnez $v0, 0x12a410
    a3 = 0x10;                                                  // 0x0012a3e4: addiu $a3, $zero, 0x10
    func_00129c30();  // 129c30                                // 0x0012a3e8: jal 0x129c30
    /* nop */                                                   // 0x0012a3ec: nop 
    a2 = local_10;                                              // 0x0012a3f4: lw $a2, 0x10($sp)
    a3 = local_14;                                              // 0x0012a3fc: lw $a3, 0x14($sp)
    func_0013c9f8();  // 13c9f8                                // 0x0012a400: jal 0x13c9f8
    t0 = local_18;                                              // 0x0012a404: lw $t0, 0x18($sp)
    goto label_0x12a42c;                                        // 0x0012a408: b 0x12a42c
label_0x12a410:
    func_00127f60();  // 127f60                                // 0x0012a410: jal 0x127f60
    /* nop */                                                   // 0x0012a414: nop 
    a0 = 0x22 << 16;                                            // 0x0012a418: lui $a0, 0x22
    a0 = &str_00222bf0;  // "E02080850 ADXT_StartSeamless: parameter error" // 0x0012a41c: addiu $a0, $a0, 0x2bf0
    func_00127de8();  // 127de8                                // 0x0012a420: jal 0x127de8
label_0x12a42c:
    return;                                                     // 0x0012a438: jr $ra
    sp = sp + 0x40;                                             // 0x0012a43c: addiu $sp, $sp, 0x40
}