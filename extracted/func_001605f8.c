void func_001605f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001605f8: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x160650;                           // 0x00160600: beqz $a0, 0x160650
    v0 = *(int32_t*)((a0) + 0x44);                              // 0x00160608: lw $v0, 0x44($a0)
    v1 = *(int32_t*)((a0) + 0x4c);                              // 0x0016060c: lw $v1, 0x4c($a0)
    if (v0 != 0) goto label_0x160640;                           // 0x00160610: bnez $v0, 0x160640
    if (v1 == 0) goto label_0x160650;                           // 0x00160618: beqz $v1, 0x160650
    v0 = *(int32_t*)((v1) + 0x28);                              // 0x00160620: lw $v0, 0x28($v1)
    if (v0 == 0) goto label_0x160638;                           // 0x00160624: beqz $v0, 0x160638
    return func_00164298();  // Tail call                        // 0x00160630: j 0x164268
    sp = sp + 0x10;                                             // 0x00160634: addiu $sp, $sp, 0x10
label_0x160638:
    goto label_0x160650;                                        // 0x00160638: b 0x160650
label_0x160640:
    return func_00164298();  // Tail call                        // 0x00160644: j 0x164268
    sp = sp + 0x10;                                             // 0x00160648: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016064c: nop 
label_0x160650:
    return;                                                     // 0x00160654: jr $ra
    sp = sp + 0x10;                                             // 0x00160658: addiu $sp, $sp, 0x10
}