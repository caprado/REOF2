void func_00144608() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00144608: addiu $sp, $sp, -0x20
    v1 = 0x140;                                                 // 0x0014460c: addiu $v1, $zero, 0x140
    t1 = 1;                                                     // 0x00144614: addiu $t1, $zero, 1
    t0 = 2;                                                     // 0x00144620: addiu $t0, $zero, 2
    v0 = *(int32_t*)((a0) + 0x828);                             // 0x00144624: lw $v0, 0x828($a0)
    v0 = t2 + a0;                                               // 0x0014462c: addu $v0, $t2, $a0
    *(uint32_t*)((v0) + 0x6e4) = t1;                            // 0x00144630: sw $t1, 0x6e4($v0)
    *(uint32_t*)((a0) + 0x1c8) = t1;                            // 0x00144634: sw $t1, 0x1c8($a0)
    v0 = *(int32_t*)((a0) + 0x168);                             // 0x00144638: lw $v0, 0x168($a0)
    if (v0 != t0) goto label_0x144658;                          // 0x0014463c: bnel $v0, $t0, 0x144658
    v1 = *(int32_t*)((a0) + 0x18c);                             // 0x00144640: lw $v1, 0x18c($a0)
    str_00226728 = 0;  // Global at 0x00226728                  // 0x00144644: sw $zero, 0($a1)
    g_0022673c = 0;  // Global at 0x0022673c                    // 0x00144648: sw $zero, 0x14($a1)
    g_00226738 = 0;  // Global at 0x00226738                    // 0x0014464c: sw $zero, 0x10($a1)
    g_0022672c = 0;  // Global at 0x0022672c                    // 0x00144650: sw $zero, 4($a1)
    v1 = *(int32_t*)((a0) + 0x18c);                             // 0x00144654: lw $v1, 0x18c($a0)
label_0x144658:
    v0 = 3;                                                     // 0x00144658: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x14466c;                          // 0x0014465c: bnel $v1, $v0, 0x14466c
    *(uint32_t*)(a2) = t1;                                      // 0x00144660: sw $t1, 0($a2)
    goto label_0x144680;                                        // 0x00144664: b 0x144680
    *(uint32_t*)(a2) = t0;                                      // 0x00144668: sw $t0, 0($a2)
label_0x14466c:
    v0 = *(int32_t*)((a0) + 0x18c);                             // 0x0014466c: lw $v0, 0x18c($a0)
    v0 = v0 ^ 2;                                                // 0x00144670: xori $v0, $v0, 2
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00144674: sltiu $v0, $v0, 1
    *(uint32_t*)(a3) = v0;                                      // 0x00144678: sw $v0, 0($a3)
    *(uint32_t*)((a3) + 4) = v0;                                // 0x0014467c: sw $v0, 4($a3)
label_0x144680:
    v1 = *(int32_t*)((a0) + 0x168);                             // 0x00144680: lw $v1, 0x168($a0)
    v0 = 1;                                                     // 0x00144684: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1446a4;                          // 0x00144688: bnel $v1, $v0, 0x1446a4
    v1 = *(int32_t*)(s0);                                       // 0x0014468c: lw $v1, 0($s0)
    a1 = 0x22 << 16;                                            // 0x00144690: lui $a1, 0x22
    func_00148530();  // 148530                                // 0x00144694: jal 0x148530
    a1 = &str_00226728;  // "Invalid macroblock_type code: 0"   // 0x00144698: addiu $a1, $a1, 0x6728
    v1 = *(int32_t*)(s0);                                       // 0x001446a0: lw $v1, 0($s0)
label_0x1446a4:
    a0 = -2;                                                    // 0x001446a4: addiu $a0, $zero, -2
    v1 = v1 & a0;                                               // 0x001446b0: and $v1, $v1, $a0
    *(uint32_t*)(s0) = v1;                                      // 0x001446b4: sw $v1, 0($s0)
    return;                                                     // 0x001446bc: jr $ra
    sp = sp + 0x20;                                             // 0x001446c0: addiu $sp, $sp, 0x20
}