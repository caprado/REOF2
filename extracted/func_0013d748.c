void func_0013d748() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013d748: addiu $sp, $sp, -0x10
    if (t2 >= 0) goto label_0x13d778;                           // 0x0013d754: bgez $t2, 0x13d778
    a0 = 0x22 << 16;                                            // 0x0013d75c: lui $a0, 0x22
    a0 = &str_00225d60;  // "PS2RNA_SetupVoice:Illigal parameter(nmono=%d)." // 0x0013d768: addiu $a0, $a0, 0x5d60
    return func_00116598();  // Tail call                        // 0x0013d76c: j 0x116508
    sp = sp + 0x10;                                             // 0x0013d770: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013d774: nop 
label_0x13d778:
    if (t3 >= 0) goto label_0x13d798;                           // 0x0013d778: bgez $t3, 0x13d798
    v0 = t2 << 1;                                               // 0x0013d77c: sll $v0, $t2, 1
    a0 = 0x22 << 16;                                            // 0x0013d780: lui $a0, 0x22
    a0 = &str_00225d90;  // "PS2RNA_SetupVoice:The set-up value exceeded maximum(MAX=%d)." // 0x0013d788: addiu $a0, $a0, 0x5d90
    return func_00116598();  // Tail call                        // 0x0013d78c: j 0x116508
    sp = sp + 0x10;                                             // 0x0013d790: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013d794: nop 
label_0x13d798:
    t1 = v0 + t3;                                               // 0x0013d798: addu $t1, $v0, $t3
    v1 = t1 << 6;                                               // 0x0013d79c: sll $v1, $t1, 6
    v0 = (t1 < 0x21) ? 1 : 0;                                   // 0x0013d7a0: slti $v0, $t1, 0x21
    if (v0 != 0) goto label_0x13d7c8;                           // 0x0013d7a4: bnez $v0, 0x13d7c8
    v1 = v1 + t1;                                               // 0x0013d7a8: addu $v1, $v1, $t1
    a0 = 0x22 << 16;                                            // 0x0013d7ac: lui $a0, 0x22
    a1 = 0x20;                                                  // 0x0013d7b4: addiu $a1, $zero, 0x20
    a0 = &str_00225dc0;  // "PS2RNA: E01112903: Failed, sceSifAllocIopHeap(%d) in ps2rna_init_psj\n" // 0x0013d7b8: addiu $a0, $a0, 0x5dc0
    return func_00116598();  // Tail call                        // 0x0013d7bc: j 0x116508
    sp = sp + 0x10;                                             // 0x0013d7c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013d7c4: nop 
label_0x13d7c8:
    a3 = v1 << 8;                                               // 0x0013d7cc: sll $a3, $v1, 8
    t0 = 0x20 << 16;                                            // 0x0013d7d0: lui $t0, 0x20
    a0 = 0x20 << 16;                                            // 0x0013d7d4: lui $a0, 0x20
    v1 = 0x20 << 16;                                            // 0x0013d7d8: lui $v1, 0x20
    a1 = 0x20 << 16;                                            // 0x0013d7dc: lui $a1, 0x20
    a2 = 0x20 << 16;                                            // 0x0013d7e0: lui $a2, 0x20
    v0 = 1;                                                     // 0x0013d7e4: addiu $v0, $zero, 1
    g_00207a60 = t2;  // Global at 0x00207a60                   // 0x0013d7e8: sw $t2, 0x7a60($v1)
    g_00207a64 = t3;  // Global at 0x00207a64                   // 0x0013d7ec: sw $t3, 0x7a64($a0)
    g_00207a3c = a3;  // Global at 0x00207a3c                   // 0x0013d7f0: sw $a3, 0x7a3c($a1)
    g_00207a40 = v0;  // Global at 0x00207a40                   // 0x0013d7f4: sw $v0, 0x7a40($a2)
    g_00207a38 = t1;  // Global at 0x00207a38                   // 0x0013d7f8: sw $t1, 0x7a38($t0)
    return;                                                     // 0x0013d7fc: jr $ra
    sp = sp + 0x10;                                             // 0x0013d800: addiu $sp, $sp, 0x10
}