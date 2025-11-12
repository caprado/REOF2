void func_00174a88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174a88: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((v1) + 0xdac);                             // 0x00174aa8: lw $v0, 0xdac($v1)
    if (v0 == 0) goto label_0x174ac8;                           // 0x00174aac: beqz $v0, 0x174ac8
    return func_00174b10();  // Tail call                       // 0x00174ac0: j 0x174b10
    sp = sp + 0x20;                                             // 0x00174ac4: addiu $sp, $sp, 0x20
label_0x174ac8:
    v0 = *(int32_t*)((v1) + 0xd94);                             // 0x00174ac8: lw $v0, 0xd94($v1)
    if (v0 > 0) goto label_0x174ae0;                            // 0x00174acc: bgtz $v0, 0x174ae0
    goto label_0x174af0;                                        // 0x00174ad4: b 0x174af0
    *(uint32_t*)(s0) = 0;                                       // 0x00174ad8: sw $zero, 0($s0)
    /* nop */                                                   // 0x00174adc: nop 
label_0x174ae0:
    func_0015b7b0();  // 0x15b740                                // 0x00174ae4: jal 0x15b740
    a1 = 0x3e8;                                                 // 0x00174ae8: addiu $a1, $zero, 0x3e8
    *(uint32_t*)(s0) = v0;                                      // 0x00174aec: sw $v0, 0($s0)
label_0x174af0:
    v0 = 0x3e8;                                                 // 0x00174af0: addiu $v0, $zero, 0x3e8
    *(uint32_t*)(s1) = v0;                                      // 0x00174af8: sw $v0, 0($s1)
    return;                                                     // 0x00174b04: jr $ra
    sp = sp + 0x20;                                             // 0x00174b08: addiu $sp, $sp, 0x20
}