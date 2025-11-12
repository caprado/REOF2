void func_0016d1c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x0016d1c8: addiu $sp, $sp, -0x40
    s2 = 0x80;                                                  // 0x0016d1e0: addiu $s2, $zero, 0x80
    s3 = 4;                                                     // 0x0016d1e8: addiu $s3, $zero, 4
    goto label_0x16d218;                                        // 0x0016d1ec: b 0x16d218
    /* nop */                                                   // 0x0016d1f4: nop 
label_0x16d1f8:
    v1 = *(int32_t*)(s0);                                       // 0x0016d1f8: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0016d200: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0016d204: jalr $v0
    func_0016d2a8();  // 0x16d288                                // 0x0016d210: jal 0x16d288
    a1 = 4;                                                     // 0x0016d214: addiu $a1, $zero, 4
label_0x16d218:
    v0 = *(int32_t*)(s0);                                       // 0x0016d218: lw $v0, 0($s0)
    a1 = 1;                                                     // 0x0016d220: addiu $a1, $zero, 1
    a2 = 4;                                                     // 0x0016d224: addiu $a2, $zero, 4
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x0016d228: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0016d22c: jalr $v1
    v0 = local_4;                                               // 0x0016d234: lw $v0, 4($sp)
    if (v0 != s3) goto label_0x16d254;                          // 0x0016d238: bnel $v0, $s3, 0x16d254
    v1 = *(int32_t*)(s0);                                       // 0x0016d23c: lw $v1, 0($s0)
    func_00158310();  // 0x158278                                // 0x0016d240: jal 0x158278
    a0 = local_0;                                               // 0x0016d244: lw $a0, 0($sp)
    if (v0 == s2) goto label_0x16d1f8;                          // 0x0016d248: beq $v0, $s2, 0x16d1f8
    v1 = *(int32_t*)(s0);                                       // 0x0016d250: lw $v1, 0($s0)
label_0x16d254:
    a1 = 1;                                                     // 0x0016d258: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0016d25c: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0016d260: jalr $v0
    return;                                                     // 0x0016d27c: jr $ra
    sp = sp + 0x40;                                             // 0x0016d280: addiu $sp, $sp, 0x40
}