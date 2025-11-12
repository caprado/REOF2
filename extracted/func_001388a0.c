void func_001388a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001388a0: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x001388a4: addiu $v1, $zero, 1
    *(uint8_t*)((s2) + 1) = 0;                                  // 0x001388bc: sb $zero, 1($s2)
    v0 = *(int8_t*)((s2) + 2);                                  // 0x001388c0: lb $v0, 2($s2)
    if (v0 != v1) goto label_0x13893c;                          // 0x001388c4: bne $v0, $v1, 0x13893c
    /* nop */                                                   // 0x001388cc: nop 
label_0x1388d0:
    sceSifSetDma();  // 0x114680                                // 0x001388d0: jal 0x114680
    a0 = *(int32_t*)((s2) + 0x2c);                              // 0x001388d4: lw $a0, 0x2c($s2)
    if (v0 >= 0) goto label_0x1388d0;                           // 0x001388d8: bgez $v0, 0x1388d0
    s0 = s2 + 0xc;                                              // 0x001388dc: addiu $s0, $s2, 0xc
    a0 = *(int32_t*)((s2) + 4);                                 // 0x001388e0: lw $a0, 4($s2)
    v1 = *(int32_t*)(a0);                                       // 0x001388ec: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x001388f0: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x001388f4: jalr $v0
    s1 = s2 + 0x14;                                             // 0x001388f8: addiu $s1, $s2, 0x14
    *(uint32_t*)(s0) = 0;                                       // 0x001388fc: sw $zero, 0($s0)
    a0 = *(int32_t*)((s2) + 8);                                 // 0x00138900: lw $a0, 8($s2)
    a1 = 1;                                                     // 0x00138904: addiu $a1, $zero, 1
    *(uint32_t*)((s2) + 0x10) = 0;                              // 0x00138908: sw $zero, 0x10($s2)
    v1 = *(int32_t*)(a0);                                       // 0x0013890c: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00138910: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00138914: jalr $v0
    *(uint32_t*)(s1) = 0;                                       // 0x0013891c: sw $zero, 0($s1)
    v0 = *(int32_t*)((s2) + 0x3c);                              // 0x00138920: lw $v0, 0x3c($s2)
    v1 = *(int32_t*)((s2) + 0x10);                              // 0x00138924: lw $v1, 0x10($s2)
    *(uint8_t*)((s2) + 2) = 0;                                  // 0x00138928: sb $zero, 2($s2)
    v0 = v0 + v1;                                               // 0x0013892c: addu $v0, $v0, $v1
    *(uint32_t*)((s2) + 0x18) = 0;                              // 0x00138930: sw $zero, 0x18($s2)
    *(uint32_t*)((s2) + 0x3c) = v0;                             // 0x00138934: sw $v0, 0x3c($s2)
label_0x13893c:
    return;                                                     // 0x00138948: jr $ra
    sp = sp + 0x20;                                             // 0x0013894c: addiu $sp, $sp, 0x20
}