void func_0013d570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0013d570: addiu $sp, $sp, -0x40
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d5a0: lw $v0, 0x28($s0)
    if (v0 == 0) goto label_0x13d650;                           // 0x0013d5a4: beqz $v0, 0x13d650
    v0 = *(int8_t*)((s0) + 3);                                  // 0x0013d5ac: lb $v0, 3($s0)
    s1 = 1;                                                     // 0x0013d5b0: addiu $s1, $zero, 1
    if (v0 != s1) goto label_0x13d5e0;                          // 0x0013d5b4: bne $v0, $s1, 0x13d5e0
    a3 = *(uint8_t*)((s0) + 3);                                 // 0x0013d5b8: lbu $a3, 3($s0)
    a2 = *(int32_t*)((s0) + 0x20);                              // 0x0013d5bc: lw $a2, 0x20($s0)
    v0 = a2 << 5;                                               // 0x0013d5c0: sll $v0, $a2, 5
    v0 = s0 + v0;                                               // 0x0013d5c4: addu $v0, $s0, $v0
    v0 = v0 + 0x38;                                             // 0x0013d5c8: addiu $v0, $v0, 0x38
    s5 = *(int32_t*)((v0) + 0x14);                              // 0x0013d5cc: lw $s5, 0x14($v0)
    s4 = *(int32_t*)((v0) + 0x10);                              // 0x0013d5d0: lw $s4, 0x10($v0)
    s3 = *(int32_t*)((v0) + 4);                                 // 0x0013d5d4: lw $s3, 4($v0)
    goto label_0x13d5e4;                                        // 0x0013d5d8: b 0x13d5e4
    s2 = *(int32_t*)((v0) + 0xc);                               // 0x0013d5dc: lw $s2, 0xc($v0)
label_0x13d5e0:
    a2 = *(int32_t*)((s0) + 0x20);                              // 0x0013d5e0: lw $a2, 0x20($s0)
label_0x13d5e4:
    a0 = a2 + 1;                                                // 0x0013d5e4: addiu $a0, $a2, 1
    a2 = a2 + 0x10;                                             // 0x0013d5e8: addiu $a2, $a2, 0x10
    a1 = (a0 < 0) ? 1 : 0;                                      // 0x0013d5ec: slti $a1, $a0, 0
    if (a1 != 0) v0 = a2;                                       // 0x0013d5f4: movn $v0, $a2, $a1
    v1 = *(int32_t*)((s0) + 0x24);                              // 0x0013d5f8: lw $v1, 0x24($s0)
    v0 = v0 >> 4;                                               // 0x0013d5fc: sra $v0, $v0, 4
    v0 = v0 << 4;                                               // 0x0013d600: sll $v0, $v0, 4
    v1 = v1 + -1;                                               // 0x0013d604: addiu $v1, $v1, -1
    a0 = a0 - v0;                                               // 0x0013d608: subu $a0, $a0, $v0
    *(uint32_t*)((s0) + 0x24) = v1;                             // 0x0013d60c: sw $v1, 0x24($s0)
    if (v1 > 0) goto label_0x13d628;                            // 0x0013d610: bgtz $v1, 0x13d628
    *(uint32_t*)((s0) + 0x20) = a0;                             // 0x0013d614: sw $a0, 0x20($s0)
    func_0013d0f0();  // 13d0f0                                // 0x0013d618: jal 0x13d0f0
    /* nop */                                                   // 0x0013d61c: nop 
    *(uint8_t*)((s0) + 1) = s1;                                 // 0x0013d620: sb $s1, 1($s0)
    a3 = *(uint8_t*)((s0) + 3);                                 // 0x0013d624: lbu $a3, 3($s0)
label_0x13d628:
    v0 = a3 << 0x18;                                            // 0x0013d628: sll $v0, $a3, 0x18
    v0 = v0 >> 0x18;                                            // 0x0013d62c: sra $v0, $v0, 0x18
    if (v0 != s1) goto label_0x13d654;                          // 0x0013d630: bnel $v0, $s1, 0x13d654
    func_0013c9f8();  // 13c9f8                                // 0x0013d648: jal 0x13c9f8
label_0x13d650:
label_0x13d654:
    return;                                                     // 0x0013d66c: jr $ra
    sp = sp + 0x40;                                             // 0x0013d670: addiu $sp, $sp, 0x40
}