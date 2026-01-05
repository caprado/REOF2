void func_0012fdc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0012fdc8: addiu $sp, $sp, -0x40
    func_001261a0();  // 1261a0                                // 0x0012fdfc: jal 0x1261a0
    s5 = 1;                                                     // 0x0012fe00: addiu $s5, $zero, 1
    a3 = s0 + 0x7ff;                                            // 0x0012fe04: addiu $a3, $s0, 0x7ff
    v1 = (s0 < 0) ? 1 : 0;                                      // 0x0012fe08: slti $v1, $s0, 0
    a2 = 0xf << 16;                                             // 0x0012fe10: lui $a2, 0xf
    if (v1 != 0) v0 = a3;                                       // 0x0012fe14: movn $v0, $a3, $v1
    a3 = 0x200;                                                 // 0x0012fe18: addiu $a3, $zero, 0x200
    v0 = v0 >> 0xb;                                             // 0x0012fe1c: sra $v0, $v0, 0xb
    a2 = a2 | 0xffff;                                           // 0x0012fe20: ori $a2, $a2, 0xffff
    v1 = v0 << 0xb;                                             // 0x0012fe24: sll $v1, $v0, 0xb
    v1 = s0 - v1;                                               // 0x0012fe2c: subu $v1, $s0, $v1
    t0 = v0 + 1;                                                // 0x0012fe34: addiu $t0, $v0, 1
    *(uint32_t*)((s3) + 8) = s1;                                // 0x0012fe38: sw $s1, 8($s3)
    *(uint32_t*)((s3) + 0xc) = s2;                              // 0x0012fe3c: sw $s2, 0xc($s3)
    *(uint32_t*)((s3) + 0x28) = a3;                             // 0x0012fe40: sw $a3, 0x28($s3)
    *(uint32_t*)((s3) + 0x58) = a2;                             // 0x0012fe44: sw $a2, 0x58($s3)
    *(uint8_t*)((s3) + 1) = s5;                                 // 0x0012fe48: sb $s5, 1($s3)
    *(uint8_t*)((s3) + 2) = 0;                                  // 0x0012fe4c: sb $zero, 2($s3)
    *(uint32_t*)((s3) + 4) = s4;                                // 0x0012fe50: sw $s4, 4($s3)
    *(uint32_t*)((s3) + 0x2c) = v0;                             // 0x0012fe54: sw $v0, 0x2c($s3)
    *(uint32_t*)((s3) + 0x10) = s0;                             // 0x0012fe58: sw $s0, 0x10($s3)
    if (v1 <= 0) goto label_0x12fe68;                           // 0x0012fe5c: blez $v1, 0x12fe68
    *(uint32_t*)((s3) + 0x54) = 0;                              // 0x0012fe60: sw $zero, 0x54($s3)
    *(uint32_t*)((s3) + 0x2c) = t0;                             // 0x0012fe64: sw $t0, 0x2c($s3)
