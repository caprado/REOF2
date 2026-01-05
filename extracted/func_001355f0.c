void func_001355f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_130;
    
    sp = sp + -0x290;                                           // 0x001355f0: addiu $sp, $sp, -0x290
    if (s1 != 0) goto label_0x135628;                           // 0x00135614: bnez $s1, 0x135628
    a0 = 0x22 << 16;                                            // 0x0013561c: lui $a0, 0x22
    goto label_0x1356ec;                                        // 0x00135620: b 0x1356ec
    a0 = &str_00224120;  // "cvFsOpen #3:failed handle alloced" // 0x00135624: addiu $a0, $a0, 0x4120
label_0x135628:
    s2 = sp + 0x130;                                            // 0x00135628: addiu $s2, $sp, 0x130
    func_00135790();  // 135790                                // 0x00135634: jal 0x135790
    v0 = local_130;                                             // 0x0013563c: lb $v0, 0x130($sp)
    if (v0 != 0) goto label_0x135650;                           // 0x00135640: bnez $v0, 0x135650
    a0 = 0x22 << 16;                                            // 0x00135644: lui $a0, 0x22
    goto label_0x1356ec;                                        // 0x00135648: b 0x1356ec
    a0 = &str_00224120;  // "cvFsOpen #3:failed handle alloced" // 0x0013564c: addiu $a0, $a0, 0x4120
label_0x135650:
    func_00135718();  // 135718                                // 0x00135650: jal 0x135718
    /* nop */                                                   // 0x00135654: nop 
    if (s0 != 0) goto label_0x135670;                           // 0x0013565c: bnez $s0, 0x135670
    a0 = 0x22 << 16;                                            // 0x00135664: lui $a0, 0x22
    goto label_0x1356ec;                                        // 0x00135668: b 0x1356ec
    a0 = &str_00224140;  // "cvFsOpen #2:illegal device name"   // 0x0013566c: addiu $a0, $a0, 0x4140
label_0x135670:
    func_00135548();  // 135548                                // 0x00135674: jal 0x135548
    if (v0 != 0) goto label_0x135698;                           // 0x0013567c: bnez $v0, 0x135698
    *(uint32_t*)(s0) = v0;                                      // 0x00135680: sw $v0, 0($s0)
    func_00135780();  // 135780                                // 0x00135684: jal 0x135780
    a0 = 0x22 << 16;                                            // 0x0013568c: lui $a0, 0x22
    goto label_0x1356ec;                                        // 0x00135690: b 0x1356ec
    a0 = &str_00224188;  // "cvFsOpen #5:vtbl error"            // 0x00135694: addiu $a0, $a0, 0x4188
label_0x135698:
    v0 = *(int32_t*)((v0) + 0x10);                              // 0x00135698: lw $v0, 0x10($v0)
    if (v0 == 0) goto label_0x1356b8;                           // 0x0013569c: beqz $v0, 0x1356b8
    /* call function at address in v0 */                        // 0x001356a8: jalr $v0
    goto label_0x1356d0;                                        // 0x001356b0: b 0x1356d0
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001356b4: sw $v0, 4($s0)
label_0x1356b8:
    func_00135780();  // 135780                                // 0x001356b8: jal 0x135780
    a0 = 0x22 << 16;                                            // 0x001356c0: lui $a0, 0x22
    goto label_0x1356ec;                                        // 0x001356c4: b 0x1356ec
    a0 = &str_002241a8;  // "cvFsOpen #6:open failed"           // 0x001356c8: addiu $a0, $a0, 0x41a8
    /* nop */                                                   // 0x001356cc: nop 
label_0x1356d0:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001356d0: lw $v0, 4($s0)
    /* bnezl $v0, 0x1356f8 */                                   // 0x001356d4: bnezl $v0, 0x1356f8
    func_00135780();  // 135780                                // 0x001356dc: jal 0x135780
    a0 = 0x22 << 16;                                            // 0x001356e4: lui $a0, 0x22
    a0 = &str_002241c0;  // "cvFsClose #1:handle error"         // 0x001356e8: addiu $a0, $a0, 0x41c0
label_0x1356ec:
    func_00134ec0();  // 134ec0                                // 0x001356ec: jal 0x134ec0
    /* nop */                                                   // 0x001356f0: nop 
    return;                                                     // 0x00135710: jr $ra
    sp = sp + 0x290;                                            // 0x00135714: addiu $sp, $sp, 0x290
}