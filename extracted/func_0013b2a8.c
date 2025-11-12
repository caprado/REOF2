void func_0013b2a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x10;                                            // 0x0013b2a8: addiu $sp, $sp, -0x10
    a2 = 0x30;                                                  // 0x0013b2b4: addiu $a2, $zero, 0x30
    return func_00107d30();  // Tail call                        // 0x0013b2bc: j 0x107c70
    sp = sp + 0x10;                                             // 0x0013b2c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013b2c4: nop 
    sp = sp + -0x30;                                            // 0x0013b2c8: addiu $sp, $sp, -0x30
    if (s1 != 0) goto label_0x13b2f8;                           // 0x0013b2e0: bnez $s1, 0x13b2f8
    a1 = 0x22 << 16;                                            // 0x0013b2e8: lui $a1, 0x22
    goto label_0x13b330;                                        // 0x0013b2ec: b 0x13b330
    a1 = &str_00225848;  // "E0092709:rw is illigal.(htCiOpen)" // 0x0013b2f0: addiu $a1, $a1, 0x5848
    /* nop */                                                   // 0x0013b2f4: nop 
label_0x13b2f8:
    if (a2 == 0) goto label_0x13b310;                           // 0x0013b2f8: beqz $a2, 0x13b310
    a1 = 0x22 << 16;                                            // 0x0013b2fc: lui $a1, 0x22
    goto label_0x13b330;                                        // 0x0013b304: b 0x13b330
    a1 = &str_00225870;  // "E0092710:not enough handle resource.(htCiOpen)" // 0x0013b308: addiu $a1, $a1, 0x5870
    /* nop */                                                   // 0x0013b30c: nop 
label_0x13b310:
    func_0013b2a8();  // 0x13b270                                // 0x0013b310: jal 0x13b270
    /* nop */                                                   // 0x0013b314: nop 
    if (s0 != 0) goto label_0x13b340;                           // 0x0013b31c: bnez $s0, 0x13b340
    a1 = 0x22 << 16;                                            // 0x0013b324: lui $a1, 0x22
    a1 = &str_00225898;  // "HTCI: File cache was not hit. \\"  // 0x0013b32c: addiu $a1, $a1, 0x5898
label_0x13b330:
    func_0013acb8();  // 0x13ac88                                // 0x0013b330: jal 0x13ac88
    /* nop */                                                   // 0x0013b334: nop 
    goto label_0x13b438;                                        // 0x0013b338: b 0x13b438
label_0x13b340:
    func_0013c4f8();  // 0x13c4a8                                // 0x0013b340: jal 0x13c4a8
    v0 = local_4;                                               // 0x0013b348: lw $v0, 4($sp)
    if (v0 != 0) goto label_0x13b3f0;                           // 0x0013b34c: bnez $v0, 0x13b3f0
    v0 = 1;                                                     // 0x0013b350: addiu $v0, $zero, 1
    v0 = 0x20 << 16;                                            // 0x0013b354: lui $v0, 0x20
    s2 = v0 + 0x4360;                                           // 0x0013b35c: addiu $s2, $v0, 0x4360
    func_0013bc58();  // 0x13bb40                                // 0x0013b360: jal 0x13bb40
    v0 = 0x20 << 16;                                            // 0x0013b368: lui $v0, 0x20
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013b36c: lw $v1, 0x44a4($v0)
    if (v1 != 0) goto label_0x13b384;                           // 0x0013b370: bnez $v1, 0x13b384
    a0 = 0x22 << 16;                                            // 0x0013b374: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013b37c: jal 0x116508
    a0 = &str_002258c8;  // "E0092711:sceOpen fail.(htCiOpen)"  // 0x0013b380: addiu $a0, $a0, 0x58c8
label_0x13b384:
    func_0013b1e8();  // 0x13aff0                                // 0x0013b384: jal 0x13aff0
    if (v1 == 0) goto label_0x13b438;                           // 0x0013b394: beqz $v1, 0x13b438
    func_00137fb0();  // 0x137ec8                                // 0x0013b39c: jal 0x137ec8
    a0 = 0x4900;                                                // 0x0013b3a0: addiu $a0, $zero, 0x4900
    v0 = 0x20 << 16;                                            // 0x0013b3a4: lui $v0, 0x20
    a1 = g_002044a0;  // Global at 0x002044a0                   // 0x0013b3a8: lw $a1, 0x44a0($v0)
    func_00138240();  // 0x1381d8                                // 0x0013b3ac: jal 0x1381d8
    a0 = 0x4901;                                                // 0x0013b3b4: addiu $a0, $zero, 0x4901
    func_00137fb0();  // 0x137ec8                                // 0x0013b3b8: jal 0x137ec8
    *(uint32_t*)((s0) + 0x18) = v0;                             // 0x0013b3bc: sw $v0, 0x18($s0)
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0013b3c0: lw $v0, 0x18($s0)
    if (v0 >= 0) goto label_0x13b404;                           // 0x0013b3c4: bgezl $v0, 0x13b404
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x0013b3c8: sb $zero, 1($s0)
    a1 = 0x22 << 16;                                            // 0x0013b3cc: lui $a1, 0x22
    func_0013acb8();  // 0x13ac88                                // 0x0013b3d4: jal 0x13ac88
    a1 = &str_002258f0;  // "HTCI: Failed sceClose\n"           // 0x0013b3d8: addiu $a1, $a1, 0x58f0
    func_0013b450();  // 0x13b2a8                                // 0x0013b3dc: jal 0x13b2a8
    goto label_0x13b438;                                        // 0x0013b3e4: b 0x13b438
    /* nop */                                                   // 0x0013b3ec: nop 
label_0x13b3f0:
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x0013b3f0: sb $v0, 1($s0)
    v1 = local_0;                                               // 0x0013b3f4: lw $v1, 0($sp)
    *(uint32_t*)((s0) + 0x18) = v1;                             // 0x0013b3f8: sw $v1, 0x18($s0)
    v0 = local_4;                                               // 0x0013b3fc: lw $v0, 4($sp)
label_0x13b404:
    v0 = 1;                                                     // 0x0013b408: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x0013b40c: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x0013b414: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x0013b420: sw $zero, 0x24($s0)
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x0013b424: sw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x0013b428: sw $zero, 0x14($s0)
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x0013b42c: sb $zero, 2($s0)
    *(uint8_t*)(s0) = v0;                                       // 0x0013b430: sb $v0, 0($s0)
label_0x13b438:
    return;                                                     // 0x0013b448: jr $ra
    sp = sp + 0x30;                                             // 0x0013b44c: addiu $sp, $sp, 0x30
}