label_0x12fe68:
    v0 = *(int32_t*)((s3) + 4);                                 // 0x0012fe68: lw $v0, 4($s3)
    /* beqzl $v0, 0x12feb0 */                                   // 0x0012fe6c: beqzl $v0, 0x12feb0
    *(uint8_t*)(s3) = s5;                                       // 0x0012fe70: sb $s5, 0($s3)
    v1 = *(int32_t*)(s4);                                       // 0x0012fe74: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012fe78: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0012fe7c: jalr $v0
    /* nop */                                                   // 0x0012fe80: nop 
    v1 = *(int32_t*)(s4);                                       // 0x0012fe84: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012fe90: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0012fe94: jalr $v0
    a1 = 1;                                                     // 0x0012fe98: addiu $a1, $zero, 1
    s0 = s0 + v0;                                               // 0x0012fe9c: addu $s0, $s0, $v0
    *(uint32_t*)((s3) + 0x18) = s0;                             // 0x0012fea0: sw $s0, 0x18($s3)
    *(uint32_t*)((s3) + 0x3c) = s0;                             // 0x0012fea4: sw $s0, 0x3c($s3)
    *(uint32_t*)((s3) + 0x14) = s0;                             // 0x0012fea8: sw $s0, 0x14($s3)
    *(uint8_t*)(s3) = s5;                                       // 0x0012feac: sb $s5, 0($s3)
    *(uint8_t*)((s3) + 0x40) = 0;                               // 0x0012feb0: sb $zero, 0x40($s3)
    return func_001261d0();  // Tail call                        // 0x0012fed0: j 0x1261b8
    sp = sp + 0x40;                                             // 0x0012fed4: addiu $sp, $sp, 0x40
    t5 = 0x20 << 16;                                            // 0x0012fed8: lui $t5, 0x20
    sp = sp + -0x10;                                            // 0x0012fedc: addiu $sp, $sp, -0x10
    t1 = g_00200ea4;  // Global at 0x00200ea4                   // 0x0012fee0: lw $t1, 0xea4($t5)
    if (t1 <= 0) goto label_0x12ff80;                           // 0x0012ff00: blez $t1, 0x12ff80
    v0 = 0x20 << 16;                                            // 0x0012ff08: lui $v0, 0x20
    a0 = 0x20 << 16;                                            // 0x0012ff0c: lui $a0, 0x20
    a3 = v0 + 0xea0;                                            // 0x0012ff10: addiu $a3, $v0, 0xea0
    a0 = a0 + 0xec0;                                            // 0x0012ff14: addiu $a0, $a0, 0xec0
    v1 = g_00200ea0;  // Global at 0x00200ea0                   // 0x0012ff18: lw $v1, 0($a3)
    v0 = v1 << 1;                                               // 0x0012ff1c: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0012ff20: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x0012ff24: sll $v0, $v0, 3
    v0 = v0 - v1;                                               // 0x0012ff28: subu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x0012ff2c: sll $v0, $v0, 2
    s0 = v0 + a0;                                               // 0x0012ff30: addu $s0, $v0, $a0
    v1 = *(int8_t*)(s0);                                        // 0x0012ff34: lb $v1, 0($s0)
    if (v1 == 0) goto label_0x12ff84;                           // 0x0012ff38: beqz $v1, 0x12ff84
    v1 = g_00200ea4;  // Global at 0x00200ea4                   // 0x0012ff3c: lw $v1, 0xea4($t5)
    a1 = a1 + 1;                                                // 0x0012ff44: addiu $a1, $a1, 1
    v0 = (a1 < a2) ? 1 : 0;                                     // 0x0012ff48: slt $v0, $a1, $a2
    if (v0 == 0) goto label_0x12ff84;                           // 0x0012ff4c: beqz $v0, 0x12ff84
    v1 = g_00200ea4;  // Global at 0x00200ea4                   // 0x0012ff50: lw $v1, 0xea4($t5)
    v0 = g_00200ea0;  // Global at 0x00200ea0                   // 0x0012ff54: lw $v0, 0($a3)
    v0 = v0 + a1;                                               // 0x0012ff58: addu $v0, $v0, $a1
    v1 = v0 << 1;                                               // 0x0012ff5c: sll $v1, $v0, 1
    v1 = v1 + v0;                                               // 0x0012ff60: addu $v1, $v1, $v0
    v1 = v1 << 3;                                               // 0x0012ff64: sll $v1, $v1, 3
    v1 = v1 - v0;                                               // 0x0012ff68: subu $v1, $v1, $v0
    v1 = v1 << 2;                                               // 0x0012ff6c: sll $v1, $v1, 2
    s0 = v1 + a0;                                               // 0x0012ff70: addu $s0, $v1, $a0
    v0 = *(int8_t*)(s0);                                        // 0x0012ff74: lb $v0, 0($s0)
    /* bnezl $v0, 0x12ff48 */                                   // 0x0012ff78: bnezl $v0, 0x12ff48
    a1 = a1 + 1;                                                // 0x0012ff7c: addiu $a1, $a1, 1
label_0x12ff80:
    v1 = g_00200ea4;  // Global at 0x00200ea4                   // 0x0012ff80: lw $v1, 0xea4($t5)
label_0x12ff84:
    if (a1 == v1) goto label_0x12ffa4;                          // 0x0012ff84: beq $a1, $v1, 0x12ffa4
    func_0012fdc8();  // 12fdc8                                // 0x0012ff98: jal 0x12fdc8
label_0x12ffa4:
    return;                                                     // 0x0012ffac: jr $ra
    sp = sp + 0x10;                                             // 0x0012ffb0: addiu $sp, $sp, 0x10
}