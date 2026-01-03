void func_00150600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00150600: addiu $sp, $sp, -0x30
    s0 = a0 + 0x128;                                            // 0x00150608: addiu $s0, $a0, 0x128
    func_00155af8();  // 155af8                                // 0x00150624: jal 0x155af8
    a1 = 0xff03 << 16;                                          // 0x0015062c: lui $a1, 0xff03
    if (v0 == 0) goto label_0x150658;                           // 0x00150634: beqz $v0, 0x150658
    a1 = a1 | 0x20f;                                            // 0x00150638: ori $a1, $a1, 0x20f
    return func_00150380();  // Tail call                        // 0x00150650: j 0x150330
    sp = sp + 0x30;                                             // 0x00150654: addiu $sp, $sp, 0x30
label_0x150658:
    v0 = *(int32_t*)((s0) + 0x2fc);                             // 0x00150658: lw $v0, 0x2fc($s0)
    v0 = v0 << 0xb;                                             // 0x00150660: sll $v0, $v0, 0xb
    *(uint32_t*)(s1) = v0;                                      // 0x00150664: sw $v0, 0($s1)
    v0 = -1;                                                    // 0x00150668: addiu $v0, $zero, -1
    v1 = *(int32_t*)((s0) + 0xe4);                              // 0x00150670: lw $v1, 0xe4($s0)
    *(uint32_t*)(s2) = v1;                                      // 0x00150678: sw $v1, 0($s2)
    *(uint32_t*)(s3) = v0;                                      // 0x0015067c: sw $v0, 0($s3)
    return;                                                     // 0x00150688: jr $ra
    sp = sp + 0x30;                                             // 0x0015068c: addiu $sp, $sp, 0x30
}