void func_00159440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00159440: addiu $sp, $sp, -0x30
    a1 = *(int32_t*)((s2) + 4);                                 // 0x00159464: lw $a1, 4($s2)
    func_0013f0e8();  // 0x13f020                                // 0x00159468: jal 0x13f020
    a0 = *(int32_t*)(s2);                                       // 0x0015946c: lw $a0, 0($s2)
    v0 = -1;                                                    // 0x00159478: addiu $v0, $zero, -1
    if (s1 == 0) goto label_0x1594c4;                           // 0x0015947c: beqz $s1, 0x1594c4
    func_001593d0();  // 0x1591e0                                // 0x00159484: jal 0x1591e0
    /* nop */                                                   // 0x00159488: nop 
    v1 = *(int32_t*)(s1);                                       // 0x0015948c: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00159498: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0015949c: jalr $v0
    a1 = 1;                                                     // 0x001594a0: addiu $a1, $zero, 1
    v1 = *(int32_t*)((s2) + 4);                                 // 0x001594a4: lw $v1, 4($s2)
    a1 = *(int32_t*)(s1);                                       // 0x001594a8: lw $a1, 0($s1)
    v1 = v1 - v0;                                               // 0x001594ac: subu $v1, $v1, $v0
    *(uint32_t*)(s3) = v1;                                      // 0x001594b0: sw $v1, 0($s3)
    v0 = *(int32_t*)((a1) + 0xc);                               // 0x001594b4: lw $v0, 0xc($a1)
    /* call function at address in v0 */                        // 0x001594b8: jalr $v0
label_0x1594c4:
    return;                                                     // 0x001594d8: jr $ra
    sp = sp + 0x30;                                             // 0x001594dc: addiu $sp, $sp, 0x30
}