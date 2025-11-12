void func_00151820() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x60;                                            // 0x00151820: addiu $sp, $sp, -0x60
    s2 = *(int32_t*)((s1) + 0x604);                             // 0x00151854: lw $s2, 0x604($s1)
    v0 = s2 << 1;                                               // 0x00151858: sll $v0, $s2, 1
    v0 = v0 + s2;                                               // 0x0015185c: addu $v0, $v0, $s2
    v0 = v0 << 2;                                               // 0x00151860: sll $v0, $v0, 2
    s3 = v0 + 0xe0;                                             // 0x00151864: addiu $s3, $v0, 0xe0
    v1 = s1 + s3;                                               // 0x00151868: addu $v1, $s1, $s3
    s0 = *(int32_t*)((v1) + 0xc);                               // 0x0015186c: lw $s0, 0xc($v1)
    if (s0 == 0) goto label_0x151928;                           // 0x00151870: beqz $s0, 0x151928
    v1 = *(int32_t*)(s0);                                       // 0x00151878: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0015187c: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00151880: jalr $v0
    a0 = local_0;                                               // 0x0015188c: lw $a0, 0($sp)
    func_00107b68();  // 0x107ab8                                // 0x00151890: jal 0x107ab8
    a2 = local_4;                                               // 0x00151894: lw $a2, 4($sp)
    v1 = *(int32_t*)(s0);                                       // 0x00151898: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x001518a0: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x001518a4: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x001518a8: jalr $v0
    v0 = local_4;                                               // 0x001518b4: lw $v0, 4($sp)
    s6 = sp + 0x10;                                             // 0x001518b8: addiu $s6, $sp, 0x10
    a2 = s4 - v0;                                               // 0x001518c0: subu $a2, $s4, $v0
    v0 = (v0 < s4) ? 1 : 0;                                     // 0x001518c4: slt $v0, $v0, $s4
    if (v0 == 0) goto label_0x15190c;                           // 0x001518c8: beqz $v0, 0x15190c
    v0 = *(int32_t*)(s0);                                       // 0x001518d0: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x001518d4: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x001518d8: jalr $v1
    /* nop */                                                   // 0x001518dc: nop 
    a1 = local_4;                                               // 0x001518e0: lw $a1, 4($sp)
    a0 = local_10;                                              // 0x001518e4: lw $a0, 0x10($sp)
    a2 = local_14;                                              // 0x001518e8: lw $a2, 0x14($sp)
    func_00107b68();  // 0x107ab8                                // 0x001518ec: jal 0x107ab8
    a1 = s5 + a1;                                               // 0x001518f0: addu $a1, $s5, $a1
    v1 = *(int32_t*)(s0);                                       // 0x001518f4: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00151900: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00151904: jalr $v0
    a1 = 1;                                                     // 0x00151908: addiu $a1, $zero, 1
label_0x15190c:
    v0 = s1 + s3;                                               // 0x0015190c: addu $v0, $s1, $s3
    v1 = *(int32_t*)((v0) + 0x10);                              // 0x00151910: lw $v1, 0x10($v0)
    /* beqzl $v1, 0x15192c */                                   // 0x00151914: beqzl $v1, 0x15192c
    v0 = 3;                                                     // 0x00151918: addiu $v0, $zero, 3
    a0 = *(int32_t*)((v0) + 0x14);                              // 0x0015191c: lw $a0, 0x14($v0)
    /* call function at address in v1 */                        // 0x00151920: jalr $v1
label_0x151928:
    v0 = 3;                                                     // 0x00151928: addiu $v0, $zero, 3
    if (s2 != v0) goto label_0x151958;                          // 0x0015192c: bne $s2, $v0, 0x151958
    a0 = *(int32_t*)((s1) + 0x11c);                             // 0x00151934: lw $a0, 0x11c($s1)
    if (a0 == 0) goto label_0x151958;                           // 0x00151938: beqz $a0, 0x151958
    a2 = *(int32_t*)((s1) + 0x120);                             // 0x00151940: lw $a2, 0x120($s1)
    v0 = (s4 < a2) ? 1 : 0;                                     // 0x00151944: slt $v0, $s4, $a2
    if (v0 != 0) a2 = s4;                                       // 0x00151948: movn $a2, $s4, $v0
    func_00107b68();  // 0x107ab8                                // 0x0015194c: jal 0x107ab8
    *(uint32_t*)((s1) + 0x124) = a2;                            // 0x00151950: sw $a2, 0x124($s1)
label_0x151958:
    return;                                                     // 0x00151974: jr $ra
    sp = sp + 0x60;                                             // 0x00151978: addiu $sp, $sp, 0x60
}