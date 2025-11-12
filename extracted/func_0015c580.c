void func_0015c580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015c580: addiu $sp, $sp, -0x30
    a1 = *(int32_t*)((s0) + 0xd4);                              // 0x0015c59c: lw $a1, 0xd4($s0)
    /* bnezl $a1, 0x15c5d0 */                                   // 0x0015c5a0: bnezl $a1, 0x15c5d0
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x0015c5a4: lw $v1, 0x1c($s0)
    a0 = 0x22 << 16;                                            // 0x0015c5a8: lui $a0, 0x22
    a0 = &str_00227090;  // "E02120502: mwsfcre_AttachPicUsrBuf(): usrdatbuf is short." // 0x0015c5b4: addiu $a0, $a0, 0x7090
    return func_001634a8();  // Tail call                        // 0x0015c5c4: j 0x163410
    sp = sp + 0x30;                                             // 0x0015c5c8: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0015c5cc: nop 
    s3 = *(int32_t*)((a1) + 8);                                 // 0x0015c5d0: lw $s3, 8($a1)
    s2 = v1 + 4;                                                // 0x0015c5d4: addiu $s2, $v1, 4
    v0 = *(int32_t*)((a1) + 4);                                 // 0x0015c5d8: lw $v0, 4($a1)
    /* multiply: s2 * s3 -> hi:lo */                            // 0x0015c5dc: mult $ac3, $s2, $s3
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0015c5e0: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x15c610;                           // 0x0015c5e4: beqz $v0, 0x15c610
    s1 = *(int32_t*)(a1);                                       // 0x0015c5e8: lw $s1, 0($a1)
    a0 = 0x22 << 16;                                            // 0x0015c5ec: lui $a0, 0x22
    a0 = &str_002270c8;  // "E02120503: mwPlyAttachPicUsrBuf(): bufsize is short." // 0x0015c5f8: addiu $a0, $a0, 0x70c8
    return func_001634a8();  // Tail call                        // 0x0015c608: j 0x163410
    sp = sp + 0x30;                                             // 0x0015c60c: addiu $sp, $sp, 0x30
label_0x15c610:
    func_0015e610();  // 0x15e5f0                                // 0x0015c610: jal 0x15e5f0
    /* nop */                                                   // 0x0015c614: nop 
    v1 = 1;                                                     // 0x0015c618: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x15c650;                          // 0x0015c61c: bnel $v0, $v1, 0x15c650
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0015c624: lw $a0, 0x40($s0)
    return func_0016bee8();  // Tail call                        // 0x0015c648: j 0x16bda8
    sp = sp + 0x30;                                             // 0x0015c64c: addiu $sp, $sp, 0x30
label_0x15c650:
    return;                                                     // 0x0015c660: jr $ra
    sp = sp + 0x30;                                             // 0x0015c664: addiu $sp, $sp, 0x30
}