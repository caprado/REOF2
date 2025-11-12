void func_00187730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_4, local_8;
    
    v0 = 0x23 << 16;                                            // 0x00187730: lui $v0, 0x23
    sp = sp + -0x30;                                            // 0x00187734: addiu $sp, $sp, -0x30
    v1 = 0x21 << 16;                                            // 0x00187738: lui $v1, 0x21
    v0 = &str_00229fd8;  // "** PANIC!\n"                       // 0x0018773c: addiu $v0, $v0, -0x6028
    a1 = 0x7f;                                                  // 0x00187740: addiu $a1, $zero, 0x7f
    g_00216320 = 0;  // Global at 0x00216320                    // 0x00187748: sw $zero, 0x6320($v1)
    local_4 = a1;                                               // 0x00187750: sw $a1, 4($sp)
    local_14 = v0;                                              // 0x00187754: sw $v0, 0x14($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00187758: jal 0x1142e0
    local_8 = 0;                                                // 0x0018775c: sw $zero, 8($sp)
    v1 = 0x28 << 16;                                            // 0x00187760: lui $v1, 0x28
    if (v0 >= 0) goto label_0x187774;                           // 0x00187764: bgez $v0, 0x187774
    g_0027d040 = v0;  // Global at 0x0027d040                   // 0x00187768: sw $v0, -0x2fc0($v1)
    goto label_0x1877b4;                                        // 0x0018776c: b 0x1877b4
label_0x187774:
    v0 = 0x28 << 16;                                            // 0x00187774: lui $v0, 0x28
    a3 = 0x200;                                                 // 0x00187778: addiu $a3, $zero, 0x200
    v1 = v0 + -0x2fb8;                                          // 0x0018777c: addiu $v1, $v0, -0x2fb8
    a2 = 0x10;                                                  // 0x00187780: addiu $a2, $zero, 0x10
    a1 = v1 + 0x48;                                             // 0x00187784: addiu $a1, $v1, 0x48
    a0 = 0x4000;                                                // 0x00187788: addiu $a0, $zero, 0x4000
    /* nop */                                                   // 0x0018778c: nop 
label_0x187790:
    g_0027d048 = 0;  // Global at 0x0027d048                    // 0x00187790: sw $zero, 0($v1)
    g_0027d050 = a3;  // Global at 0x0027d050                   // 0x00187794: sw $a3, 8($v1)
    g_0027d054 = a2;  // Global at 0x0027d054                   // 0x00187798: sw $a2, 0xc($v1)
    g_0027d058 = a0;  // Global at 0x0027d058                   // 0x0018779c: sw $a0, 0x10($v1)
    v1 = v1 + 0x24;                                             // 0x001877a0: addiu $v1, $v1, 0x24
    v0 = (v1 < a1) ? 1 : 0;                                     // 0x001877a4: slt $v0, $v1, $a1
    if (v0 != 0) goto label_0x187790;                           // 0x001877a8: bnez $v0, 0x187790
    /* nop */                                                   // 0x001877ac: nop 
    v0 = 1;                                                     // 0x001877b0: addiu $v0, $zero, 1
label_0x1877b4:
    return;                                                     // 0x001877b8: jr $ra
    sp = sp + 0x30;                                             // 0x001877bc: addiu $sp, $sp, 0x30
}