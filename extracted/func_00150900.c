void func_00150900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00150900: addiu $sp, $sp, -0x50
    s3 = sp + 0x10;                                             // 0x00150918: addiu $s3, $sp, 0x10
    goto label_0x150a8c;                                        // 0x00150920: b 0x150a8c
    a2 = 0x7fff << 16;                                          // 0x00150928: lui $a2, 0x7fff
    a1 = 1;                                                     // 0x00150930: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00150934: lw $v0, 0x18($v1)
    a2 = a2 | 0xffff;                                           // 0x00150938: ori $a2, $a2, 0xffff
    /* call function at address in v0 */                        // 0x0015093c: jalr $v0
    v0 = 0x10;                                                  // 0x00150944: addiu $v0, $zero, 0x10
    if (s0 == v0) goto label_0x1509e8;                          // 0x00150948: beq $s0, $v0, 0x1509e8
    v0 = ((unsigned)s0 < (unsigned)0x11) ? 1 : 0;               // 0x00150950: sltiu $v0, $s0, 0x11
    if (v0 == 0) goto label_0x150978;                           // 0x00150954: beqz $v0, 0x150978
    v0 = 0x40;                                                  // 0x00150958: addiu $v0, $zero, 0x40
    v0 = 4;                                                     // 0x0015095c: addiu $v0, $zero, 4
    if (s0 == v0) goto label_0x150a10;                          // 0x00150960: beq $s0, $v0, 0x150a10
    v0 = 8;                                                     // 0x00150964: addiu $v0, $zero, 8
    if (s0 == v0) goto label_0x150a00;                          // 0x00150968: beq $s0, $v0, 0x150a00
    a1 = local_0;                                               // 0x0015096c: lw $a1, 0($sp)
    goto label_0x150a20;                                        // 0x00150970: b 0x150a20
    /* nop */                                                   // 0x00150974: nop 
label_0x150978:
    if (s0 == v0) goto label_0x1509b0;                          // 0x00150978: beq $s0, $v0, 0x1509b0
    v0 = ((unsigned)s0 < (unsigned)0x41) ? 1 : 0;               // 0x0015097c: sltiu $v0, $s0, 0x41
    if (v0 == 0) goto label_0x1509a0;                           // 0x00150980: beqz $v0, 0x1509a0
    v0 = 0x80;                                                  // 0x00150984: addiu $v0, $zero, 0x80
    v0 = 0x20;                                                  // 0x00150988: addiu $v0, $zero, 0x20
    if (s0 == v0) goto label_0x1509d8;                          // 0x0015098c: beq $s0, $v0, 0x1509d8
    a1 = local_0;                                               // 0x00150990: lw $a1, 0($sp)
    goto label_0x150a20;                                        // 0x00150994: b 0x150a20
    /* nop */                                                   // 0x00150998: nop 
    /* nop */                                                   // 0x0015099c: nop 
label_0x1509a0:
    if (s0 == v0) goto label_0x1509c8;                          // 0x001509a0: beq $s0, $v0, 0x1509c8
    a1 = local_0;                                               // 0x001509a4: lw $a1, 0($sp)
    goto label_0x150a20;                                        // 0x001509a8: b 0x150a20
    /* nop */                                                   // 0x001509ac: nop 
label_0x1509b0:
    a1 = local_0;                                               // 0x001509b0: lw $a1, 0($sp)
    func_00150df8();  // 150df8                                // 0x001509b4: jal 0x150df8
    goto label_0x150a20;                                        // 0x001509bc: b 0x150a20
    /* nop */                                                   // 0x001509c4: nop 
label_0x1509c8:
    func_00151538();  // 151538                                // 0x001509c8: jal 0x151538
    goto label_0x150a20;                                        // 0x001509d0: b 0x150a20
label_0x1509d8:
    func_00151630();  // 151630                                // 0x001509d8: jal 0x151630
    goto label_0x150a20;                                        // 0x001509e0: b 0x150a20
label_0x1509e8:
    a1 = local_0;                                               // 0x001509e8: lw $a1, 0($sp)
    func_00151980();  // 151980                                // 0x001509ec: jal 0x151980
    goto label_0x150a20;                                        // 0x001509f4: b 0x150a20
    /* nop */                                                   // 0x001509fc: nop 
label_0x150a00:
    func_00154938();  // 154938                                // 0x00150a00: jal 0x154938
    goto label_0x150a20;                                        // 0x00150a08: b 0x150a20
label_0x150a10:
    a1 = local_0;                                               // 0x00150a10: lw $a1, 0($sp)
    func_00154e68();  // 154e68                                // 0x00150a14: jal 0x154e68
label_0x150a20:
    if (v1 != 0) goto label_0x150a48;                           // 0x00150a20: bnez $v1, 0x150a48
    a1 = local_0;                                               // 0x00150a24: lw $a1, 0($sp)
    v1 = *(int32_t*)(s1);                                       // 0x00150a28: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x00150a30: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00150a34: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00150a38: jalr $v0
    goto label_0x150aa4;                                        // 0x00150a40: b 0x150aa4
label_0x150a48:
    func_001404a0();  // 1404a0                                // 0x00150a54: jal 0x1404a0
    a1 = v1 - a1;                                               // 0x00150a58: subu $a1, $v1, $a1
    v1 = *(int32_t*)(s1);                                       // 0x00150a5c: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00150a68: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00150a6c: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x00150a74: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x00150a7c: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00150a80: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00150a84: jalr $v0
label_0x150a8c:
    func_0015aaa8();  // 15aaa8                                // 0x00150a8c: jal 0x15aaa8
    /* bnezl $s0, 0x150928 */                                   // 0x00150a98: bnezl $s0, 0x150928
    v1 = *(int32_t*)(s1);                                       // 0x00150a9c: lw $v1, 0($s1)
label_0x150aa4:
    return;                                                     // 0x00150ab4: jr $ra
    sp = sp + 0x50;                                             // 0x00150ab8: addiu $sp, $sp, 0x50
}